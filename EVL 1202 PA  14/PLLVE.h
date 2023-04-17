#pragma once
#include <iostream>
#include <cmath>
#include <random>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <conio.h>
#include <Windows.h>
#include <string>
#include <string.h>
#include <vector>
#include <iomanip>
#include <memory>
#include <cstdlib>
#include <ctime>
#include <string>
#include <sstream>
using namespace std;


int endprogram() {
	cout << "\n\nPress enter to exit...";
	cin.ignore(100, '\n');
	cin.get();
	return 0;
}



int validateInt(string prompt) {
	cout << prompt;
	int number = 0;
	while (!(cin >> number) || cin.fail())
		cout << "\nERROR: Try again... " << endl;
	cin.clear();
	cin.ignore(100, '\n');
	cin.sync();
	return number;
}
int validateInt(string prompt, int from, int to) {
	cout << prompt;
	int number = 0;
	while (!(cin >> number) || cin.fail() || number < from || number>to) {
		cout << "\nERROR: Try again... " << endl;
		cin.clear();
		cin.ignore(100, '\n');
		cin.sync();
	}
	return number;
}
float validatefloat(string prompt) {
	cout << prompt;
	float number = 0;
	while (!(cin >> number) || cin.fail())
		cout << "\nERROR: Try again... " << endl;
	cin.clear();
	cin.ignore(100, '\n');
	cin.sync();
	return number;
}
float validatefloat(string prompt, float from, float to) {
	cout << prompt;
	float number = 0;
	while (!(cin >> number) || cin.fail() || number < from || number>to) {
		cout << "\nERROR: Try again... " << endl;
		cin.clear();
		cin.ignore(100, '\n');
		cin.sync();
	}
	return number;
}
double validatedouble(string prompt) {
	cout << prompt;
	double number = 0;
	while (!(cin >> number) || cin.fail())
		cout << "\nERROR: Try again... " << endl;
	cin.clear();
	cin.ignore(100, '\n');
	cin.sync();
	return number;
}

double validateDouble(string prompt, double from, double to) {
	cout << prompt;
	double number = 0;
	while (!(cin >> number) || cin.fail() || number < from || number>to) {
		cout << "\nERROR: Try again... " << endl;
		cin.clear();
		cin.ignore(100, '\n');
		cin.sync();
	}
	return number;
}

char validatechar(string prompt, char from, char to) {
	cout << prompt;
	char number = 0;
	while (!(cin >> number) || cin.fail() || number < from || number>to) {
		cout << "\nERROR: Try again... " << endl;
		cin.clear();
		cin.ignore(100, '\n');
		cin.sync();
	}
	return number;
}
void Color(int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
int getRandom(int range_from, int range_to) {
	std::random_device rand_dev;
	std::mt19937 generator(rand_dev());
	std::uniform_int_distribution<int> distr(range_from, range_to);
	return distr(generator);
}

char validateYNChar(string prompt) {
	char character = 'n';
	cout << prompt;
	while (!(cin >> character) || cin.fail() || (tolower(character) != 'y' && tolower(character) != 'n')) {
		cin.clear();
		cin.ignore(100, '\n');
		cin.sync();
	}
	return character;
}