#include <iostream>
#define hourTwelve(hour) (hour-12)

void hourN(int x);
void minN(int y);

int main() {
	setlocale(LC_ALL, "ru_RU.UTF-8"); 

	int hour, min;

	std::cin >> hour >> min;
	while (hour < 0 or hour>23 || min < 0 or min>59) {
		std::cout << "ERROR" << "\n";
		std::cin >> hour >> min;
	}
	if (hour > 12) {
		hour = hourTwelve(hour);
	}



	if (hour > 0 && hour < 5) {
		if (hour == 1) {
			std::cout << hour << " час ";
		}
		else
			std::cout << hour << " часа ";


		std::cout << " ­ночи ";
		minN(min);
	}

}

void hourN(int x) {
	std::cout << x << " часов ";

}

void minN(int y) {
	if (y == 1 or y == 21 or y == 31 or y == 41 or y == 51) {
		std::cout << y << " минута ";
	}
	if (y > 1 && y < 5 or y >21 && y < 25 or y>31 && y < 35 or y>41 && y < 45 or y>51 && y < 55) {
		std::cout << y << " минуты ";
	}
	else {
		if (y == 0) {

		}
		else
			std::cout << y << " минут ";
	}


}
