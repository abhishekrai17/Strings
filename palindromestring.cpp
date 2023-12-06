#include<iostream>
using namespace std;
int main(){
    int n,flag = 1;
   
   string s,res="";
    cout<<"enter the string"<<endl;
    getline(cin,s);
    n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]>='a' && s[i]<='z'){
            res+=s[i];
        }
    }

cout<<res<<endl;
int si=res.length();
     for(int j=0;j<si;j++)
     {
       
        if(res[j] != res[si-1-j])
        {
           
            flag=0;
            break;
        }
     }
    
if(flag == 0){
    cout<<"not a palindrome string"<<endl;

}
else if(flag ==1){
    cout<<"palindrome string"<<endl;
}
}