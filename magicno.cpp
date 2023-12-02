#include<iostream>
#include<strings.h>
using namespace std;
int magic(string s,int cn){
    int count=cn;
string str = s;
string s1,s2,s3,s4,u,v,app;
int x,y;
int flag=0;
int len =str.length();
cout<<"the length of string is "<<len<<endl;

if((len % 4 == 0) && (len >=4)){
    int c= len/4;
   cout<<c;
    for(int i=0;i<len;i=i+2)
    {
        if(i==0 ){
            s1=str.substr(i,c);
          
           
        }
         else if(i==2){
            s2=str.substr(i,c);
           
           
        }
        else if(i==4){
            s3=str.substr(i,c);
           
        }
         else if(i==6){
            s4=str.substr(i,c);
           
        }
    }
    app = s1.append(s4);
     
    for(int k=0;k<app.length();k++){
        if(app[k]!= app[len-k-1]){
            flag=1;
            break;
        }
    }
     
    int com=s2.compare(s3);
    
    if(flag ==0 && com == 0){
         count++;
        //  x =stoi(str);
        //  x--;
       
        //  u=to_string(x);
        // if(u.length() % 4==0 && u.length() >=4)
        //   {
        //  magic(u,count);
        //  }
        //  else if(u.length() >= 4){
        //     for(int j=0;j<len;j++){
        //    u=u.substr(0,(len-1));
        //    magic(u,count);
        //  }}
         return count;
         }
    // else{
    //     y =stoi(str);
    //      y--;
    //      v=to_string(y);
    //      if(v.length() % 4==0 && v.length() >=4){
    //      magic(v,count);
    //      }
    //     else if(u.length() >= 4){
    //         for(int j=0;j<len;j++){
    //        v=v.substr(0,(len-1));
    //        magic(str,count);
    //      }}
    //      }
}
// else if(len>=4){
//     for(int j=0;j<len;j++){
//      str=str.substr(0,(len-1));
//      magic(str,count);
// }
// }
// }
// return 5;
return count;
}
int main(){
    string s;
    cout<<"enter the string "<<endl;
    getline(cin,s);
    int cn=0;
    int result = magic(s,cn);
    cout<<result<<endl;
    return 0;
}