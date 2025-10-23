#include <stdio.h>
#include <stdlib.h>

int main() {
    int total_number_of_shelves,i;
    scanf("%d", &total_number_of_shelves);

    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);

    int* total_number_of_books = malloc(total_number_of_shelves * sizeof(int));
    int** total_number_of_pages = malloc(total_number_of_shelves * sizeof(int*));

    for ( i = 0; i < total_number_of_shelves; i++) {
        total_number_of_books[i] = 0;
        total_number_of_pages[i] = NULL;
    }

    while (total_number_of_queries--) {
        int type;
        scanf("%d", &type);

        if (type == 1) {
            int x, y;
            scanf("%d %d", &x, &y);

            total_number_of_books[x]++;
            total_number_of_pages[x] = realloc(total_number_of_pages[x],
                                               total_number_of_books[x] * sizeof(int));
            total_number_of_pages[x][total_number_of_books[x] - 1] = y;

        } else if (type == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", total_number_of_pages[x][y]);

        } else if (type == 3) {
            int x;
            scanf("%d", &x);
            printf("%d\n", total_number_of_books[x]);
        }
    }

    for (i = 0; i < total_number_of_shelves; i++) {
        free(total_number_of_pages[i]);
    }
    free(total_number_of_pages);
    free(total_number_of_books);

    return 0;
}
