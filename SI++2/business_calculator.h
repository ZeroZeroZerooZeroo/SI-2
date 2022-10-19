#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <math.h>
#include "computer.h"
#include "house.h"
#include "car.h"
#include "phone.h"
#include "money.h"

class business_calculator
{
private:
	phone Phone;
	car Car;
	house House;
	computer Computer;
	money Money;
public:

	business_calculator(money Money, phone Phone, car Car, house House, computer Computer);
	business_calculator(money Money);
	business_calculator();
	~business_calculator();
	void input();
	void conclusion();
	void total_income(business_calculator a);
	void total_price(business_calculator a);
	void work(business_calculator a);

};

