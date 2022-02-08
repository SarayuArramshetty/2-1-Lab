#include<iostream>
#include<exception>
using namespace std;

class excep{
   public:
   int a, b, result;
   void read(){
	float result;
	cout<<"enter the value of a and b";
	cin>>a>>b;
  }	
   void calculate(){
	try{
	      if(b==0){
	      throw b;
	      }
	      else if(b>0){
	        result = a/b;
	        cout<<"result is:"<<result<<endl;
	        }
	      else{
	          throw b;
	        }    
	        }
	     catch(int x){
	        if(b==0){
	           cout<<"divide by zero exception";
	          } 
	        else{   
	     cout<<"b is not valid:"<<endl;
	    }
	    }
	 catch(...){
	     if(b==0){
	       cout<<"divide by zero exception caught"<<endl;
	     }
	     else{
	       cout<<"b should be positive";
	     }
	  }
	}  
    };	     
	
int main(){
    excep E;
       E.read();
       E.calculate();
     return 0;
   }    	             
	             
