#include<stdio.h>
#include<string.h>
int main(){
char str[100];
printf("Enter a string");
scanf("%s",str);
int flag=1;
int n=strlen(str);
for(int i=0;i<n/2;i++){
   if(str[i]!=str[n-1-i]){
    flag=0;
    break;
   }  
 }
  if(flag)
  printf("Palindrome");
  else
  printf("not palindrome");
  return 0;
}
