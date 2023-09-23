#include<iostream>
using namespace std;
class complex{
    int num;
public:
    void setNum(int n){
        num=n;
    }
    int getNum(){
        return num;
    }
    complex(){

    };
    complex(int n):num(n){
    };
    int operator +(complex obj2 ){
        return num+obj2.num;
    };
    int operator -(complex obj2 ){
        return num-obj2.num;
    };
    void display(){
        cout<<"\n"<<num;
    }

    ~complex(){

    };
    


};
int main(){
    complex i(7);
    complex j(4);
    complex k;

    k=i+j;
    cout<<"\naddition of i & j"
    k.display();
    //cout<<"\n"<<k;
    return 0;
}