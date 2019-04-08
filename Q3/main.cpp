#include "MyVector.h"

int main(){	
	MyVector v;
	v.push_back(2);
	v.push_back(2);
	v.push_back(2);
	v.push_back(2);
	cout << v.size << endl;	
	v.show();
	return 0;
}