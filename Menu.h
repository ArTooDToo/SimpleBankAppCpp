#pragma once
#ifndef MENU_H
#define MENU_H
#include <string>
#include <iostream>

class Menu
{
public:
	Menu();
	~Menu();

	void showMainMenu();
	void showSecondLevelMenu();

	
private:
	std::string header;
	std::string footer;
};
#endif // !MENU_H