#include<iostream> 
using namespace std; 
	
class Base 
{ 
public: 
//	virtual void show() { cout<<"In Base \n"; } 
 void show() { cout<<"In Base \n"; } 
}; 
	
class Derived: public Base 
{ 
public: 
	void show() { cout<<"In Derived \n"; } 
}; 
	
int main(void) 
{ 
// 	Base *bp = new Derived; 
Base *bp;
Base ob;
Derived obj;
bp=&ob;
//bp=&obj;
//bp->Base::show();
bp->show(); // RUN-TIME POLYMORPHISM 
	return 0; 
} 
