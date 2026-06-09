#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    for(int i = 0; i < len; i++) {
        int count = 0;
        for(int j = 0; j < len; j++) {
            if(str[i] == str[j]) {
                count++;
            }
        }
        if(count == 1) {
            printf("First non-repeating character: %c", str[i]);
            return 0;
        }
    }
    printf("-1");
    return 0;
}