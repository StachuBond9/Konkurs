#include <iostream>
#include <string>
#include <cstdint>
#include <string_view>
using namespace std;

void odszyfruj(string &tekst, int n) {
    size_t i = 0;
    while (i < tekst.length()) {
        if (tekst[i] == '!') {
            tekst.erase(i, n + 1);
            i += n;
        } else {
            i++;
        }
    }
}


bool znajdzWzorzec(const string_view &wzorzec, const string_view &tekst) {
    size_t wzorzecLength = wzorzec.size();
    size_t tekstLength = tekst.size();

    for (size_t i = 0; i <= tekstLength - wzorzecLength; i++) {
        size_t j = 0;
        while (j < wzorzecLength && tekst[i + j] == wzorzec[j]) {
            j++;
        }
        if (j == wzorzecLength) {
            return true; // Wzorzec znaleziony
        }
    }
    return false; // Wzorzec nie znaleziony
}

int main() {
    int16_t n;
    string szyfr;
    string wzorzec;

    cin >> n;
    cin >> wzorzec;
    cin >> szyfr;
    

    odszyfruj(szyfr, n);

    if (znajdzWzorzec(wzorzec, szyfr)) {
        cout << "T";
    } else {
        cout << "N";
    }

    return 0;
}