#include "Entity.h"

#include <iostream>


Entity::Entity(std::string name, int accountNumber, int amount, int orderNumber, char type)
{
	this->name = name;
	this->accountNumber = accountNumber;
	this->amount = amount;
	this->orderNumber = orderNumber;
	this->type = type;
}
Entity::Entity(std::string name, int accountNumber, int amount, char type)
{
	this->name = name;
	this->accountNumber = accountNumber;
	this->amount = amount;
	this->type = type;
}

Entity::~Entity()
{
}

void Entity::deposit(int amountIn)
{
	this->amount += amountIn;
}

void Entity::withdraw(int amountOut)
{
	this->amount -= amountOut;
}

//[TODO] move this function to DataStorage
void Entity::transfer(Entity & sourceEntity, Entity & targetEntity, int amount)//[TODO] cahnge from Objec to account number?
{
	if (sourceEntity.amount <= 0) {
		//[TODO] 
	}
	//[TODO] if(sourceEntity.exist || targetEntity.exist)
	//[TODO] amoun > 0
	sourceEntity.withdraw(amount);
	targetEntity.deposit(amount);
	//[TODO] Operation succesfull
}



//[TODO] move this function to DataStorage ?
void Entity::showProperties(int property)
{
	switch (property)
	{
	case 0:
		
		break;
	case 1:

		break;
	case 2:
		if (this->isVIP())
		{
			std::cout << "VIP - amount blocked\n";
		}
		else
		{
			std::cout << "Is not VIP \n";
		}
		break;
	case 3:

		break;
	case 4:

		break;
	default:
		std::cout << "Unknown property. Please check given type of property\n";
		break;
	}
}

bool Entity::isVIP()
{
	return this->type == 'V' ? true : false;
}

std::string Entity::getName()
{
	return this->name;
}

int Entity::getOrderNumber()
{
	return this->orderNumber;
}

int Entity::getAccountNumber()
{
	return this->accountNumber;
}

int Entity::getAmount()
{
	return this->amount;
}

char Entity::getType()
{
	return this->type;
}


void Entity::pokaz()
{
	//std::cout << "Test type\n" << this->type << std::endl;
	std::cout << "Test amount\n" << this->amount << std::endl;
}