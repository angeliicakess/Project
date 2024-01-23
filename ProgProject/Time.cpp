#pragma once

#include <ctime>
#include <iostream>
#pragma warning (disable : 4996)

using namespace std;
void time();

void time() {

	time_t curr_time;
	curr_time = time(NULL);
	char* tm = ctime(&curr_time);
	cout << tm;
}