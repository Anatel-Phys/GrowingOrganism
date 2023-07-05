#include <iostream>
#include "Grid.h"

int main()
{
	Grid<int> grid(10, 10);
	grid.insert_at(4, 1, 2);
}