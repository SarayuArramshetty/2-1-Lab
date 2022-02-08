#include<iostream>
#include<exception>
using namespace std;
int main(){
    int n;
	cout<<"enter n:"<<endl;
	cin>>n;
	try{
	  try{
	     throw 20;
	  }
	  catch(int n){
	      cout<<"handle partially";
	     throw;
	   }
	 }
	catch(int n){
	   cout<<"handle remaining";
	 }
  }
