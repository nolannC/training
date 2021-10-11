#include <stdio.h>


int main(int argc, char *argv[])
{
    int x;
    int y;
    int z;

    // ask 3 values
    printf("x ? ");
    scanf("%i", &x);

    printf("y ? ");
    scanf("%i", &y);

    printf("z ? ");
    scanf("%i", &z);

    // store values in array
    int numbers[3];
    numbers[0] = x;
    numbers[1] = y;
    numbers[2] = z;

    // search max
    int max = numbers[0];
    for (int i = 0; i < 3; i++)
    {
        if (max < numbers[i])
        {
            max = numbers[i];
        }
    }

    // print result
    printf("Le maximum est %i\n", max);
}
