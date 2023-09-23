#include<iostream>
using namespace std;
class Array{
    int *arr,size;

public:
    Array();
    Array(int);
    void accept();
    void display();
    ~Array();
    Array(Array &);
};
Array::Array(){
    size=5;
    arr=new int[size];
    for(int i=0;i<size;i++){
        arr[i]=0;
    }
}
Array::Array(int s){
    size=s;
    arr=new int[size];
    for(int i=0;i<size;i++){
        arr[i]=0;
    }
}
void Array::accept(){
    cout<<"\nenter the elements of array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

}
void Array::display(){
    cout<<"\nThe elements of array: ";
    for(int i=0;i<size;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
}
Array::~Array(){
    delete []arr;
}
Array::Array(Array &a){
    size=a.size;
    arr=new int[size];
    for(int i=0;i<size;i++){
        arr[i]=a.arr[i];
    }
}
int main(){
    int n;
    cout<<"\nEnter the number of elements in the array: ";
    cin>>n;
    Array a1(n);
    a1.accept();
    Array a2(a1);
    a1.display();
    a2.display();
    return 0;
}