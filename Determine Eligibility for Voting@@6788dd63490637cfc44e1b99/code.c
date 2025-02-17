// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);

    if (a>0 && a<18){
        printf("Not Eligible");
    }
    else if (a>=18){
        printf("Eligible");
    }
    return 0;
}