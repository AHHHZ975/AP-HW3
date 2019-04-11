#include <iostream>
#include <fstream>
#include <vector>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::ostream;
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
	ostream& operator<<(ostream& os);
	// Maxheap operator+(Maxheap& maxHeap, int aValue);
	~Maxheap();
private:
	int sizeOfHeapTree;
	vector<int> heapTree;
	vector<int> maxHeapTree;
};