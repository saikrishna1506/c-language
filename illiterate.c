#include<stdio.h>
int main(){
    int population;
    printf("Enter the population of town:\n");
    scanf("%d",&population);
    int menp,womenp;
    menp=52*population/100;
    womenp=48*population/100;
    printf("The men population is %d and women is %d\n",menp,womenp);
    int menlit,womenlit;
    menlit=35*menp/100;
    womenlit=13*womenp/100;
    
    printf("The number of literate men are %d and women are %d\n",menlit,womenlit);
    printf("the total number of ILLERATE men are %d and women are %d\n",menp-menlit,womenp-womenlit);

    return 0;
}
