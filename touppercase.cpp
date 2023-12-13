#include<iostream>
using namespace std;
int main(){
    char ch[100];
    cout<<"Enter the string"<<endl;
    gets(ch);
    //we can use strlen(ch) to find length of the string
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]!=' '){
            ch[i] = ch[i] - 32;
        }
    }cout<<"The string in uppercase is "<<ch<<endl;
}