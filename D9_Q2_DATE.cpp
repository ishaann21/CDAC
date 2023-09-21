#include<iostream>
using namespace std;
class Date{
    int day,month,year;
    public:
        Date(){

        };
        void setDay(int day){
            day = day;
        };
        void setMonth(int month){
            month = month;
        };
        void setYear(int year){
            year = year;
        };
        int getDay(){
            return day;
        };
        int getMonth(){
            return month;
        };
        int getYear(){
            return year;
        }
        // Date(int d,int m,int y):Date(d,m,y){

        // };
        // void Read(int day,int month,int year){
        //     this->day=day;
        //     this->month=month;
        //     this->year=year;
        // }
        void Read(int d,int m,int y){
            day=d;
            month=m;
            year=y;
        }
        
        void Write(){
            cout<<"\n"<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
        }
        bool operator ==(Date obj2){
            if(year==obj2.year){
                if(month==obj2.month){
                    if(day==obj2.day){
                        return true;
                    }
                    return false;
                }
                return false;
            }
            return false;
        };
        bool operator <=(Date obj2){
            if(year<=obj2.year){
                if(month<=obj2.month){
                    if(day<=obj2.day){
                        return true;
                    }
                    return false;
                }
                return false;
            }
            return false;
        };
        bool operator >=(Date obj2){
            if(year>=obj2.year){
                if(month>=obj2.month){
                    if(day>=obj2.day){
                        return true;
                    }
                    return false;
                }
                return false;
            }
            return false;
        };
        ~Date(){

        }
};
int main(){
    // cout<<"\nRunning";
    Date kal,aaj;
    //Date kal;
    //aaj.day(20);
    aaj.Read(20,9,2023);
    aaj.Write();
    // cout<<"\nRunning";
    kal.Read(19,9,2024);
    kal.Write();
    if(aaj==kal){
        cout<<"\ndates are same\n";
    }
    // else{
    //     cout<<"\nDifferent dates\n";
    // }
    else{
    if(aaj<=kal){
        cout<<"\n Tommorow\n";
    }
    if(aaj>=kal){
        cout<<"\nYesterday\n";
    }
    }

    // cout<<"\nRunning";
    return 0;
}