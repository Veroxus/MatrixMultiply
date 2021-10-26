/* Created by: Aidan Corcoran
   Date: 10/26/2021
*/

#include <stdio.h>
#define size 3

void print_array (int A[size][size]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

int main () {
    int A[size][size] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int B[size][size] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int C[size][size];
    int square = 0;

    printf("Array A is: \n");
    print_array(A);
    printf("\nArray B is: \n");
    print_array(B);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                square += A[i][k] * B[k][j];
            }
            C[i][j] = square;
            square = 0;
        }
    }

    printf("\nArray C is: \n");
    print_array(C);

    return 0;
}