#include <iostream>
#include <fstream>
#include <vector>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::ostream;

class Maxheap;
ostream& operator<<(ostream& os, Maxheap& maxHeap);

class Maxheap{
public:
	Maxheap();
	Maxheap(int array[], size_t sizeOfArray);
	void add(int key);
	int getParent(size_t index);
	int getLeftChild(size_t index);
	int getRightChild(size_t index);
	void buildMaxHeap();
	void maxHeapify(vector<int>& aVector, size_t index);
	void heapSort();
	void printArray();
	int& operator[](size_t index);
	int max();
	int getHeight();	
	int parent(size_t index);
	int LeftChild(size_t index);
	int RightChild(size_t index);
	void Delete();
	Maxheap operator+(int aValue);
	~Maxheap();
	vector<int> maxHeapTree;
private:	
	vector<int> heapTree;
};