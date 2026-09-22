#include <iostream>
#include <string>
using namespace std;
class Library {
protected:
    string libraryName;

public:
    void setLibrary(string name) {
        libraryName = name;
    }
};
class Book : public Library {
private:
    string bookTitle;
    double price;

public:
    void setBookDetails(string title, double p) {
        bookTitle = title;
        price = p;
    }

    void displayBook() {
        cout << "\n--- Book Details ---" << endl;
        cout << "Library: " << libraryName << endl;
        cout << "Title: " << bookTitle << endl;
        cout << "Price: $" << price << endl;
    }
};
class Magazine : public Library {
private:
    string magTitle;
    int issueNumber;

public:
    void setMagDetails(string title, int issue) {
        magTitle = title;
        issueNumber = issue;
    }

    void displayMagazine() {
        cout << "\n--- Magazine Details ---" << endl;
        cout << "Library: " << libraryName << endl;
        cout << "Title: " << magTitle << endl;
        cout << "Issue Number: " << issueNumber << endl;
    }
};

int main() {
    Book b;
    b.setLibrary("City_Central_Library"); 
    b.setBookDetails("C++_Programming", 45.50);
    b.displayBook();
    
    Magazine m;
    m.setLibrary("City_Central_Library");
    m.setMagDetails("Tech_Monthly", 102);
    m.displayMagazine();

    return 0;
}
