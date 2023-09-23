#include<iostream>
#include<string>
//#include<stdlib>
using namespace std;
int main(){
    int n=5,len;
    char *alpha[n];
    string strng,temp;
    for(int i=0;i<n;i++){
        cout<<"\nEnter "<<i+1<<" string: \t";
        getline(cin,strng);
        temp=strng;
        cout<<"\t"<<strng;
        len=strng.length();
        alpha[i]=(char*)malloc((len)*sizeof(char));
        //alpha[i]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<"\n"<<&alpha[i]<<endl;
    }
    return 0;
}