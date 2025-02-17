// Your code here...
#include<stdio.h>
int main(){
    int one;
    scanf("%d", &one);

    if(one >= 90){
        printf("A");
    }
    else if((one >= 80) && (one <90)){
        printf("B");
    }
    else if((one >= 70) && (one <80)){
        printf("C");
    }
    else if((one >= 60) && (one <70)){
        printf("D");
    }
    else if(one<60){
        printf("F");
    }
    return 0;
}