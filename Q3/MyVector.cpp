#ifndef MYVECTOR_H
#define MYVECTOR_H

#include "MyVector.h"

MyVector::MyVector(){
	this->size = 0;
	this->capacity = 0;
}

MyVector::~MyVector(){
	delete[] this->array;
}

void MyVector::pop_back(){
	if(this->size != 0){
		this->array[this->size-1] = NULL;
		this->size--;
	}	
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
}

void MyVector::show(){
	for(size_t i{}; i != this->size; i++){
		cout << this->array[i] << " ";
	}
	cout << endl; 
}

#endif