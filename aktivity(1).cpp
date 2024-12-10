#include <iostream>
#include <string>

using namespace std;

class Book {
public:
    string title;
    string author;
    double price;

    // Konstruktor untuk inisialisasi objek secara langsung
    Book(string t, string a, double p) {
        title = t;
        author = a;
        price = p;
    }

    void displayDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: Rp" << price << endl << endl;
    }
};

int main() {
    
    Book book1("lovesick girl", "blacpink", 15000);
    Book book2("better up", "babymonster", 70000);
    book1.displayDetails();
    book2.displayDetails();

    return 0;
}