//https://codeforces.com/problemset/problem/490/A
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> skills(n);
    for (int i = 0; i < n; ++i) {
        cin >> skills[i];
    }

    vector<int> programming_indices, maths_indices, pe_indices;

    // Separate the indices of children based on their skills
    for (int i = 0; i < n; ++i) {
        if (skills[i] == 1) {
            programming_indices.push_back(i + 1);
        } else if (skills[i] == 2) {
            maths_indices.push_back(i + 1);
        } else {
            pe_indices.push_back(i + 1);
        }
    }

    // Find the minimum number of children with each skill
    int min_teams = min(programming_indices.size(), min(maths_indices.size(), pe_indices.size()));

    // Output the result
    if (min_teams == 0) {
        cout << 0 << endl;
    } else {
        cout << min_teams << endl;
        for (int i = 0; i < min_teams; ++i) {
            cout << programming_indices[i] << " " << maths_indices[i] << " " << pe_indices[i] << endl;
        }
    }

    return 0;
}
