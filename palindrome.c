#include <stdio.h>
#include <string.h>

void reversedString(char* str){
    int start = 0;
    int end = strlen(str)-1;
    char temp;

    while (start < end){
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    } 
}

bool isPalindrome(int x) {
    char str[20];
    sprintf(str, "%d", x);

    char reverse[20];
    strcpy(reverse, str);
    reversedString(reverse);
    if(strcmp(reverse, str) == 0){
        return true;
    }else{
        return false;
    }
}