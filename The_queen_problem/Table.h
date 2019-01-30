#pragma once
#include "Header.h"



class Table
{
public:
	Table();
	Table(int);
	~Table();
	bool euqals();// compares an isntance of a Table
//	Table rotate();//rotatase table by 90° clockwise
	Table operator ==(const Table);
	void solve_for(int i, int j);
	
	
	
	friend std::ostream& operator<<(std::ostream& stream, const Table& table);


private:


	inline void Swap(int& i, int& j)
	{
		int temp = i;
		i = j;
		j = temp;
	} 
	bool mB_usable;
	std::vector<int> mI_table;
	
	int mI_base_size;
	int mI_TNOL; //Total Number of Levels
};

