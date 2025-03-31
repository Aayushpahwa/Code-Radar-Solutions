// Your code here...
#include<stdio.h>
int main(){
    int b;
    scanf("%d", &b);

    int summ = 0;
    for(int i=1; i<=b; i++){
        summ+=i;
        printf("%d", summ);
    }
    return 0;
}