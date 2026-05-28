#include<stdio.h>
int main(){
    char str[1000];
    printf("Enter a string\n");
    scanf("%s",&str);
    int count=0;
   for(int i=0;i<str[i]!='\0';i++){
    if(str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' &&
    str[i]!='U' && str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && 
    str[i]!='u'){
        count++;
    }
   }
   printf("consonants in a string %d",count);
   return 0;
}