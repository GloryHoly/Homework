#include <iostream>
#include <fstream>



int main()
{
    int sizeN = 0, sizeM = 0;

    std::ifstream fin("in.txt");

    if (!fin.is_open()) {
        std::cout << "Не получилось открыть файл in.txt" << std::endl;
        return 1;
    }
    fin >> sizeN;
    int* arrN = new int[sizeN]();
   
    for (int i = 0; i < sizeN; i++)
    {
        fin >> arrN[i];
    }
    
    fin >> sizeM;
    int* arrM = new int[sizeM]();

    for (int i = 0; i < sizeM; i++)
    {
        fin >> arrM[i];
    }

    fin.close();
    std::ofstream fout("out.txt");
    
    fout << sizeM << std::endl;
    fout << arrM[sizeM - 1] << " ";
    for (int i = 0; i < sizeM - 1; i++)
    {
        fout << arrM[i] << " ";
    }

    fout << std::endl << sizeN << std::endl;
     for (int i = 1; i < sizeN; i++)
    {
        fout << arrN[i] << " ";
    }
        fout << arrN[0] << " ";

        delete[] arrN;
        delete[] arrM;

    return 0;
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
