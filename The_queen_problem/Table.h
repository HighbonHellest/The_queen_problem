#pragma once
#include "vector"



class Table
{
public:
	Table();
	Table(int);
	~Table();
	bool euqals();// compares an isntance of a Table
	Table rotate();//rotatase table by 90° clockwise
	Table operator ==(const Table);
	int mI_base_size;



private:
	std::vector<int> table;
};

