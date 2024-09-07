#include <stdio.h>

int main()
{
    int num_1, num_2, num_tot = 0;

    printf("\nThis program adds together 2 numbers.");
    printf("\nNumber 1: ");
    scanf("%d", &num_1);
    printf("Number 2: ");
    scanf("%d", &num_2);
    num_tot = num_1 + num_2;

    printf("Your total is: %d\n", num_tot);

    return 0;
}