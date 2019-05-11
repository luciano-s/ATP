#include <stdio.h>

int main(){
    int n, i=1;
    printf("How many numbers? ");
    scanf("%d", &n);

    for(; i < n; i+=2){
        printf("%d ", i);
    }

    return 0;
}
