#include<iostream>
using namespace std;
int main(){
    float bs,gs,hra=0.15,da=0.3,pf=0.125,netSal;
    cout<<"\nEnter Your basic salary: \t$";
    cin>>bs;
    gs=hra*bs+da*bs+bs;
    pf=gs*pf;
    netSal=gs-pf;
    cout<<"\nYour Net Salary is $"<<netSal<<endl;
    return 0;
}