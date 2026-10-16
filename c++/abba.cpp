// 7
// Главный вождь племени Абба не умеет считать. В обмен на одну из его земель вождь другого племени предложил ему выбрать одну из трех куч с золотыми монетами. 
// Но вождю племени Абба хочется получить наибольшее количество золотых монет. Помогите вождю сделать правильный выбор!
// Входные данные
// В первой строке входного файла INPUT.TXT записаны три натуральных числа через пробел. Каждое из чисел не превышает 10100. Числа записаны без ведущих нулей.
// Выходные данные
// В выходной файл OUTPUT.TXT нужно вывести одно целое число — максимальное количество монет, которые может взять вождь. 

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


bool isGreater(const string& a, const string& b) {
    
    if (a.length() > b.length()) {
        return true;
    }
    
    if (a.length() < b.length()) {
        return false;
    }
    
    
    return a > b;
}

int main() {
    
    ifstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");

    if (!fin.is_open() || !fout.is_open()) {
        cout << "Ошибка открытия файлов!" << endl;
        return 1;
    }

    string a, b, c;
    
    
    fin >> a >> b >> c;

    
    string maxCoins = a;

   
    if (isGreater(b, maxCoins)) {
        maxCoins = b;
    }

    if (isGreater(c, maxCoins)) {
        maxCoins = c;
    }


    fout << maxCoins;


    fin.close();
    fout.close();

    return 0;
}