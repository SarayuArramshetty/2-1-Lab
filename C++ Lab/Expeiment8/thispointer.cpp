#include <iostream>
#include <string>
using namespace std;
class student{
     public:
       int roll_no;
       string name;
       int marks;
       student(int roll_no, string name,int marks){
           this -> roll_no = roll_no;
           this -> name = name;
           this -> marks = marks;
           }
      void display(){
           cout << "student details:" << endl;
           cout << "roll_no:" << roll_no << endl;
           cout << "name:" << name << endl;
           cout << "marks:" << marks << endl;
        }
   };
int main(){
    student s1 = student(201,"xyz",98);
    student s2 = student(202,"abc",99);
    s1.display();
    s2.display();
    
  return 0;
}                  
