#include <vector>
#include <algorithm>
using namespace std;
int leastInterval(vector<char>& tasks, int n) {
    vector<int> freq(26, 0);
    for (char t : tasks) freq[t - 'A']++;
    sort(freq.begin(), freq.end());
    int max = freq[25] - 1;
    int idle = max * n;
    for (int i = 24; i >= 0 && freq[i] > 0; i--) {
        idle -= min(freq[i], max);
    }
    return idle > 0 ? tasks.size() + idle : tasks.size();
}
