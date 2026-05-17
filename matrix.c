#include <stdio.h>

void addMatrix(int a[10][10], int b[10][10], int r, int c) {
    int sum[10][10];

    printf("\nAddition Matrix:\n");

    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int a[10][10], int r, int c) {

    printf("\nTranspose Matrix:\n");

    for(int i=0; i<c; i++) {
        for(int j=0; j<r; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}

int main() {

    int a[10][10], b[10][10];
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter first matrix:\n");

    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix:\n");

    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    addMatrix(a, b, r, c);
    transposeMatrix(a, r, c);

    return 0;
}