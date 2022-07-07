#include <stdio.h>

int main()
{
    int side1,side2;
    printf("Enter the length of the sides:")
    scanf("%d%d",&side1,&side2);
    float area=side1*side2/2;
    printf("The area of triangle is:%f",area);
    return 0;
}
