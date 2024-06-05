#include <iostream>
#include <queue>
using namespace std;

struct plik
{
    int rozmiar;
    int numer;
};

int partition(plik tablica[], int start, int end)
{
    int pivot = tablica[end].rozmiar;
    int i = start - 1;
    for (int j = start; j <= end - 1; j++)
    {
        if (tablica[j].rozmiar < pivot)
        {
            i++;
            plik temp = tablica[i];
            tablica[i] = tablica[j];
            tablica[j] = temp;
        }
    }
    i++;
    plik temp = tablica[i];
    tablica[i] = tablica[end];
    tablica[end] = temp;
    return i;
}

void quickSort(plik tablica[], int start, int end)
{
    if (end <= start)
    {
        return;
    }
    int wskaznik = partition(tablica, start, end);
    quickSort(tablica, start, wskaznik - 1);
    quickSort(tablica, wskaznik + 1, end);
}

int main()
{
    int testy;
    cin >> testy;
    for(int t = 0; t < testy; t++)
    {
        int iloscPlikow;
        cin >> iloscPlikow;
        plik pliki[iloscPlikow];
        for (int i = 0; i < iloscPlikow; i++)
        {
            cin >> pliki[i].rozmiar;
            pliki[i].numer = i+1;
        }
        
        quickSort(pliki, 0, iloscPlikow - 1);

        
        queue <int> kolejnosc; 
        int czas = 0;
        
        for(int i = 0; i < iloscPlikow-1; i++)
        {
    
            if(pliki[i].rozmiar != 0)
            {   czas += pliki[i].rozmiar  +pliki[i+1].rozmiar;
                pliki[i+1].rozmiar = pliki[i].rozmiar+pliki[i+1].rozmiar ;
                pliki[i].rozmiar = 0;

                kolejnosc.push(pliki[i].numer);
                kolejnosc.push(pliki[i+1].numer);
                if(pliki[i+1].rozmiar > pliki[i+2].rozmiar && i+2 < iloscPlikow)
                {
                    quickSort(pliki, i+1, iloscPlikow-1);
                }
            }

        }
        
        cout << czas << endl;
        for(int i = 0; i < iloscPlikow-1; i++)
        {
            cout << kolejnosc.front();
            kolejnosc.pop();
            cout << ' ';
            cout << kolejnosc.front();
            kolejnosc.pop();    
            cout << '\n';

        }

    }
    
    return 0;
}