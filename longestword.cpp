#include<iostream>
using namespace std;
int main(){
    char ch[100];
    int currlen=0;
    int maxlen=0;
    int i=0;
    cout<<"enter the string"<<endl;
    cin.getline(ch,100);
    
        while(i<100){
            if(ch[i] ==' ' || ch[i] =='\0')
            {
                if(currlen>maxlen)
                {
                    maxlen = currlen;
                }
                currlen=0;
            }
            else
            currlen++;
            if(ch[i] =='\0')
            {
                break;
            }
            
            i++;
        }
    
    cout<<"The maximum length of the word is "<<maxlen<<endl;
}