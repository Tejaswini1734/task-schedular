#include <stdio.h>
#include <string.h>

// Declare the solution function implemented in solution.c
int leastInterval(char* tasks, int len, int n);

int main() {
    char* cases[] = {
        "AAABBB", "AAABBB", "AAAAAABCDEFG", "A", "AAABBBCCDD", "ABCDEF", "AAABBBCCC"
    };
    int ns[] = {2, 0, 2, 0, 2, 2, 1};
    int expected[] = {8, 6, 16, 1, 10, 6, 9};

    int num_tests = sizeof(expected) / sizeof(expected[0]);
    for (int i = 0; i < num_tests; i++) {
        int len = strlen(cases[i]);
        int result = leastInterval(cases[i], len, ns[i]);
        if (result != expected[i]) {
            printf("Test %d Failed: Expected %d, Got %d\n", i + 1, expected[i], result);
            return 1;
        }
    }
    printf("All Tests Passed!\n");
    return 0;
}
