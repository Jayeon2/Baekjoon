#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n; 
    scanf("%d", &n);
    
    int num, count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%*[^0-9]%d", &num);
        if (num <= 90) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
