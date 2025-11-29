#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int yi;
    int eligible = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &yi);
        if (yi <= 5 - k) {
            eligible++;
        }
    }

    int max_teams = eligible / 3;
    printf("%d", max_teams);

    return 0;
}





