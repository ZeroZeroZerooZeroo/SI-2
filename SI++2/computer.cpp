#include "computer.h"
#include <iostream>
#include <string.h>
using namespace std;

computer::computer(int computer_price, string body_color, string gaming) {
	this->computer_price = 0;
	this->body_color = body_color;
	this->gaming = gaming;
}
computer::computer(int computer_price) {
	this->computer_price = 0;
}
computer::computer() {
}
computer::~computer() {
}
void computer::input() {
	cout << "¬ведите цену компьютера:";
	cin >> computer_price;
	cout << "¬ведите цвет корпуса компьютера:";
	cin >> body_color;
	cout << "¬аш компьютер игровой?";
	cin >> gaming;
}
void computer::conclusion() {
	cout << " ÷ена компьютера - " << computer_price << " ÷вет корпуса компьютера - " << body_color << " ¬аш компьютер игровой? - " << gaming << endl;
}
