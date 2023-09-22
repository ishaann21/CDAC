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
    //Calculate transpose of B
    for(int i =0;i<n-1;i++){
        for(int j=i+3/2;j<n;j++){    
            if(i!=j){
                t = b[i][j];
                b[i][j]=b[j][i];
                b[j][i]=t;
            }
        }
    }    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++)
                z[i][j]=z[i][j]+a[i][j]*b[i][j];
        }
    }
    cout<<"\tMatrix C (product) ="<<endl;
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"\t"<<z[i][j];
        }
        cout<<endl;
    }
    return 0;
}