#include<iostream>
using namespace std;
int main(){
    int n=3,t;
    int a[n][n],b[n][n],z[n][n];
    cout<<"Enter matrix A: ";
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"\tMatrix A ="<<endl;
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"\t"<<a[i][j];
        }
        cout<<endl;
    }
    cout<<"Enter matrix B: ";
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    cout<<"\tMatrix B ="<<endl;
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"\t"<<b[i][j];
        }
        cout<<endl;
    }    
    return 0;
}