#include <iostream>

void hourN(int x);
void minN(int y);
void foo(int hour, int min);

int main() {
	setlocale(LC_ALL, "Russian");
	int hour, min;

	std::cin >> hour >> min;
	while (hour < 0 or hour>23 || min < 0 or min>59) {
		std::cin.clear();
		std::cin.ignore();
		std::cout << "ERROR" << "\n";
		std::cin >> hour >> min;
		
	}
	foo(hour, min);
	

}


void foo(int hour, int min) {
	if (hour == 12 && min == 0) {
		std::cout << " полдень";
		return;
	}
	if (hour == 0 && min == 0) {
		std::cout << " полночь";
		return;
	}

			if (hour >= 0 && hour < 5) {
				if (hour == 1) {
					std::cout << hour << " час ";
				}
					else if (hour == 0) {
						hourN(hour);
					}
					else
						std::cout << hour << " часа ";

								minN(min);
										if (min == 0) {
											std::cout << " ночи " << " ровно ";
										}
												else
													std::cout << " ночи ";

}

if (hour >= 5 && hour < 12) {
	hourN(hour);

			minN(min);
			if (min == 0) {
				std::cout << " утра " << " ровно ";
			}
					else
						std::cout << " утра ";
}

if (hour >= 12) {
	hour -= 12;
		if (hour >= 0 && hour < 6) {
			if (hour == 1) {
				std::cout << hour << " час ";
			}
				else if (hour == 0) {
					hourN(hour);
				}
					else
						std::cout << hour << " часа ";


							minN(min);
								if (min == 0) {
									std::cout << " дня " << " ровно ";
								}
									else
										std::cout << " дня ";
		}

	if (hour >= 6 && hour < 12) {
		hourN(hour);

		minN(min);

			if (min == 0) {
				std::cout << " вечера " << " ровно ";
			}
						else
							std::cout << " вечера ";
					}
			}

}


	void hourN(int x) {
		std::cout << x << " часов ";

	}


		void minN(int y) {
			if (y == 1 or y == 21 or y == 31 or y == 41 or y == 51) {
				std::cout << y << " минута ";
		 
			}
					else if (y > 1 && y < 5 or y >21 && y < 25 or y>31 && y < 35 or y>41 && y < 45 or y>51 && y < 55) {
						std::cout << y << " минуты ";
					}
							else{
								if (y == 0) {
			
								}
										else
											std::cout << y << " минут ";
							}


		}
