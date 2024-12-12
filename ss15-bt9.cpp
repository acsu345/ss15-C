#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";
    char del;
    int i, j = 0;
    int length = strlen(str);
    printf("Nhap ky tu can xoa: ");
    scanf(" %c", &del);
    for (i = 0; i < length; i++) {
        if (str[i] != del) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("Chuoi sau khi xoa: %s\n", str);

    return 0;
}
