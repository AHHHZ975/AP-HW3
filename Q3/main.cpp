#include "MyVector.h"

int main(){	
	MyVector v;	
	for(size_t i{}; i != 1; i++){
		v.push_back(i);
	}	
	MyVector v1{v};
	cout << v.size << endl;	
	cout << v.capacity << endl;	
	v.show();
	v1.show();
	return 0;
}