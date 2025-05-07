/*
	Ayala, Ruben

	Spring 2025
	CS A250 - C++ 2

	Participant
*/

#include "WorkshopList.h"

class WorkshopList
{

	void addWorkshop(Workshop workshop workshopName)
	{
		this.insert();
	};

	int getNumber(Workshop workshop)
	{
		return workshop.number;
	};

	std::string getTitle(int workshopNo)
	{
		return workshop.title;
	};

	int getHours(int workshopNo)
	{
		return workshop.hours;
	};

	int getCapacity(int workshopNo)
	{
		return workshopNo.capacity;
	};

	double getPrice(double workshopNo)
	{
		return workshopNo.price;
	};

	bool isEmpty()
	{
		return (count < 1);
	};

	void clearList()
	{

	};

	set<Workshop>::iterator findByNumber(int workshopNo)
	{

	};


};