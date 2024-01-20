#include <iostream>
#include <string>
using namespace std;

// Base class for students
class Student {
protected:
    int rollNumber;
    string name;

public:
    Student(int roll, const string& n) : rollNumber(roll), name(n) {}

    void display() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
    }
};

// Base class for sports
class Sports {
protected:
    int sportsScore;

public:
    Sports(int score) : sportsScore(score) {}

    void displaySportsInfo() {
        cout << "Sports Score: " << sportsScore << endl;
    }
};

// Derived class representing a student's performance with sports
class StudentWithSports : virtual public Student, virtual public Sports {
protected:
    int academicScore;

public:
    StudentWithSports(int roll, const string& n, int academic, int sports)
        : Student(roll, n), Sports(sports), academicScore(academic) {}

    void displayAcademicInfo() {
        cout << "Academic Score: " << academicScore << endl;
    }
};

int main() {
    int roll, academic, sports;
    string name;

    cout << "Enter Roll Number: ";
    cin >> roll;
    cin.ignore(); // Clear newline character in the buffer

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Academic Score: ";
    cin >> academic;

    cout << "Enter Sports Score: ";
    cin >> sports;

    StudentWithSports student(roll, name, academic, sports);

    cout << "Student Information:" << endl;
    student.display();
    student.displayAcademicInfo();
    student.displaySportsInfo();

    return 0;
}
