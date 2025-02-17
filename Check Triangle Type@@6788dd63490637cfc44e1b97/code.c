// Your code here...
// Your code here...
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    if (a==b && b==c){
        printf("Equilateral");
    }
    else if( ((a==b) &&  (b!=c)) || ((b==c) && (c!=a)) || ((a==c) && (c!=a)) ){
        printf("Isosceles");
    }
    else if(a!=b!=c){
        printf("Scalene");
    }
    return 0;
}