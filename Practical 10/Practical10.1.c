#include <stdio.h>

int main() {
    int n, i, j;
    int arr[10][10];
    int sum = 0;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        sum = sum + arr[i][i];
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}
