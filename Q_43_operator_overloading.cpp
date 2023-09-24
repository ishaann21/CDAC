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
    int operator *(complex obj2){
        return num*obj2.num;
    }
    int operator /(complex obj2){
        return num/obj2.num;
    }
    int operator ++(){
        int temp=num;
        num=num+1;
        return temp;
    }
    int operator++(int obj2){
        int old=obj2;
        operator++();
        return old;
    }
    void display(){
        cout<<"\n"<<num<<endl;
    }

    ~complex(){

    };
    


};
int main(){
    complex i(7);
    complex j(4);
    complex k;

    k=i+j;
    cout<<"\naddition of i & j";
    k.display();
    k=i-j;
    cout<<"\nSubtraction of i & j is :\t";
    k.display();
    k=i*j;
    cout<<"\nMultiplication of i & j is :\t";
    k.display();
    k=i/j;
    cout<<"\nDivision of i & j is :\t";
    k.display();    
    k=++i;
    cout<<"\nOutput of k after 'k=++i' is :\t";
    k.display();
    cout<<"\nAnd value of i is: ";
    i.display();
    k=i++;
    cout<<"\nOutput of k after 'k=i++' is :\t";
    k.display();
    cout<<"\nAnd value of i is: ";
    i.display();
    return 0;
}