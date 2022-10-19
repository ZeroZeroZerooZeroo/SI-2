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
	cout << "¬ведите ваш доход 1 за мес€ц:";
	cin >> income1;
	cout << "¬ведите ваш доход 2 за мес€ц:";
	cin >> income2;
	cout << "¬ведите ваш расход за мес€ц:";
	cin >> expenses;
}
void money::conclusion() {
	cout << " ¬аш доход 1 за мес€ц - " << income1 << " ¬аш доход 2 за мес€ц - " << income2 << " ¬аш расход за мес€ц - " << expenses << endl;
}