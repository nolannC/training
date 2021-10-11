#include <stdio.h>


int main(int argc, char *argv[])
{
    int x;
    int y;


    // ask x
    printf("x ? ");
    scanf("%i", &x);

    // ask y
    printf("y ? ");
    scanf("%i", &y);

    // print result
    printf("Le produit est : %i\n", x * y);
    return 0;
}