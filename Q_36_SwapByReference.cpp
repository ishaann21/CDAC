#include<iostream>
using namespace std;
void swap(int &,int &);
int main(){
    int x=5,y=10;
    cout<<"X:"<<x<<" "<<"Y:"<<y<<endl;
    swap(x,y);
    cout<<"X:"<<x<<" "<<"Y:"<<y<<endl;
    return 0;
}
void swap(int &a,int &b){
    int t;
    t=a;
    a=b;
    b=t;
}