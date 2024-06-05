#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int num_cases;
    cin >> num_cases;

    while (num_cases--) {
        int num_fish, num_caught;
        cin >> num_fish >> num_caught;

        vector<int> fish_values(num_fish);
        for (int i = 0; i < num_fish; ++i) {
            cin >> fish_values[i];
        }

        long long int max_score = 0, curr_score = 0, min_score = 0;
        for (int i = 0; i < num_caught; ++i) {
            int index;
            cin >> index;
            curr_score += fish_values[index - 1];
            max_score = max(max_score, curr_score - min_score);
            min_score = min(min_score, curr_score);
        }

        cout << max_score << endl;
    }
    return 0;
}

