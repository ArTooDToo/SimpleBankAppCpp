#pragma once
#ifndef ENTITY_H
#define ENTITY_H
#include <string>

enum ACCOUNT_PROPERTY
{
	NAME = 0,
	ACC_NUMBER = 1,
	AMOUNT = 2,
	ORDER = 3,
	TYPE = 4
};

class Entity
{
public:
	Entity(std::string, int, int, int orderNumber = 0, char type = 'D');
	Entity(std::string, int, int, char type = 'D');
	~Entity();

	void deposit(int);
	void withdraw(int);
	void transfer(Entity&, Entity&, int);

	void showProperties(int);
	bool isVIP();

	std::string getName();
	int getOrderNumber();
	int getAccountNumber();
	int getAmount();
	char getType();

	void pokaz();

private:
	std::string name;
	int orderNumber;
	int accountNumber;
	int amount;
	char type;
};
#endif // !ENTITY_H
