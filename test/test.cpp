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
#include "text_mas_menu.h"


#define KEY_UP 72 //по стандарту определяет что  KEY_UP -- 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_RETURN 13

using namespace std;

int kolstrokmenu;
int main()
{ 
	


	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int g;
	

	kolstrokmenu = size(mas_menu);// <-  ето для С++ V.17 или через sizeof(mas_menu)/sizeof(*mas_menu);
	g = startMenuCycle(mas_menu, kolstrokmenu); // меню 
	
cout << g;
plane plane1[5];
switch (g)
{  
case 1:
	plane1[1].vvod_nap_klav(type_mas_planet);
	plane1[1].save_text();
	break;
case 3:
	return 0;
break;
}

	
	

	

}

