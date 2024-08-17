/**
* Created by zeno on 8/17/2024.
* @brief try to dynamically allocate memory (also calloc)
*/

#include <stdio.h>
#include <stdlib.h>
#include <mem.h>
#include <tgmath.h>

void fmalloc(int x) {
    int* p = (int*) malloc(sizeof(int)*x);
    for(int i = 0; i < x; i++) {
        p[i] = pow(i,2);
    }
    for(int j = 0; j < x; j++) {
        printf("%d\n", *(p+j));
    }
    // printf("The value is %d\n", *p); // (*p) dereference the pointer p
    free(p);
}

int main(int argc, char *argv[]) {\
    int k;
    printf("k: ");
    scanf("%d", &k);

    fmalloc(k);

    return 0;
}