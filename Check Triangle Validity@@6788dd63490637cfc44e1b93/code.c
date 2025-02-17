// Your code here...
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    if((a+b)>c){
        printf("Valid");
    }
    else if((a+c)>b){
        printf("Valid");
    }
    else if((c+b)>a){
        printf("Valid");
    }
    else if((a+b)=c){
        printf("Invalid");
    }
    else if((a+c)=b){
        printf("Invalid");
    }
    else if((c+b)=a){
        printf("Invalid");
    }
    else{
        printf("Invalid");
    }
    return 0;

}
