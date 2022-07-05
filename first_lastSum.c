#include <stdio.h>

int main() {

    int n,o;
    scanf("%d",&n);
    o=n%10;
    n=n/1000;
    printf("%d",o+n);
    
    return 0;
}
