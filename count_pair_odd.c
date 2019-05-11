/*
given n numbers, sum how pais and odds, then show how many of then
*/
#include <stdio.h>

int main(){
    int n, sum_pair=0, sum_odd=0, n_pair=0, n_odd=0, number, i=0;
    printf("How many numbers? ");
    scanf("%d", &n);
    for(; i < n; i++){
        scanf("%d", &number);
        if(number%2 == 0){
            n_pair++;
            sum_pair += number;
        }else{
            n_odd++;
            sum_odd += number;
        }
    }
    printf("Number of odd: %d\nSum odd: %d\nNumber of pair: %d\nSum pair: %d",n_odd, sum_odd, n_pair, sum_pair);
    return 0;
}
