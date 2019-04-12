#include "MyVector.h"

int main(){	
	MyVector v;	
	for(size_t i{}; i != 10; i++){
		v.push_back(i);
	}
	cout << "The size of vector: " << v.size << endl;	
	cout << "The size of vector: " << v.capacity << endl;
	cout << "The vector elements are: " << endl;
	v.show();
	
	MyVector v1{v};
	v1.pop_back();
	v1.push_back(345);
	v1.push_back(312);
	v1.push_back(-78);
	v1.push_back(-2);
	v1.push_back(45);
	v1.push_back(-34);
	v1.push_back(76823);
	v1.push_back(8);
	v1.push_back(-68);
	v1.pop_back();
	cout << "The size of vector: " << v1.size << endl;	
	cout << "The size of vector: " << v1.capacity << endl;
	cout << "The vector elements are: " << endl;
	v1.show();
	return 0;
}