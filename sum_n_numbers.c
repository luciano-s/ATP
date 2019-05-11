#include <stdio.h>

int main(){
    int n, i=0;
    float sum=0, number=0;

    printf("How many numbers? ");
    scanf("%d", &n);

    for(; i < n; i++){
        scanf("%f", &number);
        sum += number;
    }
    printf("\nThe sum of all %d numbers is: %f\n", n, sum);
}
