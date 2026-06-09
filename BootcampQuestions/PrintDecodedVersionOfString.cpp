#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
    string s;
    cin >> s;

    stack<int> numberStack;
    stack<string> stringStack;

    string current = "";
    int num = 0;

    for(char ch : s) {

        if(isdigit(ch)) {
            num = num * 10 + (ch - '0');
        }

        else if(ch == '[') {
            numberStack.push(num);
            stringStack.push(current);

            num = 0;
            current = "";
        }

        else if(ch == ']') {

            int repeat = numberStack.top();
            numberStack.pop();

            string prev = stringStack.top();
            stringStack.pop();

            string temp = "";

            for(int i = 0; i < repeat; i++) {
                temp += current;
            }

            current = prev + temp;
        }

        else {
            current += ch;
        }
    }

    cout << current << endl;

    return 0;
}