#include <iostream>
#include <math.h>
#include <utility>

using std::cout;
using std::cin;
using std::endl;
using namespace std::rel_ops;

class MyVector{
public:
	MyVector();
	MyVector(const MyVector& aVector);
	~MyVector();
	void show();
	void pop_back();
	void push_back(int anElement);	
	bool operator<(const MyVector& aVector) const;	
	bool operator==(const MyVector& aVector) const;
	size_t size{};
	size_t capacity{};
private:
	static inline int capacityCounter{-1};
	int* array;
};