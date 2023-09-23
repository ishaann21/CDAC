#include<iostream>
#include<cstring>
using namespace std;
typedef struct books{
    int id;
    char title[20];
    float price;
}book;
int main(){
    book b1,b2,b3,b4,b5;
    int i=1;
    cout<<"\nEnter record (ID,Title,Price) of book no."<<i<<": "<<endl;
    i++;
    cin>>b1.id>>b1.title>>b1.price;
    
    cout<<"\nEnter record (ID,Title,Price) of book no."<<i<<": "<<endl;
    i++;
    cin>>b2.id>>b2.title>>b2.price;
    //cout<<"The Record is: "<<endl;
    

    cout<<"\nEnter record (ID,Title,Price) of book no."<<i<<": "<<endl;
    i++;
    cin>>b3.id>>b3.title>>b3.price;
    //cout<<"The Record is: "<<endl;


    cout<<"\nEnter record (ID,Title,Price) of book no."<<i<<": "<<endl;
    i++;
    cin>>b4.id>>b4.title>>b4.price;
    //cout<<"The Record is: "<<endl;
    

    cout<<"\nEnter record (ID,Title,Price) of book no."<<i<<": "<<endl;
    i++;
    cin>>b5.id>>b5.title>>b5.price;
    //cout<<"The Record is: "<<endl;
    

    cout<<"The Record is: "<<endl;
    cout<<"\nBook ID: "<<b1.id<<"\nTitle: "<<b1.title<<"\nPrice: "<<b1.price;
    cout<<endl;
    cout<<"\nBook ID: "<<b2.id<<"\nTitle: "<<b2.title<<"\nPrice: "<<b2.price;
    cout<<endl;
    cout<<"\nBook ID: "<<b3.id<<"\nTitle: "<<b3.title<<"\nPrice: "<<b3.price;
    cout<<endl;
    cout<<"\nBook ID: "<<b4.id<<"\nTitle: "<<b4.title<<"\nPrice: "<<b4.price;
    cout<<endl;    
    cout<<"\nBook ID: "<<b5.id<<"\nTitle: "<<b5.title<<"\nPrice: "<<b5.price;
    cout<<endl;   
    return 0;
}