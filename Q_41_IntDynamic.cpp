#include<iostream>
#include<cstring>
using namespace std;
class Laptop{
    int lid;
    char *make;
    double cost;
public:
    Laptop();
    ~Laptop();
    Laptop(int,const char*,double);
    void display();
    Laptop(Laptop &);
};
Laptop::Laptop(){
    lid=101;
    make=new char[3];
    strcpy(make,"HP");
    cost=53999.5;
}
Laptop::Laptop(Laptop &l){
    lid=l.lid;
    make = new char[strlen(l.make)+1];
    strcpy(make,l.make);
    cost=l.cost;
}
void Laptop::display(){
    cout<<"Laptop ID:"<<lid<<"Make: "<<make<<"cost: "<<cost<<endl;
}
Laptop::~Laptop(){
    cout<<"\nDestructor"<<endl;
    delete []make;

}
Laptop::Laptop(int id,const char *m,double c){
    lid=id;
    make=new char[strlen(make)+1];
    strcpy(make,m);
    cost=c;
}

int main(){
    Laptop l1;
    Laptop l2(2,"Lenovo",35000);
    l1.display();
    l2.display();





return 0;
}