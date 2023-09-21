#include<iostream>
using namespace std;
void arm();
int main(){
    int check;
    do{
        arm();
        cout<<"\nEnter  1 to continue: ";
        cin>>check;
    }while(check==1);
    return 0;
}
void arm(){
    int n,temp,m,arm=0;
    cout<<"\nEnter a number : ";
    cin>>n;
    m=n;
    while(m>0){
        temp = m%10;
        arm = arm +(temp*temp*temp);
        m=m/10;
    }
    if(arm==n){
        cout<<"\nthis is an armstrong number!!!";
    }
    else{
        cout<<"\nNot an Armstrong Number.";
    }
}
