#include <iostream>
#include <string>
using namespace std ;
void employee_details(string &name, double &basic_salary , int  &overtime_hours) 
{
    cout<<"enter employee name:";
    getline(cin,name);

    cout <<"enter basic salary:";
    cin >>basic_salary;

    cout<<"enter overtime hours:";
    cin>> overtime_hours;
    cin.ignore();

}
double overtime_pay( int overtime_hours,double rate_per_hour)
{
  return overtime_hours*rate_per_hour;
}
  double net_salary(double basic_salary, double overtime_pay)
  {
    return basic_salary + overtime_pay;

  }
  void payslip(string name, double basic_salary,int overtime_hours, double overtime_pay,double net_salary)
  {
    cout<< " EMPLOYEE PAYSLIP"<<endl;
    cout<<"employee name:"<<name<<endl;
    cout<<"basic salary:"<< basic_salary<<endl;
    cout<<"overtime hours:"<<overtime_hours<<endl;
    cout<<"overtime pay:"<<overtime_pay<<endl;
    cout<<"net salary:"<<net_salary<<endl;
    

  }
  int main(){
     string name;
     double basic_salary=0;
    double overtime_pay_amount, net_salary_amount;
     int overtime_hours=0;
     const double rate_per_hour= 400;  
 
    employee_details(name, basic_salary, overtime_hours);
 
    overtime_pay_amount= overtime_hours*rate_per_hour;
    net_salary_amount= basic_salary+overtime_pay_amount;
 
    payslip(name,basic_salary,overtime_hours,overtime_pay_amount,net_salary_amount);
    
     return 0;
   }