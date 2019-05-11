#include <stdio.h>

int main(){
    int min, max, i=1, n, number;
    printf("How many numbers? ");
    scanf("%d", &n);
    scanf("%d", &number);
    min = max = number;
    for(; i < n; i++){
        scanf("%d", &number);
        if(min > number)
            min = number;
        else if(max < number)
            max = number;
    }
    printf("min: %d\nmax: %d", min, max);
}
