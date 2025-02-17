// Your code here...
#include <stdio.h>

int main() {
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    if (c >= 65 && c <= 90) {
        printf("%c is an uppercase letter.\n", c);
    } else if (c >= 97 && c <= 122) {
        printf("%c is a lowercase letter.\n", c);
    } else {
        printf("%c is not a letter.\n", c);
    }

    return 0;
}
