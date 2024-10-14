#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    char c;

    printf("Enter a string: ");
    while ((c = getchar()) != '\n' && c != EOF && i < sizeof(str) - 1) {
        str[i++] = c;
    }
    str[i] = '\0';

    printf("You entered: %s\n", str);
    return 0;
}
