#include <stdio.h>
int main() {
    int n;
    printf("Enter size of arrays: ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter elements of first array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter elements of second array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(b[i] > b[j]) {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    int flag = 1;
    for(int i = 0; i < n; i++) {
        if(a[i] != b[i]) {
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("Arrays are Anagrams");
    else
        printf("Arrays are Not Anagrams");

    return 0;
}