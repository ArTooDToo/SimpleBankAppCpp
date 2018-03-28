#include <iostream>
#include <string>

#include "DataStorage.h"
#include "Entity.h"
#include "Menu.h"

void menuHandler(int i, Menu &menu) {
	short second_level_choice = 0;
	switch (i)
	{
	case 1:

		break;
	case 2:

		break;
	case 4:
		while (second_level_choice != 9)
		{
			menu.showSecondLevelMenu();

			system("cls"); //Windows only
			std::cout << "1 - Make a deposit\n";
			std::cout << "2 - Withdraw\n";
			std::cout << "3 - Transfer Cash\n";
			std::cout << "4 - Show details of account\n";
			std::cout << "9 - Back to main menu\n";

			std::cin >> second_level_choice;
			system("cls"); //Windows only
		}
		//second_level_choice = 0;
		break;
	default:
		system("cls"); //Windows only
		std::cout << "Wrong number. Please try again\n";
		break;
	}

}

int main()
{
	//Menu menu;
	//[TODO]
	/*
		Random generator of name's e.x. name+i
		Random generator of account, amount, type?
		cin only integers check
		think about new class, that has all functions
		while menu move to menu
	*/

	/**/
	int choice = 0;
	
	bool isRunning = true;
	/**/

	DataStorage dtSotrage("First data storage");

	Entity ent("est", 1, 4, 'V');
	ent.pokaz();
	Entity ent2("lol", 1, 5,'D');
	dtSotrage.addAccount(ent);
	dtSotrage.addAccount(ent2);
	dtSotrage.findAccount("lsol");
	dtSotrage.createAccount();
	dtSotrage.showAccountDetails(ent);


	dtSotrage.findAccount("sd");
	Menu menu;

	while (isRunning)
	{
		std::cout << "1 - Creating new accout\n";
		std::cout << "2 - Find Accounnt\n";
		std::cout << "3 - Show details of account\n";
		std::cout << "4 - Manage Account\n";
		std::cout << "5 - Remove account\n";
		std::cout << "0 - Exit\n";

		
		std::cin >> choice;

		if (std::cin.good())
		{
			if (choice == 0)
			{
				isRunning = false;
			}

			menuHandler(choice, menu);
		}

		std::cin.clear();
		std::cin.ignore();
	}
	return 0;
}