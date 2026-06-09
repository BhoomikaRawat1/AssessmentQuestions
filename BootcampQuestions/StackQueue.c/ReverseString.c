#include<stdio.h>
#define max 50
int top=-1;
char stack[max];
void push(char ch){
  if(top==max-1){
    printf("Stack overflow");
  }
  else{
    stack[++top]=ch;
  }
}

char pop(){
    if(top==-1){
        printf("Stack underflow");
    }
    else{
      return stack[top--];
    }
}
int main(){
    char str[max];
    printf("Enter string");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        push(str[i]);
    }
    while(top!=-1){
        printf("%c",pop());
    }
    return 0;
}









