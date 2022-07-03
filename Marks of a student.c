#include <stdio.h>
int main()
{
    
    int sub1,sub2,sub3,sub4,sub5;
  
    printf("Enter your marks: \n");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
  
    float average=(sub1+sub2+sub3+sub4+sub5)/5;
    printf("The average =%f\n",average);
  
    printf("The percentege =%f",sub1+sub2+sub3+sub4+sub5/500*100);

    return 0;
}
