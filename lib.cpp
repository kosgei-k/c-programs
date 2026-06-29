#include<iostream>
#include<string>
using namespace std;
class person{
    protected:
    string name;
    public:
    void setName(string n){
        name=n;
    }
    string getName(){
        return name;
    }

};
class LibraryMember: public person{
    private:
        int memberID;
        string BooksBorrowed;
    public:
        LibraryMember(string name_, int memberID_, string BooksBorrowed_){
            setName(name_);
            memberID=memberID_;
            BooksBorrowed=BooksBorrowed_;
        }
        int getMemberID(){
            return memberID;
        }
        string getBooksBorrowed(){
            return BooksBorrowed;
        }
};
class PremiumMember: public LibraryMember{
    private:
        double membershipFee;
    public:
        PremiumMember(string name_, int memberID_, string BooksBorrowed_, double membershipFee_):LibraryMember(name_,memberID_,BooksBorrowed_){
            membershipFee=membershipFee_;
        }
        double getMembershipFee(){
            return membershipFee;
        }
}; 
int main(){
    PremiumMember member("Kosgei Lidwine", 10202, "Silent Song", 50.0);
    cout<<"Member Name: "<<member.getName()<<endl;
    cout<<"Member ID: "<<member.getMemberID()<<endl;
    cout<<"Books Borrowed: "<<member.getBooksBorrowed()<<endl;
    cout<<"Membership Fee: "<<member.getMembershipFee()<<endl;   
}