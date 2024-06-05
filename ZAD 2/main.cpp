#include <iostream>
#include <string>
using namespace std;

int nwd(int a, int b) {
    int c;
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int phi(int n) {
    int suma = n;
    int dzielnik = 2;
    while (n != 1) {
        while (n % dzielnik != 0) {
            dzielnik++;
        }
        suma *= (1 - 1.0 / dzielnik);
        while (n % dzielnik == 0) {
            n /= dzielnik;
        }
    }
    return int(suma);
}

int szybkie(int x, int y, int m) {
    long long result = 1; // Wynik musi być zadeklarowany jako long long, aby uniknąć przepełnienia
    long long base = x % m; // Zabezpieczenie przed przekroczeniem zakresu
    while (y > 0) {
        if (y & 1) {
            result = (result * base) % m;
        }
        base = (base * base) % m;
        y >>= 1; // Przesunięcie bitowe w prawo, równoważne dzieleniu przez 2
    }
    return (int)((result + m) % m); // Wynik konwertowany do typu int bez użycia static_cast
}



int main() {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    int n, d, m, c;
    cin >> n >> d >> m;
    string s;
    int phi_m = phi(m);
    int nwd_d_m = nwd(d, m);
    for (int i = 0; i < n; i++) {
        cin >> c >> s;
        int szybkie_c_d_m = szybkie(c, d, m);
        int shift = szybkie_c_d_m % s.size(); // obliczenie liczby przesunięć modulo rozmiar łańcucha
        // Przesunięcie znaków w łańcuchu przy użyciu operacji na indeksach
        for (int j = 0; j < s.size(); j++) {
            cout << s[(j + shift) % s.size()];
        }
        cout << ' ';
    }
    return 0;
}