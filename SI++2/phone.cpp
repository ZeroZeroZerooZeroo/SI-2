#include "phone.h"
#include <iostream>
#include <string.h>
using namespace std;

phone::phone(string name_phone, int price_phone, string cover_color) {
	this-> name_phone= name_phone;
	this-> price_phone = 0;
	this->cover_color = cover_color;
}
phone::phone(string name_phone) {
	this->name_phone = name_phone;
}
phone::phone() {
}
phone::~phone() {
}
void phone::input() {
	cout << "������� ����� ��������:";
	cin >> name_phone;
	cout << "������� ���� ��������:";
	cin >> price_phone;
	cout << "������� ���� �����:";
	cin >> cover_color;
}
void phone::conclusion() {
	cout << " ����� �������� - " << name_phone << " ���� �������� - " << price_phone << " ���� ����� �������� - " << cover_color << endl;
}