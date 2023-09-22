#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
// void strrcopy(char (&src)[],char (&dest)[])
// {
//     int n=(sizeof(&src)/sizeof(src[0]))-1;
//     for(int i=0;i<n;i++){
//        dest[i]=src[i];
//     }
// }

int main(){
    char temp[20],*t;
    int n=5,l;
    char *s[5];
    for(int i=0;i<n;i++){
        cout<<"\n\tEnter name: ";
        cin>>temp;
        l=strlen(temp);
        s[i]=(char*)malloc((l+1)*sizeof(char));
        strcpy(s[i],temp);
        cout<<endl<<s[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(s[i],s[j])>0){
                t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<"\t"<<s[i];
        cout<<endl;
    }
    return 0;
}
