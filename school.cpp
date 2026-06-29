#include<iostream>
#include<string>
using  namespace std;
class person{
    public:
        string name;
        int age;
        person(string name_, int age_){
            name=name_;
            age=age_;
        }
        void display(){
            cout<<"name: "<<name<<endl;
            cout<<"age: "<<age<<endl;
        }
};
class student: public person{
    public:
        int ADM_NO;
        string Class;
        student(string name_, int age_, int ADM_NO_, string Class_):person(name_,age_){
            ADM_NO=ADM_NO_;
            Class=Class_;
        }
        void displayStudent(){
            person::display();
            cout<<"ADM NO: "<<ADM_NO<<endl;
            cout<<"Class: "<<Class<<endl;
        }
};
int main(){
    student stud("Kosgei Lidwine", 20, 10202, "Form 4");
    stud.displayStudent();
    return 0;
}