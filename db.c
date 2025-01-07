#include "db.h"

int db_display() {
    FILE *file=fopen("movie.csv", "r");
    int c;
    while ((c=fgetc(file))!=EOF)
        {
        putchar(c);
        }
    fclose(file);
    return 0;
}

int db_add(Movie movie) {
    return 0;
}

int db_remove(int id) {
    return 0;
}

int db_modify(int id) {
    return 0;
}
