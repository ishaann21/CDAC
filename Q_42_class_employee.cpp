#include<iostream>
#include<cstring>
using namespace std;
class Employee{
    int emp_id;
    char emp_name[20];
    double salary;
public:
    Employee();
    Employee(int,char*,double);
    void accept();
    void update();
    void display();
    int getId();
};

Employee::Employee(){
}
Employee::Employee(int id,char *n,double s){
    emp_id=id;
    strcpy(emp_name,n);
    salary=s;
}
void Employee::update(){
    cout<<"Enter name and salary"<<endl;
    cin>>emp_name>>salary;
}
int Employee::getId(){
    return emp_id;
}
void Employee::accept(){
    cout<<"Enter Info in the order ID, name and salary:\n";
    cin>>emp_id>>emp_name>>salary;
}
void Employee::display(){
    cout<<emp_id<<" "<<emp_name<<" "<<salary<<endl;
}
int main(){
    Employee e[10];
    int choice,count=0,i,id;
    while(true){
        cout<<"1.Insert Record:"<<endl;
        cout<<"2.Update Record:"<<endl;
        cout<<"3.Display all records:"<<endl;
        cout<<"4.Exit"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                e[count++].accept();
                break;
            case 2:
                cout<<"Enter ID of Employee to be updated:"<<endl;
                cin>>id;
                for(i=0;i<count;i++){
                    if(id==e[i].getId()){
                        e[i].update();
                    }
                }
                break;
            case 3:
                for(i=0;i<count;i++){
                    e[i].display();
                }
                break;
            case 4:
                exit(0);
        }
    }
    return 0;
}