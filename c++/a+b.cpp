#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Открываем файлы для чтения и записи
    ifstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");

    // Проверяем, успешно ли открылись файлы
    if (!fin.is_open() || !fout.is_open()) {
        cout << "Ошибка открытия файлов!" << endl;
        return 1;
    }
    long long a, b;
    
    // Считываем два числа из входного файла
    fin >> a >> b;
    // Вычисляем сумму и записываем в выходной файл
    fout << a + b << endl;

    // Закрываем файлы
    fin.close();
    fout.close();

    return 0;
}