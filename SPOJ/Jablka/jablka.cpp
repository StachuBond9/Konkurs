#include <iostream>
using namespace std;

struct osoba
{
    int wzrost;
    int wiek;
    int wsp;
};

int najmniejszy_element(osoba ludz[], int ilosc )
{
    int min=0;
    for(int i = 0; i < ilosc; i++)
    {
        if( ludz[i].wzrost < ludz[min].wzrost)
        {
            min = i;
        }
        
    }
    return min;

}

void wzrost(osoba ludz[], int ilosc)
{
    for(int i = 0; i < ilosc; i++)
    {
        if(ludz[i].wiek <= 20)
        {
            ludz[i].wzrost += ludz[i].wsp;
            ludz[i].wiek++;
        }
    }
}
int main()
{
    int testy;
    cin  >> testy;
    while(testy--)
    {
        int ilosc;
        int v;
        cin >> v;
        v*=100;
        cin >> ilosc;

        osoba obywatel[ilosc];
            
        for(int i = 0; i < ilosc; i++)
        {
            cin >> obywatel[i].wzrost;
            cin >> obywatel[i].wiek;
            cin >> obywatel[i].wsp;
        }

            
        for(int j = 0; j <=20 ; j++)
        {
            cout << j << ": " << obywatel[najmniejszy_element(obywatel, ilosc)].wzrost + (v*v)/2000<< '\n';
            wzrost(obywatel, ilosc);

        }

    }
    return 0;
}