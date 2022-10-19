#include "business_calculator.h"
#include <iostream>
#include <string.h>
#include <windows.h>
#include <math.h>
using namespace std;

business_calculator::business_calculator(money Money, phone Phone, car Car, house House, computer Computer) {
	this->Money = Money;
	this->Phone = Phone;
	this->Car = Car;
	this->House = House;
	this->Computer = Computer;
}
business_calculator::business_calculator(money Money) {
	this->Money = Money;
}
business_calculator::business_calculator() {

}
business_calculator::~business_calculator() {

}
void business_calculator::input() {
	Money.input();
	Phone.input();
	Car.input();
	House.input();
	Computer.input();
}
void business_calculator::conclusion() {
	Money.conclusion();
	Phone.conclusion();
	Car.conclusion();
	House.conclusion();
	Computer.conclusion();
}
void business_calculator::total_income(business_calculator a) {
	int sum = 0;
	sum = a.Money.income1 + a.Money.income2 - a.Money.expenses;
	cout << " ¬аш общий доход - " << sum << endl;
}
void business_calculator::total_price(business_calculator a) {
	int prise = 0;
	prise = a.Car.price_car + a.Computer.computer_price + a.House.price_home + a.Phone.price_phone;
	cout << " ÷ена всех вещей - " << prise << endl;
}
void business_calculator::work(business_calculator a) {
	int sum1 = 0, prise1 = 0, itg = 0;
	sum1 = a.Money.income1 + a.Money.income2 - a.Money.expenses;
	prise1 = a.Car.price_car + a.Computer.computer_price + a.House.price_home + a.Phone.price_phone;
	itg = prise1 / sum1;
	if (sum1 == 0 || sum1 < 0) {
		cout << " ¬ы не сможете накопить на эти вещи. ¬ам надо увеличить доходы или уменьшить расходы,потому что ваш общий доход равен 0 или ваши доходы меньше расходов" << endl;
	}
	else
		cout << " ¬ам нужно работать примерно" << itg << "  мес€цев, чтобы накопить на эти вещи" << endl;
}


