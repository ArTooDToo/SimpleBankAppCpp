#include "DataStorage.h"
#include <iostream>

DataStorage::DataStorage(std::string name) 
{
	this->dtName = name;
}

DataStorage::~DataStorage()
{
}

void DataStorage::addAccount(Entity & e)
{
	dtStorage.push_back(e);
}

void DataStorage::findAccount(std::string name)
{
	for (auto& e : dtStorage)
	{
		if (e.getName() == name)
		{
			std::cout << "Founded! \n";
			break;
		}
		else
		{
			std::cout << "There is matching account with given value: "<< name << std::endl;
		}
	}
}

void DataStorage::showAccountDetails(Entity& e)
{
	//[TODO] table like showing accoutn details
	std::cout << "Name of account: " << e.getName() << "\n";
	std::cout << "Account number: " << e.getAccountNumber() << "\n";
	std::cout << "Cash : " << e.getAmount() << "\n";
}


void DataStorage::createAccount()
{
	std::string n;
	int num, amou;
	std::cout << "Name of new account\n";
	std::cin >> n;
	std::cout << "Acount number\n";
	std::cin >> num;
	std::cout << "Initial amount\n";
	std::cin >> amou;

	Entity ent(n, num, amou, 'D');
	addAccount(ent);

	//delete &n;
	//delete &num;
	//delete &amou;
	//delete &ent;
}