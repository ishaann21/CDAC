#include<iostream>
using namespace std;
class BigInt{
    public:
        int num;
        void setNum(int n){
            num=n;
        }
        int getNum(){
            return num;
        }
        BigInt(){
            cout<<"\nHello you have just created a new object of class BigInt"<<endl;
        };
        BigInt(int n):num(n){
            
            
        };

        BigInt(int n,int m):num(n+m){
            
            
        };
        bool operator ==(BigInt obj2){
            if(num==obj2.num)
            {
                return true;
            }
            return false;
        };
        bool operator !=(BigInt obj2){
            if(num==obj2.num)
            {
                return false;
            }
            return true;
        };
          bool operator <(BigInt obj2){
            if(num<obj2.num)
            {
                return true;
            }
            return false;
        };
           bool operator >(BigInt obj2){
            if(num>obj2.num)
            {
                return true;
            }
            return false;
        };
        bool operator >=(BigInt obj2){
            if(num>=obj2.num)
            {
                return true;
            }
            return false;
        };
        bool operator <=(BigInt obj2){
            if(num<=obj2.num)
            {
                return true;
            }
            return false;
        };

        ~BigInt(){
            cout<<"\n\tJust trail for destructor\n";
        };

};



int main(){
    BigInt i;
    BigInt k(11);
    BigInt j(5,5);
    if(k==j){
        cout<<"\nk is EQUAL to j\n";

    }
    else
        cout<<"\nk is NOT EQUAL TO j\n";

    if(k!=j){
        cout<<"\nk is NOT EQUAL TO  j\n";

    }
    else
        cout<<"\nk is EQUAL TO j\n"; 
    
    if(k>j){
        cout<<"\nk is bigger than j\n";

    }
    else
        cout<<"\nk is less than j\n";   
    if(k>j){
        cout<<"\nk is bigger than j\n";

    }
    else
        cout<<"\nk is less than j\n";
    if(k>j){
        cout<<"\nk is bigger than j\n";

    }
    else
        cout<<"\nk is less than j\n";
    if(k>j){
        cout<<"\nk is bigger than j\n";

    }
    else
        cout<<"\nk is less than j\n";        
        

    cout<<endl<<k.num<<endl;
    cout<<endl<<j.num<<endl;
    
    return 0;
    

}
