#ifndef MAXHEAP_H
#define MAXHEAP_H

#include "Maxheap.h"

Maxheap::Maxheap(){

}

Maxheap::Maxheap(int array[], size_t sizeOfArray){
	this->heapTree.clear();	
	for(size_t i{}; i != sizeOfArray; i++){
		this->heapTree.push_back(array[i]);
	}
}

void Maxheap::buildMaxHeap(vector<int>& aVector){
	for(size_t i{aVector.size()/2}; i != 0; i--){
		maxHeapify(aVector, i);
	}
}

void Maxheap::maxHeapify(vector<int>& aVector, size_t index){
	size_t l{}, r{}, largestIndex{};
	int temp{};
	l = getLeftChild(index);
	r = getRightChild(index);
	if(l <= aVector.size() && aVector.at(l) > aVector.at(index)){
		largestIndex = l;
	}
	else{
		largestIndex = index;
	}
	if(l <= aVector.size() && aVector.at(r) > aVector.at(index)){
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
	return this->parent.at(index);
}
int Maxheap::getRightChild(size_t index){
	return 1;
}

int Maxheap::getLeftChild(size_t index){
	return 1;
}

void Maxheap::add(int key){

}

Maxheap::~Maxheap(){
	
}

#endif