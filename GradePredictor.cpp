#include <iostream>
#include <fstream>
using namespace std;




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
