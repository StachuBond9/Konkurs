#include <iostream>
#include <vector>
using namespace std;

struct bank
{
    int zawartosc;
    vector <int> klucze;
    bool stan = false;
};

int ileDostepu(bank sejf[], int ilosc)
{
    int osoby;
    for(int i =0;i < ilosc; i++)
    {
        for(int j = 0; j < sejf[i].zawartosc; j++)
        {
            
        }
    }
}


int main()
{
    int iloscSejf;
    cin >> iloscSejf;

    bank sejfy[iloscSejf];

    for(int i = 0; i < iloscSejf; i++)
    {
        cin >> sejfy[i].zawartosc;
        for(int j = 0; j < sejfy[i].zawartosc; j++)
        {
            int a;
            cin >> a;
            sejfy[i].klucze.push_back(a );
        }
    }
    cout << ileDostepu(sejfy, iloscSejf);
}