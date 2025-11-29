#include <stdio.h>
#include <string.h>

int main() {
    char s[10005];
    
    // Read the entire line including spaces
    fgets(s, sizeof(s), stdin);

    int count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
