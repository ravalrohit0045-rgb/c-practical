#include<iostream>
using namespace std;
class bankaccount
{
    private:
            int acnumber;
            int balance;
            string ownername;
    public:
         
            void setacnumber(int a){acnumber=a;}    
            void setbalance(){
                cout<<"enter balance"<<endl;
                cin>>balance;
            }
            void setownername(string o){ownername=o;}
        
            int getacnumber(){return acnumber;}
            int getbalance(){return balance;}
            string getownername(){return ownername;}
           
            void deposit(int d){
                                 balance=balance+d;
                                 cout<<"deposit"<<d<<endl;
                               }
            void withdraw(int d){
                                 balance=balance-d;
                                 cout<<"withdraw"<<d<<endl<<endl;
            }
           
};
int main()
{
    bankaccount ac;
    ac.setacnumber(1234567890);
    ac.setownername("raval rohit");
    ac.setbalance();
    cout<<"acnumber: "<<ac.getacnumber()<<endl;
    cout<<"ownername is :"<<ac.getownername()<<endl;
    cout<<"amount:"<<ac.getbalance()<<endl<<endl;
    ac.deposit(200);
    ac.withdraw(100);
    cout<<"totamount"<<ac.getbalance()<<endl;
    return 0;
}