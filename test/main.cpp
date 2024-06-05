#include <iostream>
using namespace std;

// Funkcja do odszyfrowywania tekstu
string odszyfruj(string tekst, int n) {
    string odszyfrowanyTekst;
    for (int i = 0; i < tekst.size(); i++) {
        if (tekst[i] == '!') {
            i += n; // Pomijamy n znaków
        } else {
            odszyfrowanyTekst += tekst[i];
        }
    }
    return odszyfrowanyTekst;
}

// Funkcja do wyszukiwania wzorca w tekœcie
bool znajdzWzorzec(string wzorzec, string tekst) {
    int wzorzecLength = wzorzec.size();
    int tekstLength = tekst.size();

    for (int i = 0; i <= tekstLength - wzorzecLength; i++) {
        int j = 0;

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
    int n;
    string szyfr, wzorzec;

    // Wczytywanie danych
    cin >> n;
    cin >> wzorzec;
    cin >> szyfr;

    // Odszyfrowanie szyfru
    string odszyfrowanySzyfr = odszyfruj(szyfr, n);

    // Wyszukiwanie wzorca w odszyfrowanym tekœcie
    if (znajdzWzorzec(wzorzec, odszyfrowanySzyfr)) {
        cout << "T" << endl; // Wzorzec znaleziony
    } else {
        cout << "N" << endl; // Wzorzec nie znaleziony
    }

    return 0;
}
