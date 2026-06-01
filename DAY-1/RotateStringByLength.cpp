#include<iostream>
#include<string>
using namespace std;
int main(){
      string str;
      getline(cin,str);
      int n;
      cin>>n;
      char dir;
      cin>>dir;
      int len=str.length();
      string rotate;
      if(dir=='L'){
        rotate=str.substr(n)+str.substr(0,n);
      }
      else{
         rotate=str.substr(len-n)+str.substr(0,len-n);
      }
for(int i=0;i<n;i++){
    if(isupper(rotate[i])){
         rotate[i]=tolower(rotate[i]);
    }
    if(islower(rotate[i])){
         rotate[i]=toupper(rotate[i]);
    }  
    for(int i = 0; i < n; i++) {
        if(isupper(rotate[i])) {
            rotate[i] = tolower(rotate[i]);
        }
        else if(islower(rotate[i])) {
            rotate[i] = toupper(rotate[i]);
        }
    }
    cout << rotate;
    return 0;
   }
} 