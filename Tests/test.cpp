#include <iostream>
#include <vector>
using namespace std;

int leastInterval(vector<char>& tasks, int n);

int main() {
    vector<vector<char>> cases = {
        {'A','A','A','B','B','B'}, {'A','A','A','B','B','B'}, {'A','A','A','A','A','A','B','C','D','E','F','G'},
        {'A','B','A'}, {'A','B','A','B'}, {'A'}, {'A','A','A','A'}, 
        {'A','A','A','B','B','B','C','C','D','D'}, {'A','B','C','D','E','F'}, {'A','A','A','B','B','B','C','C','C'}
    };
    int ns[] = {2, 0, 2, 3, 2, 0, 1, 2, 2, 1};
    int expected[] = {8, 6, 16, 3, 4, 1, 10, 10, 6, 9};

    for (int i = 0; i < 10; i++) {
        int result = leastInterval(cases[i], ns[i]);
        if (result != expected[i]) {
            cout << "Test " << i+1 << " Failed: Expected " << expected[i] << ", Got " << result << endl;
            return 1;
        }
    }
    cout << "All Tests Passed!" << endl;
    return 0;
}
