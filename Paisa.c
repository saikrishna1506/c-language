#include <stdio.h>

int main()
{
    float amount;
    printf("Enter the amount:");
    scanf("%f",&amount);
    printf("The amount is %.0f paisa",amount*100);
    return 0;
}
