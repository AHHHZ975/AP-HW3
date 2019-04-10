#include "MyVector.h"

int main(){	
	MyVector v;
	v.push_back(2);
	v.push_back(1);
	v.push_back(3);
	v.push_back(4);
	v.pop_back();
	v.pop_back();
	v.pop_back();	
	v.pop_back();
	v.pop_back();
	v.pop_back();
	cout << v.size << endl;
	v.show();
	return 0;
}