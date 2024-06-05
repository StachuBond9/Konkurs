
#include <iostream>
#include <vector>

using namespace std;

struct paczka
{
    int priorytet = 0;
    int rozmiar = 0;
};

void merge(paczka arr[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;

    vector<paczka> L(n1), M(n2);

    for (int i = 0; i < n1; ++i)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; ++j)
        M[j] = arr[q + 1 + j];

    int i = 0, j = 0, k = p;

    while (i < n1 && j < n2) {
        if (L[i].priorytet >= M[j].priorytet)
            arr[k++] = L[i++];
        else
            arr[k++] = M[j++];
    }

    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = M[j++];
}

void mergeSort(paczka arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int main() {
    int test;
    cin >> test;
    const int mod = 1000000009;

    for (int g = 0; g < test; ++g) {
        int n;
        cin >> n;
        paczka *dpd = new paczka[n];

        for (int i = 0; i < n; ++i)
            cin >> dpd[i].priorytet >> dpd[i].rozmiar;

        mergeSort(dpd, 0, n - 1);

        int wynik = 0;
        for (size_t i = 0; i < n; ++i)
            wynik = (wynik + ((i + 1) % mod) * (dpd[i].rozmiar % mod)) % mod;

        cout << wynik << endl;

        delete[] dpd;
    }

    return 0;
}
