#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int copiesAvailable;

public:
    
    void inputDetails() {
        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        cout << "Enter Number of Copies Available: ";
        cin >> copiesAvailable;
    }

    
    void borrowBook() {
        if (copiesAvailable > 0) {
            copiesAvailable--;
            cout << "\nBook borrowed successfully.\n";
        } else {
            cout << "\nNo copies available.\n";
        }
    }

   
    void displayDetails() {
        cout << "\n--- Book Details ---\n";
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Available Copies: " << copiesAvailable << endl;
    }
};

int main() {
    Book book1;

    book1.inputDetails();

    cout << "\nBefore Borrowing:";
    book1.displayDetails();

    book1.borrowBook();

    cout << "\nAfter Borrowing:";
    book1.displayDetails();

    return 0;
}