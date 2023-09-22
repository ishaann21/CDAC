#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"\nEnter number of students: \t";
    cin>>n;
    int *p=(int*)malloc(n*sizeof(int));
    if(p==NULL){
        cout<<"\n\tFailed to allocate Memory!!\n";
    }
    cout<<"\nEnter marks of students: ";
    float avg=0;
    for(int i=0;i<n;i++){
        cin>>p[i];
        avg=avg+p[i];
    }
    avg = avg/n;
    cout<<"\nAverage of all students is: "<<avg<<endl;
    return 0; 
}