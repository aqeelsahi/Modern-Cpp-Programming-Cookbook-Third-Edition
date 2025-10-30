#include <iostream>
#include <string>
using namespace std;

// Student class definition
class Student {
private:
    // Private member variables - demonstrating encapsulation
    int id;
    string name;
    double mark;

public:
    // Constructor to initialize data
    Student(int studentId, string studentName, double studentMark) {
        id = studentId;
        name = studentName;
        mark = studentMark;
    }

    // Public member function to display student information
    void displayInfo() {
        cout << "\n=== Student Information ===" << endl;
        cout << "Student ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Mark: " << mark << endl;
        cout << "===========================" << endl;
    }
};

// Main function
int main() {
    // Creating Student objects using the constructor
    Student student1(101, "Alice Johnson", 85.5);
    Student student2(102, "Bob Smith", 92.0);
    Student student3(103, "Carol Williams", 78.3);

    // Displaying student information using the public member function
    cout << "Displaying Student Records:" << endl;
    student1.displayInfo();
    student2.displayInfo();
    student3.displayInfo();

    return 0;
}
