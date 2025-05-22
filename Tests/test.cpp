#include <iostream>
#include <vector>
using namespace std;

int leastInterval(vector<char>& tasks, int n);

int main() {
    vector<vector<char>> cases = {
        {'A','A','A','B','B','B'},                   // 1
        {'A','A','A','B','B','B'},                   // 2
        {'A','A','A','A','A','A','B','C','D','E','F','G'}, // 3
        {'A','B','A'},                               // 4
        {'A'},                                       // 5
        {'A','A','A','A'},                           // 6
        {'A','A','A','B','B','B','C','C','D','D'},  // 7
        {'A','B','C','D','E','F'},                   // 8
        {'A','A','A','B','B','B','C','C','C'}       // 9
    };

    int ns[] = {2, 0, 2, 3, 0, 1, 2, 2, 1};

    int expected[] = {8, 6, 16, 5, 1, 7, 10, 6, 9};

    for (int i = 0; i < (int)cases.size(); i++) {
        int result = leastInterval(cases[i], ns[i]);
        if (result != expected[i]) {
            cout << "Test " << i+1 << " Failed: Expected " << expected[i] << ", Got " << result << endl;
            return 1;
        }
    }
    cout << "All Tests Passed!" << endl;
    return 0;
}
