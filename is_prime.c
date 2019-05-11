#include <stdio.h>
#include <math.h>

short is_prime(int n);

int main(){
    int n;
    printf("What is the number? ");
    scanf("%d", &n);
    if(is_prime(n))
        printf("Is prime!");
    else
        printf("Its not prime!");

    return 0;
}

short is_prime(int n){
    if(n < 2)
        return 0;
    else if(n == 2)
        return 1;
    else if(n%2==0)
        return 0;
    int c = 3;
    for(; c <= sqrt(n); c+=2)
        if(n%c==0)
            return 0;
    return 1;
}
