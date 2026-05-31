
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    for(int i = 0; i < len; i++) {
        for(int j = i + 1; j < len; ) {
            if(str[i] == str[j]) {
                for(int k = j; k < len; k++) {
                    str[k] = str[k + 1];
                }
                len--;
            } else {
                j++;
            }
        }
    }
    printf("String after removing duplicates: %s", str);
    return 0;
}