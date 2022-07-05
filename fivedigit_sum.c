#include <stdio.h>

int main() {

    int n,o,t,h,th,tth;
    scanf("%d",&n);
    o=n%10;
    n=n/10;
    t=n%10;
    n=n/10;
    h=n%10;
    n=n/10;
    th=n%10;
    n=n/10;
    tth=n%10;
    n=n/10;
    printf("%d",o+t+h+th+tth);
    
    
    return 0;
}
