#include <iostream>
using namespace std;
int main()
{
double Score, Student, Midterm, Final, Classroom, Assignment, HomeWork;

    cout << "Enter homework score : ";
    cin >> HomeWork ;
    if (Score >= 16){
        cout << "Error" << endl;
    }

    cout << "Enter assignment score : ";
    cin >> Assignment ;
    if (Score >= 11){
        cout << "Error" << endl;
    }

    cout << "Enter classroom score : ";
    cin >> Classroom ;
    if (Score >= 16){
        cout << "Error" << endl;
    }

    cout << "Enter midterm score : ";
    cin >> Midterm ;
    if (Score >= 31){
        cout << "Error" << endl;
    }

    cout << "Enter final score : ";
    cin >> Final ;
    if (Score >= 31){
        cout << "Error" << endl;
    }

Score = HomeWork + Assignment + Classroom + Midterm + Final;

cout << "GPA = " << Score << endl;
cin >> Score;

for (int Student = 0; Student <= 50; ++Student){

if (Score <= -1 || Score >= 101){
    cout << "Please Enter Score 0-100 !" << endl; 
}
else{
if (Score >= 90){
    cout << "A" << endl;
}   
else if (Score >= 80){
    cout << "B" << endl;
}
else if (Score >= 70){
    cout << "C" << endl;
}
else if (Score >= 60){
    cout << "D" << endl;
}
else if (Score <= 59 ){
    cout << "F" << endl;
}
}
}
return 0;
}


