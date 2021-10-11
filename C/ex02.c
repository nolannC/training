#include <stdio.h>

void swap(int *x, int *y);


int main(int argc, char *argv[])
{
    int x;
    int y;

    printf("x ? ");
    scanf("%i", &x);

    printf("y ? ");
    scanf("%i", &y);

    // print values before swap
    printf("x : %i et y : %i\n", x, y);
    swap(&x, &y);
    // print values after swap
    printf("x : %i et y : %i\n", x, y);
}

void swap(int *x, int *y)
{
    // change values with address
    int temp = *x;
    *x = *y;
    *y = temp;
}