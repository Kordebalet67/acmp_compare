#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");

    string s;
    fin >> s;

    if (s.length() != 5) {
        fout << "ERROR" << endl;
        return 0;
    }

    if (s[2] != '-') {
        fout << "ERROR" << endl;
        return 0;
    }

    char c1 = s[0], r1 = s[1], c2 = s[3], r2 = s[4];

    if (c1 < 'A' || c1 > 'H' || c2 < 'A' || c2 > 'H') {
        fout << "ERROR" << endl;
        return 0;
    }

    if (r1 < '1' || r1 > '8' || r2 < '1' || r2 > '8') {
        fout << "ERROR" << endl;
        return 0;
    }

    int dx = abs(c1 - c2);
    int dy = abs(r1 - r2);

    if ((dx == 1 && dy == 2) || (dx == 2 && dy == 1)) {
        fout << "YES" << endl;
    } else {
        fout << "NO" << endl;
    }

    return 0;
}