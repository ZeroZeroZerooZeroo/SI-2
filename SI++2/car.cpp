#include "car.h"
#include <iostream>
#include <string.h>
using namespace std;

car::car(string color, int price_car, string brand) {
	this->color = color;
	this->price_car = 0;
	this->brand = brand;
}
car::car(string color) {
	this->color = color;
}
car::car() {
}
car::~car() {
}
void car::input() {
	cout << "������� ���� ������:";
	cin >> color;
	cout << "������� ���� ������:";
	cin >> price_car;
	cout << "������� ����� ������:";
	cin >> brand;
}
void car::conclusion() {
	cout << " ���� ������ - " << color << " ���� ������ - " << price_car << " ����� ������ - " << brand << endl;
}