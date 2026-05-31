#include<iostream>
#include<string>
using namespace std;
void customer_details(string &customer_name, int &units_consumed){
    cout<<"enter customer name:"<<endl;
    getline(cin,customer_name);
    cout<<"enter units consumed:"<<endl;
    cin>> units_consumed;
    cin.ignore();

}
double water_bill(int units_consumed,double rate_per_unit){
    return units_consumed*rate_per_unit;
}
double discount( int units_consumed,double water_bill)
{
    if(units_consumed>100){
        return 0.1*water_bill;
    }
    else{
        return 0;
    }
    }
    double total_amount_payable(double water_bill,double discount)
    {
        return water_bill-discount;
    }
    
    void bill(string customer_name,int units_consumed,double water_bill ,double discount,double total_amount_payable){
        cout<<"customer name:"<<customer_name<<endl;
        cout<<"units consumed:"<<units_consumed<<endl;
        cout<<"water bill:"<<water_bill<<endl;
        cout<<"discount:"<<discount<<endl;
        cout<<"total amount payable:"<<total_amount_payable<<endl;

    }
    int main(){
        string customer_name;
        double water_bill,discount, total_amount_payable;
        int units_consumed;
        const double rate_per_unit=10;

        customer_details(customer_name,units_consumed);
        water_bill=units_consumed*rate_per_unit;
        
        if(units_consumed>100){
            discount=0.1*water_bill;
        }
        else{
            discount=0;
        }
        total_amount_payable=water_bill-discount;
        bill(customer_name,units_consumed,water_bill,discount,total_amount_payable);

        return 0;


    }