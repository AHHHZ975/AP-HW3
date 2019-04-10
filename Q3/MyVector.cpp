#ifndef MYVECTOR_H
#define MYVECTOR_H

#include "MyVector.h"

MyVector::MyVector(){
	this->size = 0;
	this->capacity = 0;
}
MyVector::MyVector(const MyVector& aVector){
	////////////// Copy constructor ///////////////
	cout << "copy constructor" << endl;
	this->size = aVector.size;
	this->capacity = aVector.capacity;
	this->array = new int[this->size];
	for(size_t i{}; i != this->size; i++){
		this->array[i] = aVector.array[i];
	}	
}

MyVector::~MyVector(){	
	if(this->size != 0){
		delete[] this->array;
	}
}

void MyVector::pop_back(){
	if(this->size != 0){
		this->array[this->size-1] = NULL;
		this->size--;
	}
	/////////////////// Initial capacity /////////////////////////
	if(this->size <= pow(2,this->capacityCounter-1)){
		this->capacityCounter--;	
	}
	this->capacity = pow(2,this->capacityCounter);	
}


void MyVector::push_back(int anElement){
	int localArray[this->size];	
	for(size_t i{}; i != this->size; i++){
		localArray[i] = this->array[i];
	}
	this->size++;	
	this->array = new int[this->size];
	for(size_t i{}; i != this->size - 1; i++){
		this->array[i] = localArray[i];
	}
	this->array[this->size-1] = anElement;
	/////////////////// Initial capacity /////////////////////////
	if(this->size > this->capacity){
		this->capacityCounter++;	
	}
	this->capacity = pow(2,this->capacityCounter);
}


void MyVector::show(){
	for(size_t i{}; i != this->size; i++){
		cout << this->array[i] << " ";
	}
	cout << endl; 
}

bool MyVector::operator<(const MyVector& aVector) const{
	return (this->size < aVector.size);
}

bool MyVector::operator==(const MyVector& aVector) const{
	return (this->size == aVector.size);
}


#endif