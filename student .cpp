#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string admissionNumber;
    double feeBalance;

public:
    
    void inputStudent() {
        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Admission Number: ";
        getline(cin, admissionNumber);

        cout << "Enter Fee Balance: ";
        cin >> feeBalance;
    }

    
    void makePayment() {
        double amount;

        cout << "\nEnter Payment Amount: ";
        cin >> amount;

        feeBalance -= amount;

        if (feeBalance < 0)
            feeBalance = 0;

        cout << "Payment successful.\n";
    }

    
    void displayStatus() {
        cout << "\n--- Student Fee Status ---\n";
        cout << "Name: " << name << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Remaining Balance: " << feeBalance << endl;
    }
};

int main() {
    Student student1;

    student1.inputStudent();

    cout << "\nBefore Payment:";
    student1.displayStatus();

    student1.makePayment();

    cout << "\nAfter Payment:";
    student1.displayStatus();

    return 0;
}