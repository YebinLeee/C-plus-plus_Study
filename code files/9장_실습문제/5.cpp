#include <iostream>
using namespace std;

class AbstractGate{
protected:
	bool x,y;
public:
	void set(bool x, bool y){this->x=x;this->y=y;}
	virtual bool operation()=0;
};

class ANDGate:public AbstractGate{
public:
	bool operation(){ return x&y;}
};

class ORGate:public AbstractGate{
public:
	bool operation(){ return x|y;}
};

class XORGate:public AbstractGate{
public:
	bool operation(){ return x^y;}
};


int main(){
	ANDGate andGate;
	ORGate orGate;
	XORGate xorGate;
	
	andGate.set(true, false);
	orGate.set(true, false);
	xorGate.set(true, false);
	
	cout.setf(ios::boolalpha); // 불린 값을 문자열 형태로 "true", "false"로 출력
	
	cout<< andGate.operation() << endl; 
	cout<< orGate.operation() << endl; 
	cout<< xorGate.operation() << endl; 
}
