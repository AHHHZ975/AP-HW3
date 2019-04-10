#include <iostream>
#include <math.h>

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
	size_t size{};
	size_t capacity{};
	static inline int capacityCounter{-1};
private:
	int* array;
};