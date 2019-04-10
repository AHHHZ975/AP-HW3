#include "MyVector.h"

int main(){	
	MyVector v;
	MyVector v1;
	for(size_t i{}; i != 100; i++){
		v.push_back(i);
	}
	v1.push_back(2);
	v1.push_back(2);
	v1.push_back(2);
	cout << v.size << endl;	
	cout << v.capacity << endl;
	v1 == v;	
	v.show();
	return 0;
}