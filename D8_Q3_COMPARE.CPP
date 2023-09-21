#include<iostream>
using namespace std;
bool upper(char (&src)[],char (&dest)[])
{
    int count=0;
    while (src[count]!='\0')
    {
        if(src[count]!=dest[count]){
            return false;
        }
        count++;
    }
    return true;
}
int main(){
    int n;
    cout<<"\nEnter the lengths of character array:\n";
    cin>>n;
    char a[n+1],b[n+1];
    int check;
    a[n]='\0';
    b[n]='\0';
    cout<<"\nEnter the first array:\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
        //cout<<a[i]<<endl;
    }
    cout<<"\nEnter the second array:\n";
    for(int i=0;i<n;i++){
        cin>>b[i];
        //cout<<b[i]<<endl;
    }
    check=upper(a,b);
    if(check==0){
        cout<<"\nUNequal strings!!";
    }
    if(check==1){
        cout<<"\nEqual strings!!";
    }
    //cout<<check;
    // for(int i=0;i<n;i++){
    //     cout<<a[i];
    // }
    cout<<endl;
    return 0;
}