#include <stdio.h>

int main() {
    char src[10005], dest[10005];
    int i = 0;

    // Read input including spaces
    scanf("%[^
]", src);

    // Manual copy character by character
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';  // Null-terminate the destination string

    printf("%s", dest);

    return 0;
}
