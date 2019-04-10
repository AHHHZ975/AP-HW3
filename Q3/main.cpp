#include "MyVector.h"

int main(){	
	MyVector v;
	v.push_back(2);
	v.push_back(3);	
	v.push_back(4);	
	v.push_back(5);	
	v.push_back(3);	
	v.push_back(4);	
	v.push_back(5);	
	v.pop_back();
	v.pop_back();
	v.pop_back();
	v.pop_back();
	v.pop_back();
	v.pop_back();	
	cout << v.size << endl;	
	cout << v.capacity << endl;
	v.show();
	return 0;
}