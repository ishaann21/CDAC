#include <iostream>
using namespace std;
class account
{
    
    int acc_num;
    string acc_holdername;
    string acc_type;
    float balance;

public:

        static int acc_count;
   
    void add()
    {
        acc_num = acc_count;
        acc_count++;
        cout<<"Enter your Account holder name:-  "<<endl;
        cin>>acc_holdername;
        cout<<"Enter your Account Type :-  "<<endl;
        cin>>acc_type;
        if (acc_type=="Savings"){
            balance=0;
        }
        else if (acc_type=="Current"){
            balance=1000;
        }
        
    }
    void withdraw(int n)
    {
        if(balance>n){
        cout << "You have withdrawn " <<n<< "from your bank account"<<endl;

        balance = balance-n;
        cout << "Your current available balance = " << balance<<endl;}
        else 
        cout<<"You dont Have Suffiecient balance to withdraw"<<endl;
    }
    void deposit(int n)
    {
        cout << "You have deposited " <<n<< " in your bank account"<<endl;

        balance = balance+n;
        cout << "Your current available balance = " << balance<<endl;
    }
    void display()
    {
        cout<<endl<<endl;
        cout<< "Account number = " << acc_num<<endl;
        cout<< "Account Holder name  = " << acc_holdername<<endl;
        cout<< "Account Type = " << acc_type<<endl;
        cout<< "Your current balance is = " << balance<<endl;
    }
    void displayUser()
    {
        cout<<endl<<endl;
        cout<< "Account number = " << acc_num<<endl;
        cout<< "Account Holder name  = " << acc_holdername<<endl;
        cout<< "Account Type = " << acc_type<<endl;
        cout<< "Your current balance is = " << balance<<endl;
    }
};
int account::acc_count=1;
int main()
{

    account a[100];
    int n=1,dep,wd;
    int disp1;
    
    int choice;
    do {
        cout<<"Enter 1. to ADD USER\nEnter 2. to DISPLAY your account details\nEnter 3. to DEPOSIT money\nEnter 4. To Withdraw Money\nEnter 5. To DISPLAY ALL USERS\nEnter 6. TO EXIT PROGRAM"<<endl;
        cin>>choice;
        

        switch (choice){
            case 1:

            {a[n].add();
            n++;}
            
            break;
            case 2:
            cout<<"Enter the bank account number to display its information -:"<<endl;
            cin>>disp1;
            a[disp1].display();
            break;
            case 3:
                cout<<"Enter the Account number in which you want to deposit money";
                cin>>disp1;
                cout<<"Enter the amount you want to deposit ";
                cin>>dep;
                a[disp1].deposit(dep);
                break;
            case 4:
                cout<<"Enter the Account number from which you want to withdraw money";
                cin>>disp1;
                cout<<"Enter the amount you want to Withdraw ";
                cin>>wd;
                a[disp1].withdraw(wd);
                break;
            case 5:
            for(int i=1;i<n;i++){
                a[i].display();
                //cout<<endl;
            }  
            break;  
            case 6:
                exit(0);
                break;
}


   }   while (choice!=6);
   
    


  

    return 0;
}

