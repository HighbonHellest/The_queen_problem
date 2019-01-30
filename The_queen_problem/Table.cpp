#include "stdafx.h"
#include "Header.h"

Table::Table()
{
	std::cout << " Bad constructor argument, object instance will be locked";
	mB_usable = FALSE;
}

Table::Table(int a) : mI_base_size(a)
{
	mI_base_size = a;
	mI_TNOL = mI_base_size / 2;
	for (int i = 0; i < (a*a); ++i)
	{
		mI_table.push_back(0);
		
	}

	mB_usable = TRUE;
	std::cout << "Table created! Size:" <<a<< ", total boardspace:" << a*a << std::endl;
}


Table::~Table()
{
}

bool Table::euqals()
{
	return false;
}



/*Table Table::rotate()
{
	int level = 0;
	int last = mI_base_size;

	while (level < mI_TNOL)
	{
		for (int i = level; i < last; ++i)
		{
		/*	Swap(m[level][i],m[i][last]);
			Swap(m[level][i],m[last - 1 + level]);
			Swap(m[level][i],m[last-i+level][level]);
		}
	}
	++level;
	--last;

	return Table();
}*/

Table Table::operator==(const Table)
{
	return Table();
}

void Table::solve_for(int i, int j)
{

}

std::ostream & operator<<(std::ostream & stream, const Table & table)
{
	std::string retval;
	for (int i = 0; i < table.mI_table.size(); ++i)
	{
		if (i != 0 && i%table.mI_base_size == 0)
		{
			stream << std::endl;
		}
		stream << "[" << table.mI_table[i] << "]";
	}

	return stream;
}
