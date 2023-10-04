#include <stdio.h>

int main(){
    
    long int a, b;
    scanf ("%ld", &a);
    b = (100*a) + (a*50*(a-1)/2);
    printf("%ld\n", b);
    
    return 0;
}
