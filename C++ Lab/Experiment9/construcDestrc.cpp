#include<iostream>
using namespace std;
class A{
     public:
     A(){
        cout << "constructer called" << endl;
        }
     ~A(){
         cout << "destructor called";
         }
 };
 int main(){
     A obj;
     }   
