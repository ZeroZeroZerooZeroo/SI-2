#include "house.h"
#include <iostream>
#include <string.h>
using namespace std;

house::house(int area, int price_home) {
	this->area = 0;
	this->price_home = 0;
}
house::house(int area) {
	this->area = 0;
}
house::house() {
}
house::~house() {
}
void house::input() {
	cout << "������� ������� ����(��. �.):";
	cin >> area;
	cout << "������� ���� ����:";
	cin >> price_home;
}
void house::conclusion() {
	cout << " ������� ����(��. �.) - " << area << " ���� ���� - " << price_home  << endl;
}