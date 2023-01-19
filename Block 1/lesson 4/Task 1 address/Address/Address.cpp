#include <iostream>
#include <windows.h>
#include <fstream>
#include <string> 

class Address
{
private:
    std::string city,
                street;
    int home,
        flat;
public:
        Address(std::string city_name, std::string street_name, int home_number, int flat_number)
    {
            city = city_name;
            street = street_name;
            home = home_number;
            flat = flat_number;
    };
        Address()
        {
            city = " ";
            street = " ";
            home = 0;
            flat = 0;
        }
  
    std::string get_output_address()
    {
        
        std::string address_name = city + " " + street + " " + std::to_string(home) + " " + std::to_string(flat);
        return address_name;
    }
         
};

bool write_address(Address* arr, int size)
{
    std::ofstream fout("out.txt");
    if (!fout.is_open()) {
        std::cout << "Не получилось открыть файл out.txt" << std::endl;
        return 1;
    }
    fout << size << std::endl;
    for (int i = size - 1; i >= 0; i--)
    {
        fout << arr[i].get_output_address() << std::endl;
    }
    fout.close();
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    
    std::string city_name,
                street_name;
    int size,
        home_number,
        flat_number;
    
    std::ifstream fin("in.txt");

    if (!fin.is_open()) {
        std::cout << "Не получилось открыть файл in.txt" << std::endl;
        return 1;
    }
    
    fin >> size;
    Address* arr = new Address[size]();
    for (int i = 0; i < size; i++)
    {
        fin >> city_name;
        fin >> street_name;
        fin >> home_number;
        fin >> flat_number;
        arr[i] = Address{ city_name, street_name, home_number, flat_number };
       
        
    }
     write_address(arr, size);
     fin.close();
     delete[] arr;
    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
