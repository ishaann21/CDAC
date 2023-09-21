#include<iostream>
using namespace std;
const float PI = 3.142;
float power(float,int);
int fact(int);
int main(){
    float theta,val0,val1,val2,val3=0;
    int n;
    cout<<"\nEnter value of theta: ";
    cin>>theta;
    theta = theta *PI/180;
    cout<<"\nEnter limit of series: ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        val0 = 2*i-1;
        val1 = power(theta,val0);
        val2 = val1 / fact(val0);
        if(i%2==0){
            val2 = val2 * -1;
        }
        val3 = val3 + val2;
    }
    cout<<"\nThe answer is : "<<val3<<endl;
}
float power(float a, int b){
    float pow=1;
    for(int i=1; i<=b;i++){
        pow = pow*a;
    }
    return pow;
}
int fact(int n){
    int fa=1;
    for(int i=1;i<=n;i++){
        fa = fa *i;
    }
    return fa;
}