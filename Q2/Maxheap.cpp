#ifndef MAXHEAP_H
#define MAXHEAP_H

#include "Maxheap.h"

Maxheap::Maxheap(){

}

Maxheap::Maxheap(int array[], size_t sizeOfArray){
	this->heapTree.clear();	
	this->maxHeapTree.clear();	
	for(size_t i{}; i != sizeOfArray; i++){
		this->heapTree.push_back(array[i]);
	}
}

void Maxheap::add(int key){
	this->heapTree.push_back(key);
}

void Maxheap::buildMaxHeap(){
	for(size_t i{this->heapTree.size()/2}; i != -1; i--){
		this->maxHeapify(this->heapTree, i);
	}	
}

void Maxheap::maxHeapify(vector<int>& aVector, size_t index){
	size_t l{}, r{}, largestIndex;
	int temp{};
	l = getLeftChild(index);
	r = getRightChild(index);
	largestIndex = index;
	if(l < aVector.size() && aVector.at(l) > aVector.at(index)){
		largestIndex = l;
	}
	else{
		largestIndex = index;
	}
	if(r < aVector.size() && aVector.at(r) > aVector.at(largestIndex)){
		largestIndex = r;
	}
	if(largestIndex != index){
		temp = aVector.at(index);
		aVector.at(index) = aVector.at(largestIndex);
		aVector.at(largestIndex) = temp;
		this->maxHeapify(aVector, largestIndex);
	}
}

int Maxheap::getParent(size_t index){
	if(index == 0){
		return NULL;
	}
	return ((index-1)/2);
}
int Maxheap::getLeftChild(size_t index){
	return (2*index+1);	
}

int Maxheap::getRightChild(size_t index){
	return (2*index+2);	
}

int Maxheap::parent(size_t index){
	this->heapSort();
	if(index == 0){
		return NULL;
	}
	return this->maxHeapTree.at((index-1)/2);
}

int Maxheap::LeftChild(size_t index){
	this->heapSort();
	return this->maxHeapTree.at(2*index+1);	
}

int Maxheap::RightChild(size_t index){
	this->heapSort();
	return this->maxHeapTree.at(2*index+2);	
}

void Maxheap::heapSort(){
	this->buildMaxHeap();
	for(size_t i{this->heapTree.size()-1}; i != -1; i--){
		this->maxHeapTree.push_back(this->heapTree.at(0));
		int temp = this->heapTree.at(0);
		this->heapTree.at(0) = this->heapTree.at(i);
		this->heapTree.at(i) = temp;
		this->heapTree.pop_back();
		this->maxHeapify(this->heapTree, 0);
	}
}

void Maxheap::printArray(){
	this->heapSort();
	cout << "/////////// The heap sorted array is: /////////////" << endl;
	for(size_t i{}; i != this->maxHeapTree.size(); i++){
		cout << this->maxHeapTree.at(i) << " ";		
	}
	cout << endl;
}

int& Maxheap::operator[](size_t index){
	if(index < this->maxHeapTree.size()){
		return this->maxHeapTree.at(index);
	}
	cout << "Maxheap tree is empty" << endl;	
}

ostream& operator<<(ostream& os, Maxheap& maxHeap){	
	int count{};
	maxHeap.heapSort();
	cout << "/////////// The heap tree is: /////////////" << endl;
 	for(size_t i{}; i <= maxHeap.getHeight(); i++){
	    for(size_t j{}; j < pow(2,i) && count < maxHeap.maxHeapTree.size(); j++){	       
	        os << maxHeap.maxHeapTree[j+pow(2,i)-1] << ", ";	    
	        count++;
	    }
	    os << endl;
	}
	return os;
}

int Maxheap::max(){
	this->buildMaxHeap();
	return this->maxHeapTree.at(0);
}

int Maxheap::getHeight(){
	return ceil(log2(this->maxHeapTree.size() + 1)) - 1;
}

// Maxheap Maxheap::operator+(int aValue){
// 	 += 5;
// 	return *this;
// }
void Maxheap::Delete(){
	this->maxHeapTree.erase(this->maxHeapTree.begin());
	this->heapSort();
}
Maxheap::~Maxheap(){
	
}

#endif