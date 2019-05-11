#include <stdio.h>

double factorial(int n){
    double fact=n;
    int i=n-1;

    if(n == 0)return 1;
    for(; i > 0;  i--){
        fact *= i;
    }
    return fact;
}

int main(){
    int n=0;
    printf("What is the  number? ");
    scanf("%d", &n);
    printf("Factorial of %d: %.0lf", n, factorial(n));
    return 0;
}
