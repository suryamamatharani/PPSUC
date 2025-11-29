#include <stdio.h>
#include <ctype.h>

int main() {
    char s[10005];
    int count = 0;

    // Read full line including spaces
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i])) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
