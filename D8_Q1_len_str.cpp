#include<iostream>
using namespace std;
void upper(char (&src)[])
{
    int count=0;
    while (src[count]!='\0')
    {
        count++;
    }
    cout<<"\nthe length of character array is: \t"<<count;
}
int main(){
    int n;
    cout<<"\nEnter the length of character array:\n";
    cin>>n;
    char a[n+1];
    a[n]='\0';
    cout<<"\nEnter the array:\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<a[i]<<endl;
    }
    upper(a);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}