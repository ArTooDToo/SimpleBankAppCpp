#pragma once
#ifndef DATASTORAGE_H
#define DATASTORAGE_H
#include <vector>
#include <string>
#include "Entity.h"

class DataStorage
{
public:
	DataStorage(std::string);
	~DataStorage();

	void addAccount(Entity&);
	void findAccount(std::string name);
	void showAccountDetails(Entity&);

	void createAccount();


private:
	std::vector<Entity> dtStorage;
	std::string dtName;
};
>>>>>>> 9148f0f7663da9b7157a784c7c9a4ce0030aee04
#endif // !DATASTORAGE_H