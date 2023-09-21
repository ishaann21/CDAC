#include<iostream>
using namespace std;
void swap(int *ptr1 ,int *ptr2 ){
    int t;
    t=*ptr1;
    *ptr1=*ptr2;
    *ptr2=t;
}
void swap(float *ptr1 ,float *ptr2 ){
    float t;
    t=*ptr1;
    *ptr1=*ptr2;
    *ptr2=t;
}
int main(){
    int a=5,b=10;
    float c=6,d=11;
    cout<<endl<<a<<" "<<b;
    swap(&a,&b);
    cout<<endl<<a<<" "<<b<<endl;
    cout<<endl<<c<<" "<<d;
    swap(&c,&d);
    cout<<endl<<c<<" "<<d<<endl;
}
// void swap(int *ptr1,int *ptr2)