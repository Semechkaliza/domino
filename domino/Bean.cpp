#include "stdafx.h"
#include "Bean.h"
#include <iostream>
using namespace std;

Bean::Bean(int a,int b)
{
	this->a = a;
	this->b = b;
};
int Bean::getA(){
	return a;
};
int Bean::getB() {
	return b;
}

Bean::~Bean()
{
}
void Bean::toString() {
	cout <<"("<< a << ',' << b<<')';
}