#include <stdio.h>

int main() {

    int n1, n2, sum;
    char sum_str[11];
    scanf("%d", &n1);
    scanf("%d", &n2);

    while(n1 != 0 || n2 != 0){

    sum = n1+n2;

    sprintf(sum_str,"%d", sum);
    for(int i = 0; sum_str[i]!='\0'; i++){
        if(sum_str[i] != '0'){
            printf("%c", sum_str[i]);
        }
    }
    printf("\n");

    scanf("%d", &n1);
    scanf("%d", &n2);

    }
    return 0;
}
