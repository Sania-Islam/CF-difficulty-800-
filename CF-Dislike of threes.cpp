#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;


    vector<int> liked_numbers;
    int i = 1;
    while (liked_numbers.size() < 1000) {
        if (i % 3 != 0 && i % 10 != 3) {
            liked_numbers.push_back(i);
        }
        i++;
    }


    while (t--) {
        int k;
        cin >> k;
        cout << liked_numbers[k - 1] << endl;
    }

    return 0;
}

