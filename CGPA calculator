#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    string courseName;
    double credit, totalCredits = 0, totalGradePoints = 0;
    char grade;

    for (int i = 1; i <= n; ++i) {
        cout << "\nCourse " << i << " name: ";
        cin.ignore();
        getline(cin, courseName);

        cout << "Credit hours: ";
        cin >> credit;

        cout << "Grade (A-F): ";
        cin >> grade;

        double gradePoint;
        switch (toupper(grade)) {
            case 'A': gradePoint = 4.0; break;
            case 'B': gradePoint = 3.0; break;
            case 'C': gradePoint = 2.0; break;
            case 'D': gradePoint = 1.0; break;
            case 'F': gradePoint = 0.0; break;
            default:
                cout << "Invalid grade entered.\n";
                return 1;
        }

        totalCredits += credit;
        totalGradePoints += gradePoint * credit;

        cout << "Course: " << courseName << ", Grade: " << grade << ", Grade Point: " << gradePoint << endl;
    }

    double GPA = totalGradePoints / totalCredits;

    cout << fixed << setprecision(2);
    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "GPA: " << GPA << endl;

    return 0;
}


