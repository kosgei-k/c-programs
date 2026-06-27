#include <iostream>
#include <string>
using namespace std;

class BankAccount{
    public:
        string Acc_holder_name;
        double Acc_number,Acc_balance;

        BankAccount(string Acc_holder_name_, double Acc_number_, double Acc_balance_){
            Acc_holder_name = Acc_holder_name_;
            Acc_number = Acc_number_;
            Acc_balance = Acc_balance_;
            cout << "Account successfully created";

        }
        void displayAccount(){
            cout << "Holder's Name :" << Acc_holder_name << endl;
            cout << "Account Number :"<< Acc_number << endl;
            cout <<"Account balance :" << Acc_balance<< endl;
            
        }
        ~BankAccount(){
            cout << "Account closed successfull\n";

        }

};
int main(){
    BankAccount bank("Kosgei Lidwine",4134,35808000);
    bank.displayAccount();
    return 0;
}