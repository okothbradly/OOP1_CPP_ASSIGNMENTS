/*Rocky Driving School Evaluation Test System
* Bradly Okoth
* BCS-05-0044/2025
*/

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
    string studentName;
    float theoryMarks, practicalMarks, averageScore;

    // System prompts user for input
    cout<<"============================================"<<endl;
    cout<<"         DRIVING TEST EVALUATION SHEET        "<<endl;
    cout<<"============================================"<<endl;

    cout<<"Enter student name  : ";
    getline(cin, studentName);

    cout<<"Enter theory marks  : ";
    cin>>theoryMarks;

    cout<<"Enter practical marks  : ";
    cin>>practicalMarks;

    cout<<fixed<<setprecision(2); // Set decimal precision for average score

    // Calculate average score
    averageScore = (theoryMarks + practicalMarks) / 2.0;

    // Display the test result sheet
    cout<<"============================================"<<endl;
    cout<<"             TEST RESULT SHEET         "<<endl;
    cout<<"============================================"<<endl;
    cout<<"Student Name: "<<studentName<<endl;
    cout<<"Theory Marks: "<<theoryMarks<<endl;
    cout<<"Practical Marks: "<<practicalMarks<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"Average Score: "<<averageScore<<endl;

    if(averageScore >= 50)
    {
        cout<<"Status: PASS"<<endl;
    }
    else
    {
        cout<<"Status: FAIL"<<endl;
    }

    return 0;
}