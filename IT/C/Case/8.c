#include "stdafx.h"
#include<iostream>
using namespace std;
 
int _tmain(int argc, _TCHAR* argv[])
{
	//устанавливаем значения консоли вывода
	setlocale(0, "Rus");
	int D, M;
	std::cout << "Введите день:";
	std::cin >> D;
	std::cout << "Введите номер месяца:";
	std::cin >> M;
	D = D - 1;
	if (D == 0) {
		M = M - 1;
		if (M = 0) { 
			M = 12; 
		}
		switch (M)
		{
		case 1: D = 31;
		case 3: D = 31;
		case 5: D = 31;
		case 7: D = 31;
		case 8: D = 31;
		case 10: D = 31;
		case 12: D = 31;
		case 4: D = 30;
		case 6: D = 30;
		case 9: D = 30;
		case 11: D = 30;
		case 2: D = 28;
		}
	}
	std::cout << "Предыдущая дата:"<<D<<"."<<M;
	return 0;
}