#include <stdio.h>
#include <string.h>
int main() {
    char s1[100], s2[100];
    printf("Enter first string");
    scanf("%s", s1);
      printf("Enter second string");
        scanf("%s",s2);
    if(strlen(s1) != strlen(s2)) {
        printf("Not Anagram");
        return 0;
    }
    int len = strlen(s1);
    for(int i = 0; i < len - 1; i++) {
        for(int j = i + 1; j < len; j++) {
            if(s1[i] > s1[j]) {
                char temp = s1[i];
                s1[i] = s1[j];
                s1[j] = temp;
            }
        }
    }
    for(int i = 0; i < len - 1; i++) {
        for(int j = i + 1; j < len; j++) {
            if(s2[i] > s2[j]) {
                char temp = s2[i];
                s2[i] = s2[j];
                s2[j] = temp;
            }
        }
    }
    if(strcmp(s1, s2) == 0)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}