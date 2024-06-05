#include <iostream>
#include <vector>
using namespace std;


bool f( double *x1 , const int przypadek)
{
    return x1>=12;

}
 
int main()
{
    int wymiar = 0;
    cin >> wymiar;

    if(wymiar == 1)
    {
        double x1, x2;;
        cin >> x1 >> x2;
        int przypadek = 0;
        int wartosc=0;

        for(double i = x1; i <= x2; i+=0.1)
        {
            //cout << i << endl;;
            if(f(i, przypadek ) == true)
            {
                wartosc++;
            }
            przypadek++;
        }

        cout <<int(float(wartosc) / float(przypadek) * 100);

    }

    else if(wymiar == 2)
    {
        double x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int przypadek = 0;
        int wartosc;
        double punkt[2];
        for(double i = x1;  i <= x2; i+=0.1)
        {
            
            for(double j = y1; j <= y2; j+=0.1)
            {
                punkt = {i, j};
                if(f(punkt, przypadek ))
                {
                    wartosc++;
                }
                przypadek++;
            }
        }

        cout << int(float(wartosc) / (przypadek) * 100);
    }
}