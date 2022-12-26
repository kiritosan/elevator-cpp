#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

class Elevator
{
	enum Direction
	{
		UP,
		DOWN
	};

	Direction direction;

	int min_floor; // Underground floor will be shown using negative value
	int max_floor;
	std::size_t capacity;

	std::vector<int> requests = {};
	int current_floor = 0; // ground floor
	std::size_t passengers = 0;

public:
	Elevator(int min_floor, int max_floor, std::size_t capacity);

	void start_elevator();

private:
	void set_request();
	int check_request(int floor) const;
	int is_valid_request(int floor);
	void set_direction(int floor);
};