#include <iostream>
#include <string>
using namespace std;
struct student{
    string name;
    int roll_no;
    string branch;
    char grade; 
    };
    
int main()
{ 
   student s1;
       cout << "enter name, roll_no, branch, grade:";
       cin >> s1.name >> s1.roll_no >> s1.branch >> s1.grade;
       cout << "student name is " << s1.name << endl;
       cout << "student roll_no is " << s1.roll_no << endl;
       cout << "student branch is " << s1.branch << endl;
       cout << "student grade is  " << s1.grade;
   return 0;
  }     
