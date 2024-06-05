#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool czy(int n) 
{
    int liczba_dzielnikow = 0;
    vector<int> dzielniki_pierwsze;

    for (int k = 2; k * k <= n; ++k) {
        while (n % k == 0) {
            dzielniki_pierwsze.push_back(k);
            n /= k;
        }
    }
    if (n > 1) {
        dzielniki_pierwsze.push_back(n);
    }

    for (int i = 0; i < dzielniki_pierwsze.size(); ++i) {
        if (i == 0 || dzielniki_pierwsze[i] != dzielniki_pierwsze[i - 1]) {
            liczba_dzielnikow++;
        }
    }

    return liczba_dzielnikow % 2 != 0; // Zwracamy true, jeśli liczba dzielników jest nieparzysta
}



int main() {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);

    int testy;
    cin >> testy;
    while(testy>0)
    {
        testy--;
        int n, m, w;
        cin >> n >> m;
        bool tablica[n ][m];
        for(int i =0; i < n; i++)
        {
            for(int j =0; j < m; j++)
            {
                cin >> w;
                tablica[i][j] = czy(w);
            }
        }
        
        int wsp1 = 0, wsp2 = 0, wsp3 = 0, wsp4=0;
        for(int i = 0; i < n; i++)
        {
            for(int j =0; j < m; j++)
            {
                
                    if(tablica[i][j] != tablica[i][j+1] && j +1 <m)
                    {
                        wsp1 = i;
                        wsp2 = j;
                        wsp3 = i;
                        wsp4 =j+1;
                        break;
                    }

               
                
                    if(tablica[i][j] != tablica[i+1][j] && i +1 < n)
                    {
                        wsp1 = i;
                        wsp2 = j;
                        wsp3 = i+1;
                        wsp4 =j;
                        break;
                    }
                

           }
        }

        cout << wsp1 +1<< " " << wsp2 +1 << " " << wsp3 +1<< " " << wsp4 +1;
    }
}