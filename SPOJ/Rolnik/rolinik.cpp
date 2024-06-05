#include <iostream>

using namespace std;

struct wsp
{
    int x;
    int y;
};

int main()
{
    int ilosc;
    cin >> ilosc;

    wsp punkty[ilosc];
    for(int i =0; i < ilosc; i++)
    {
        cin >> punkty[i].x;
        cin >> punkty[i].y;
    }

    if(ilosc == 3)
    {
        for(int i = 0; i < ilosc; i++)
        {
            cout << i +1 << ' ';
        }
        cout << endl;
    }

}