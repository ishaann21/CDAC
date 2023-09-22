#include<iostream>
using namespace std;
int main(){
    int n=5,t;
    int a[n][n],z[n][n],b[n][n],c[n][n];
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
            z[i][j]=a[i][j];
        }
        cout<<endl;
    }    
    for(int i =0;i<n-1;i++){
        for(int j=i+3/2;j<n;j++){    
            if(i!=j){
                t = z[i][j];
                z[i][j]=z[j][i];
                z[j][i]=t;
            }
        }
    }
    cout<<"\tTranspose of Matrix A ="<<endl;
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"\t"<<z[i][j];
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
    cout<<"\tMatrix C (Addition of A & B) ="<<endl;
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
            cout<<"\t"<<c[i][j];
        }
        cout<<endl;
    }
    return 0;
}

// input 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1
// input 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25