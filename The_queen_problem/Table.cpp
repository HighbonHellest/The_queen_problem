#include "stdafx.h"
#include "Header.h"

Table::Table()
{
	std::cout << " Bad constructor argument, object instance will be locked";
	mB_usable = FALSE;
}

Table::Table(int a)
{
	mI_base_size = a;
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

Table Table::rotate()
{
	return Table();
}

Table Table::operator==(const Table)
{
	return Table();
}

/*std::ostream & operator<<(std::ostream & stream, const Table & table)
{
	return &table;
}*/
