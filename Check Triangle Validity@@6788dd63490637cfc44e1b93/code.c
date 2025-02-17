// Your code here...
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    if(((a+b)>c) && ((a+c)>c) && ((c+b)>a)){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }

    return 0;

}
