#include "money.h"
#include <iostream>
#include <string.h>
using namespace std;

money::money(int income1, int income2, int expenses) {
	this->income1 = 0;
	this->income2 = 0;
	this->expenses = 0;
}
money::money(int income1) {
	this->income1 = 0;
}
money::money() {
}
money::~money(){
}
void money::input() {
	cout << "������� ��� ����� 1 �� �����:";
	cin >> income1;
	cout << "������� ��� ����� 2 �� �����:";
	cin >> income2;
	cout << "������� ��� ������ �� �����:";
	cin >> expenses;
}
void money::conclusion() {
	cout << " ��� ����� 1 �� ����� - " << income1 << " ��� ����� 2 �� ����� - " << income2 << " ��� ������ �� ����� - " << expenses << endl;
}