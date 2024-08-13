//
// Created by zeno on 13/8/24.
// Keytakeaways: Ampersand refers to variable address, Asterisk refers to value of address
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("a value: ");
    scanf("%d", &a);
    int *ptr;
    ptr = &a;
    printf("Current a value: %d on %d\n", a, ptr);

    *ptr = rand();
    printf("the value has changed!\n");
    printf("Current a value: %d on %d\n", a, ptr);
    printf("=======================================\n");
    printf("Thus: No matter if any value changes, the address will always be the same.\n");
    printf("=======================================");
    return 0;
}