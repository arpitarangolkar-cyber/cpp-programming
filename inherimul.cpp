#include <iostream>
using namespace std;
class Student {
protected:
    int rn;
    char name[50];
    char student_class[20];

public:
    void getdata() {
        cout << "Enter Roll Number: ";
        cin >> rn;
        cout << "Enter Name (single word): ";
        cin >> name;
        cout << "Enter Class: ";
        cin >> student_class;
    }
};
class Student_marks : public Student {
protected:
    int marks[5];
    int total_marks;

public:
    void getmarks() {
        total_marks = 0;
        cout << "Enter marks for 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
            total_marks += marks[i];
        }
    }
};
class Student_perc : public Student_marks {
private:
    float perc;

public:
    void calculate_perc() {
        // Calculating percentage out of 500 total marks
        perc = total_marks / 5.0;
    }

    void display_info() {
        cout << "\n--- Student Information ---" << endl;
        cout << "Roll Number: " << rn << endl;
        cout << "Name: " << name << endl;
        cout << "Class: " << student_class << endl;
        cout << "Total Marks: " << total_marks << " / 500" << endl;
        cout << "Percentage: " << perc << "%" << endl;
    }
};

int main() {
    Student_perc studentObj;
    studentObj.getdata();
    studentObj.getmarks();
    studentObj.calculate_perc();
    studentObj.display_info();

    return 0;
}
