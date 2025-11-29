#include <stdio.h>
#include <string.h>

int main() {
    char s[10005];
    scanf("%[^
]", s);
    printf("%ld", strlen(s));
    return 0;
}
