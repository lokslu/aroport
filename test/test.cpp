#include "pch.h"
#include <iostream>
#include <string>
#include <istream>
#include <conio.h>
#include <stdio.h>
#include <Windows.h>
#include "plane.h"
#include <fstream>
#include "menu items.h"

#define KEY_UP 72 //по стандарту определяет что  KEY_UP -- 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RETURN 13
#define KEY_RIGHT 77

using namespace std;



int main()
{
	system("title Інформаційна система аеропорт");
	system("color F0");


	(CreateDirectory(L"./data", NULL));//создаёт папку data (возвращяет 1) и не создаёт папку если она уже создана (возвращяет 0)

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);



	int size_mas_menu = size(mas_menu);

	int choice_menu;

	do
	{
		choice_menu = startMenuCycle(mas_menu, size_mas_menu);


		switch (choice_menu)
		{
		case 1:
			fynk_save(type_mas_planet, yes_no, zapis_data);
			break;

		case 2:
			flight_search();
			break;
		case 3:
			return 0;
			break;
		}
	} while (choice_menu != 3);
}