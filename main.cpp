#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include "elevator.h"

int main()
{
	std::string capacity_str, min_floor_num_str, max_floor_num_str;
	int min_floor_num, max_floor_num;
	std::size_t capacity;

	std::cout << "Enter minimum floor number, maximum floor number in the building\n";
	std::cin >> min_floor_num_str;
	std::cin >> max_floor_num_str;

	min_floor_num = std::stoi(min_floor_num_str);
	max_floor_num = std::stoi(max_floor_num_str);

	std::cout << "Enter capacity for the elevator\n";
	std::cin >> capacity_str;
	std::cin.ignore();
	std::stringstream capacity_stream(capacity_str);
	capacity_stream >> capacity;

	Elevator elevator(min_floor_num, max_floor_num, capacity);
	// elevator.start_elevator();
}