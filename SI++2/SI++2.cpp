#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include "computer.h"
#include "house.h"
#include "car.h"
#include "phone.h"
#include "money.h"
#include "business_calculator.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	int funct = 0;
	money Money = money::money(0, 0, 0);
	phone Phone = phone::phone("name_phone",0, "cover_color");
	car Car = car::car("color", 0, "brand");
	house House = house::house(0, 0);
	computer Computer = computer::computer(0, "body_color","gaming");
	business_calculator* your_bc = new business_calculator[2];
	for (int i = 0; i < 1; i++) {
		your_bc[i] = business_calculator::business_calculator(Money, Phone ,Car, House, Computer);
		your_bc[i].input();
		your_bc[i].conclusion();
	}
	
	while (funct != 5) {
		cout << " Нажмите: 1 - для вывода чек листа " << endl;
		cout << " 2 - для подсчета общего дохода " << endl;
		cout << " 3 - для подсчета общего времени работы,чтобы накопить " << endl;
		cout << " 4 - для подсчета общей стоимости вещей " << endl;
		cout << " 5 - выхода" << endl;
		cin >> funct;
		switch (funct) {
		case 1:
			your_bc->conclusion();
			break;
		case 2:
			your_bc->total_income(*your_bc);
			break;
		case 3: {
			your_bc->work(*your_bc);
			break;
		}
		case 4:
			your_bc->total_price(*your_bc);
			break;
		}
		fflush(stdin);
	}
	for (int i = 0; i < 1; i++) {
		delete your_bc;
	}
	delete[] your_bc;
}
