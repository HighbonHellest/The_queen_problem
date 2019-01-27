#pragma once
#include "Header.h"



class Table
{
public:
	Table();
	Table(int);
	~Table();
	bool euqals();// compares an isntance of a Table
	Table rotate();//rotatase table by 90° clockwise
	Table operator ==(const Table);
	
	
//	friend std::ostream& operator<<(std::ostream& stream, const Table& table);


private:
	bool mB_usable;
	std::vector<int> mI_table;
	int mI_base_size;
};

