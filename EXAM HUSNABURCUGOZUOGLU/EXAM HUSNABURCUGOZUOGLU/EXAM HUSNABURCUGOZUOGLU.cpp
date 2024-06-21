#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string name;
    int age;
    char grade;
};

void inputStudentInfo(vector<Student>& students) {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;
    students.resize(numStudents);

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter information for student " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Age: ";
        cin >> students[i].age;
        cout << "Grade: ";
        cin >> students[i].grade;
    }
}
void displayStudentInfo(const vector<Student>& students) {
    for (size_t i = 0; i < students.size(); ++i) {
        cout << "\nInformation of student " << i + 1 << ":\n";
        cout << "Name: " << students[i].name << "\n";
        cout << "Age: " << students[i].age << "\n";
        cout << "Grade: " << students[i].grade << "\n";
    }
}

int main() {
    vector<Student> students;
    inputStudentInfo(students);
    displayStudentInfo(students);
    return 0;
}