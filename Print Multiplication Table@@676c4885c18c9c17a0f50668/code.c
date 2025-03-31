// Your code here...
#include<stdio.h>
int main(){
    int b;
    scanf("%d", &b);

    for(int i=1; i<=10; i++){
        printf("%d x %d = %d", b, i, b*i);

    }
    return 0;
}