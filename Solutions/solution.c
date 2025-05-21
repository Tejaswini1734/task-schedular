#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int leastInterval(char* tasks, int len, int n) {
    int freq[26] = {0};
    for (int i = 0; i < len; i++) freq[tasks[i] - 'A']++;
    qsort(freq, 26, sizeof(int), cmp);
    int max = freq[25];
    int count_max = 0;
    for (int i = 25; i >= 0 && freq[i] == max; i--) {
        count_max++;
    }
    int intervals = (max - 1) * (n + 1) + count_max;
    return intervals > len ? intervals : len;
}
