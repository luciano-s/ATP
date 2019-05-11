#include <stdio.h>

int main(){
    float x, aswr=1;
    int n, i=0;
    printf("What is the x? ");
    scanf("%f",  &x);

    printf("\n");
    printf("What is the exponent? ");
    scanf("%d", &n);
    for(; i < n; i++){
        aswr = aswr*x;
    }
    printf("Answer: %f", aswr);

    return 0;
}
