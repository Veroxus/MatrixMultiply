/* Created by: Aidan Corcoran
   Date: 10/26/20201
   Determine the average of a set array of size 10
*/

#include <stdio.h>

void print_array (float A[]) {
    for (int i = 0; i < 10; i++) {
        printf("%f ", A[i]);
    }
}

float array_average (float A[]) {
    float average = 0;

    for (int i = 0; i < 10; i ++) {
        average += A[i];
    }

    return average/10;
}

int main () {
    float array[10];

    printf("Enter array values: \n");

    for (int i = 0; i < 10; i++) {
        scanf("%f", &array[i]);
    }

    print_array(array);

    printf("\n%f", array_average(array));


    return 0;
}