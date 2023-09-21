#include<iostream>
using namespace std;
void strrcopy(char (&src)[],char (&dest)[])
    {
        int n=(sizeof(&src)/sizeof(src[0]))-1;
            for(int i=0;i<n;i++){
                dest[i]=src[i];
            }
    }
// bool checkstr(char (&src)[],char (&ver)[]){
//     //int flag=0;
//     int n,i=0;
//     n=(sizeof(&src)/sizeof(src[0])-1);
//     // while(src[i]!='\0'||ver[i]!='\0'){
//     //     if(src[i]!=ver[i]){
//     //         //flag=1;
//     //         return false;
//     //     }
//     //     i++;
//     // }
//     for(int i=0;i<n;i++){
//         if(src[i]!=ver[i]){
//             return false;
//         }
//     }
//     return true;
// }
int main(){
    int n,check;
    cout<<"\n ENter N";
    cin>>n;

    char src[n],ver[n];
    char dest[n];
    cout<<"\n Please enter the string : ";


    for(int i=0;i<n;i++)
    {
        cin>>src[i];
    }
     strrcopy(src,dest);
     cout<<"The copied string is :"<<dest<<endl;
    // cout<<"\nEnter a string to compare:";
    // for(int i=0;i<n;i++){
    //     cin>>ver[i];
    // }
    // check=checkstr(src,ver);
    // if(check==true){
    //     cout<<"\nBoth the strings are exactly the same!!\n";
    // }
    // else{
    //     cout<<"\nBoth the strings are not same!!\n";
    // }
    
    return 0;

}