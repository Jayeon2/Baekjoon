#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
    char school[5];
    
    for (int i = 0; ; i++) {
        scanf("%c", &school[i]);
        if (school[i] == '\n') {
            break;
        }
    }

    if (school[0] == 'N') {
        printf("North London Collegiate School");
    }
    else if (school[0] == 'B') {
        printf("Branksome Hall Asia");
    }
    else if (school[0] == 'K') {
        printf("Korea International School");
    }
    else if (school[0] == 'S') {
        printf("St. Johnsbury Academy");
    }

    return 0;
}