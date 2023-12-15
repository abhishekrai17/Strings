#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <char> st;
    string s;
    cout<<"enter the string"<<endl;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'  ){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.top()== '('){
                st.pop();
            }else{
                cout<<"not valid parenthesis"<<endl;
                break;
            }
        }
        else if(s[i]=='}'){
            if(st.top()== '{'){
                st.pop();
            }else{
                cout<<"not valid parenthesis"<<endl;
                 break;
            }
        }
        else if(s[i]==']'){
            if(st.top()== '['){
                st.pop();
            }else{
                cout<<"not valid parenthesis"<<endl;
                 break;
            }
        }
    }
}