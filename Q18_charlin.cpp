#include<iostream>
using namespace std;
void e(char,int);
int main(){
    int n,N;
    char ch;
    float fl;
    cout<<"Enter length of line and character the line should be made up of: ";
    cin>>N>>ch;
    e(ch,N);
    cout<<"\nData Type\t  Size in Bytes\n";
    e(ch,N);
    cout<<"\nInteger   \t\t"<<sizeof(n)<<endl;
    e(ch,N);
    cout<<"\ncharacter \t\t"<<sizeof(ch)<<endl;
    e(ch,N);
    cout<<"\nFloat     \t\t"<<sizeof(fl)<<endl;
    e(ch,N);
    cout<<endl;
    return 0;
}
void e(char ch, int n){
    for(int i=1;i<=n;i++){
    cout<<ch;
    }
    //cout<<string(n,ch);
}