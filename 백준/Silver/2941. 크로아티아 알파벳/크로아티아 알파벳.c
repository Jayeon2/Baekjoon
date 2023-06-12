#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char alphabet[101];
    scanf("%s", alphabet);

    int length = strlen(alphabet);
    int count = length;

    for (int i = 0; i < length; i++) {
        if (alphabet[i] == 'c' && alphabet[i + 1] == '=') {
            count -= 1;
            i += 1;
        }
        else if (alphabet[i] == 'c' && alphabet[i + 1] == '-') {
            count -= 1;
            i += 1;
        }
        else if (alphabet[i] == 'd' && alphabet[i + 1] == 'z' && alphabet[i + 2] == '=') {
            count -= 2;
            i += 2;
        }
        else if (alphabet[i] == 'd' && alphabet[i + 1] == '-') {
            count -= 1;
            i += 1;
        }
        else if (alphabet[i] == 'l' && alphabet[i + 1] == 'j') {
            count -= 1;
            i += 1;
        }
        else if (alphabet[i] == 'n' && alphabet[i + 1] == 'j') {
            count -= 1;
            i += 1;
        }
        else if (alphabet[i] == 's' && alphabet[i + 1] == '=') {
            count -= 1;
            i += 1;
        }
        else if (alphabet[i] == 'z' && alphabet[i + 1] == '=') {
            count -= 1;
            i += 1;
        }
    }

    printf("%d", count);

    return 0;
}