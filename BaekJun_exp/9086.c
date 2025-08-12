#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>    //string 헤더 사용 

int T, size;
char type[100], first, last;

int main () {

    scanf("%d", &T);
    
    for (int n=1; n<=T; n++) {
        
        scanf("%s", type);
        size = strlen(type);
        
        first = type[0];    last = type[size-1];
        
        printf("%c%c\n", first, last);
    }
    
return 0;
}