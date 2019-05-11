#include <stdio.h>

int main(){
    int n=0, i=0, number=0;
    float sum=0;
    printf("How many numbers? ");
    scanf("%d", &n);

    for(; i < n; i++){
        scanf("%d", &number);
        sum += number;
    }
    printf("The mean: %f", sum/n);
}
