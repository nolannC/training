#include <stdio.h>

int main(void)
{
    // Open CSV file
    FILE *file = fopen("data.csv", "a");

    // check if file exists
    if (!file)
    {
        return 1;
    }

    char model[40];

    // Get model and numberplate
    printf("Model : ");
    scanf("%s", model);

    char numberplate[40];
    printf("Numberplate : ");
    scanf("%s", numberplate);


    // Print to file
    fprintf(file, "%s, %s\n", model, numberplate);
    // Close file
    fclose(file);
}
