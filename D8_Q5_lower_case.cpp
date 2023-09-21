#include<iostream>
using namespace std;
void lower(char (&src)[]){
    int n=(sizeof(&src)/sizeof(src[0]));
    for(int i=0;i<n;i++){
        // if(65<=src[i]<=90){
        //     src[i]=src[i]+32;
        // }

         if(src[i]>=65 && src[i]<=90){
             src[i]=src[i]+32;
         }
        
        else{
             src[i]=src[i];
         }
    }
}
int main(){
    int n;
    cout<<"\nEnter the length of character array:\n";
    cin>>n;
    char a[n];
    cout<<"\nEnter the array:\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    lower(a);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;
    //char sd=63
    //cout<<sd;
    return 0;
}