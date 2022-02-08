#include <iostream>
using namespace std;
class base
{
 	public:
 	int x;
 	void read()
 	{
    	cout << "Enter value of x :"; 
    	cin >> x;
 	}
};
class derived1 : public base
{
 	public:
 	int y;
 	void read2()
 	{
 	    cout << "Enter value of y:"; 
 	    cin >> y;
 	}
};
class derived2 : public derived1   
{
 	public:
 	int z;
 	void read3()
 	{
    	cout << "Enter value of z: ";
    	cin >> z;
 	}
 	void product()
 	{
 	    cout << "Product = " << x * y * z;
 	}
};
int main()
{
     derived2 a;      
     a.read();
     a.read2();
     a.read3();
     a.product();
     return 0;
}      
