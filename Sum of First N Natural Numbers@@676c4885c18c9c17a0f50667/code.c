// Your code here...
#include<stdio.h>
int main(){
    int b;
    scanf("%d", &b);

    int summ;
    for(int i=1; i<=b; i++){
        summ+=i;
        printf("%d", summ);
    }
    return 0;
}