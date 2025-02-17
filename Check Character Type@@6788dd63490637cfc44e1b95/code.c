// Your code here...
#include<stdio.h>
int main(){
    char one;
    scanf("%c", &one);

    if(one==a || one==e || one==i || one==o || one==u || one==A || one==E || one==I || one==O || one==U){
        printf("Vowel");
    }
    else if(((one>=A) && (one<=Z)) || ((one>=a) && (one<=z))){
        printf("Consonant");
    }
    else if(((one>=0) && (one<=9))){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}