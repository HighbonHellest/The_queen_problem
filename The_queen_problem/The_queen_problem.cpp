// The_queen_problem.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include "Header.h"


int main() //<<<---- entry point to software
{
	int size;
	std::cin>> size;

	Table table;
	Table table2(size);

	std::cout << table2 << std::endl;

	
	std::getchar();
	std::getchar();
	
    return 0;
}

