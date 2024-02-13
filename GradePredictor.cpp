#include <iostream>
#include <fstream>
using namespace std;


double semesterPercent(double a, double b, double c) {
    return a * 0.45 + b * 0.45 + c * 0.1;
}

string toLetterGrade(double p) {
    if (p >= 93 && p <= 100) {
        return "A";
    }
    else if (p >= 90 && p < 93) {
        return "A-";
    }
    else if (p >= 88 && p < 90) {
        return "B+";
    }
    else if (p >= 83 && p < 88) {
        return "B";
    }
    else if (p >= 80 && p < 83) {
        return "B-";
    }
    else if (p >= 78 && p < 80) {
        return "C+";
    }
    else if (p >= 73 && p < 78) {
        return "C";
    }
    else if (p >= 70 && p < 73) {
        return "C-";
    }
    else if (p >= 68 && p < 70) {
        return "D+";
    }
    else if (p >= 63 && p < 68) {
        return "D";
    }
    else if (p >= 60 && p < 63) {
        return "D-";
    }
    else {
        return "E";
    }

}


int main()
{
    double mp1, mp2, exam;

    //Input
    cout << "Enter your Marking Period 1 %: ";
    cin >> mp1;

    cout << "Enter your Marking Period 2 %: ";
    cin >> mp2;

    cout << "Enter your predicted Exam %: ";
    cin >> exam;

    //Calculate Predicted Percent
    double finalPercent = semesterPercent(mp1, mp2, exam);

    //Display finalPercent as a letter grade
    cout << endl << "Your predicted semester grade is: " << toLetterGrade(finalPercent) 
         << " (" << finalPercent << ")" << endl;


    system("pause");
}