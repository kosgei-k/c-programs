#include<iostream>
#include<string>
using namespace std;
class employee{
    private:
    string name;
    int ID;
    double salary;
 
    public:
    double netSalary;
    void setName(string n){
    name=n;
    }
    void setID(int id){
        ID=id;
    }
    void setsalary(double Salary){
        salary=Salary;

    }
    string getname(){
        return name;
    }
    int getID(){
        return ID;
    }
    double getsalary(){
        return salary;
    }

    void setEmployeeDetails(string n,int id,double Salary){
        name=n;
        ID=id;
        salary=Salary;
        
    }
    void CalculateSalary(double netSalary,double salary){
        
        netSalary=salary+(0.1*salary);

    }
    void displaydetails(){
        cout<<"employee name"<<name<<endl;
        cout<<"employee ID"<<ID<<endl;
        cout<<"basic salary"<<salary<<endl;
        cout<<"net salary"<<netSalary<<endl;
    }
};
int main(){
    employee emp;
    emp.setEmployeeDetails("Chin Hu",1234,40000);
    emp.displaydetails();
    return 0;
}