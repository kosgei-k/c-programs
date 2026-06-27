# include<iostream>
#include<string>
using namespace std;
RoomBooking
 {
public:
string name;
int room_no,no_of_days_booked;
Room booking(string name1,int room_no1,int no_of_days_booked1)
  {
name=name1;
room_no=room_no1;
no_of_days_booked=no_of_days_booked1;
cout<<"room booking confirmed";
  }
void display()
   {
cout<<"customer's name"<<name<<endl;
cout<<"room no"<<room_no<<endl;
cout<<"days booked"<<no_of_days_booked<<endl;
   }
~RoomBooking()
    {
cout<<"booking ended,room released";
    }

 };
int main()
 {
Room booking room("Kosgei Lidwine",24,5);
room.display();
return 0;
 }
