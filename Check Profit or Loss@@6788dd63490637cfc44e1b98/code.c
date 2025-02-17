// Your code here...
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d", &a, &b);

    if (a<b){
        pritnf("Profit");
    }
    else if(a<b){
        pritnf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}