#include <stdio.h>

int main(){
    int n, i=0, j, k, number, cont=-1;

    printf("How many numbers? ");
    scanf("%d", &n);
    int numbers[n];

    printf("Insert two numbers: ");
    scanf("%d %d", &j, &k);
    for (; i < n; i++){
        scanf("%d", &number);
        if(number%j==0 || number%k==0)
            numbers[++cont] = number;
    }
    i = 0;
    for(; i < cont; i++)
        printf("%d, ",numbers[i]);
    printf("%d",numbers[cont]);
    return 0;
}
