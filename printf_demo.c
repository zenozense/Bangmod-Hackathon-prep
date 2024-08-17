//
// Created by zenoz on 8/17/2024.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void demo_str() {
    char *str = "rainbow";
    printf("|%s|\n", str);
    printf("|%10s|\n", str);
    printf("|%-10s|\n", str);
    printf("|%.4s|\n", str);
    printf("|%.*s|\n", 5 , str);
}

char* demo_star(int init) {
    char *stars = (char*)malloc((init+1) * sizeof(char));
    if (stars == NULL) {
        printf("failed");
        return NULL;
    }

    for(int i=0; i<init; i++) {
        stars[i] = '*';
    }
    stars[init] = '\0';

    return stars;
}

int main(void) {
    int x; printf("Init:");
    scanf(" %d", &x);
    for(int i=x; i!=0; i--) {
        printf("%.*s\n", i, demo_star(x));
    }
}
