#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, q, wynik;
    cin >> n >> q;

    int transakcje[n];

    for (int i = 0; i < n; i++) {
        cin >> transakcje[i];
    }

    int cumulative_sum[n];
    for (int i = 1; i <= n; i++) {
        cumulative_sum[i] = cumulative_sum[i - 1] + transakcje[i - 1];
    }

    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        wynik = cumulative_sum[b] - cumulative_sum[a - 1];
        cout << wynik << ' ';
    }

    return 0;
}
