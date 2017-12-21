#pragma once
class Bean
{
	int a, b;
public:
	int getA();
	int getB();
	Bean() {};
	Bean(int,int);
	~Bean();
	void toString();
};

