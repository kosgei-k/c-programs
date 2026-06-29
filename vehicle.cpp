#include<iostream>
#include<string>
using namespace std;
class vehicle{
    public:
        string brand;
        int year_of_manufacture;
    public:
        vehicle(string brand_, int year_of_manufacture_){
            brand=brand_;
            year_of_manufacture=year_of_manufacture_;
        }
        void display(){
            cout<<"brand: "<<brand<<endl;
            cout<<"year of manufacture: "<<year_of_manufacture<<endl;
        }
};
class car: public vehicle{
    public:
        string Engine_capacity;
        int number_of_doors;
        car(string brand_, int year_of_manufacture_, string Engine_capacity_, int number_of_doors_):vehicle(brand_,year_of_manufacture_){
            Engine_capacity=Engine_capacity_;
            number_of_doors=number_of_doors_;
        }
        void displayCar(){
            vehicle::display();
            cout<<"engine capacity: "<<Engine_capacity<<endl;
            cout<<"number of doors: "<<number_of_doors<<endl;
        }
};
int main(){
    car myCar("Toyota", 2020, "2000cc", 4);
    myCar.displayCar();
    return 0;
}