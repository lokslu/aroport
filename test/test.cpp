#include "pch.h"
#include <iostream>
#include <string>
#include <istream>
#include <conio.h>
#include <stdio.h>
#include <Windows.h>
#include <cstring>
#include "menu.h"
#include "plane.h"
#include <fstream>
#include "text_mas_menu.h"


#define KEY_UP 72 //по стандарту определяет что  KEY_UP -- 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_RETURN 13

using namespace std;



int main()
{ 
	int kolstrokmenu;


	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int g;
	

	kolstrokmenu = size(mas_menu);// <-  ето для С++ V.17 или через sizeof(mas_menu)/sizeof(*mas_menu);
	 // меню 
	
//cout << g;		
	do
	{
		g = startMenuCycle(mas_menu, kolstrokmenu);


		switch (g)
		{
		case 1:
			fynk_save(type_mas_planet, yes_no, zapis_data);
			break;

		case 2:
			cout << "Не работает\n";
			break;
		case 3:
			return 0;
			break;
		}
	} while (g != 3);
	
	

}

