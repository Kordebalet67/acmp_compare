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