#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    string name;
    int ADM;
    double fee_balance;
    public:
    double amount;
    void setname(string n){
        name=n;
        
    }
    void setADM(int adm){
        ADM=adm;
    
    }
    
    void setfee_balance(double balance){
        fee_balance=balance;

    }
    string getname(){
        return name;
    }
    int getADM(){
        return ADM;
    }
    double getfee_balance(){
        return fee_balance;
    }
    void inputStudentdata(string n,int adm,double balance){
        name=n;
        ADM=adm;
        fee_balance=balance;
    }
    void makepayment(){
        fee_balance-=amount;
    }
    void displaystatus(){
        cout<<"student name: "<<name<<endl;
        cout<<"student adm: "<<ADM<<endl;
        cout<<"fee balance: "<<fee_balance<<endl;
    }
    

};
int main(){
    student stud;
    stud.inputStudentdata("Kosgei Lidwine",10202,40000);
    cout<<"before payment"<<endl;
    stud.displaystatus();
    stud.amount=20000;
    stud.makepayment();
    cout<<"after payment"<<endl;
    stud.displaystatus();   
    return 0;
}