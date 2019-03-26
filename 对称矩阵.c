#include<stdio.h>

int main() {
    int n,i,j;
    while (scanf("%d", &n) != EOF) {
        int nums[100][100];
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                scanf("%d", &nums[i][j]);
            }
        }
        bool isForm = true;
        for (i = 1; i < n; i++) {
            for (j = 0; j < i; j++) {
                if (nums[i][j] != nums[j][i]) {
                    isForm = false;
                }
            }
        }
        if (isForm) {
            printf("Yes!\n");
        } else {
            printf("No!\n");
        }
    }
    return 0;
}
