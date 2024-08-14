//
// Created by zeno on 14/8/24.
//

#include <stdio.h>

int main() {
    int i=5, j=10;
    int *p;
    int **pp;

    p=&i;
    pp=&p;

    printf("====================================================\n");
    printf("Variable\t\tValue\t\t\tAddress\n");
    printf("====================================================\n");
    printf("pp\t\t\t\t%d\t\t%d\n", pp, 0);
    printf("p\t\t\t\t%d\t\t%d\n", p, pp);
    printf("i\t\t\t\t%d\t\t\t\t%d\n", i, &i);

    return 0;
}