#include <stdio.h>
/*
    Given a element list, print then squared
*/

int main(){
    int i = 0, n;
    float elem = 0;
    printf("How many elements? ");
    scanf("%d", &n);
    for (; i < n; i++){
        scanf("%f", &elem);
        printf("elem squared: %f\n", elem*elem);
    }

    return 0;
}
