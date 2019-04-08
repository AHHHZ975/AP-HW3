#include <iostream>


using std::cout;
using std::cin;
using std::endl;


class MyVector{
public:
	MyVector();
	~MyVector();
	void show();
	void pop_back();
	void push_back(int anElement);
	size_t size;
	int capacity;
private:
	int* array;
};