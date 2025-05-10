/*
	Ayala, Ruben

	Spring 2025
	CS A250 - C++ 2

	Participant
*/

#include "WorkshopList.h"

class WorkshopList
{

	void WorkshopList::addWorkshop(Workshop workshop)
	{
		workshops.insert(workshop);
	};

	int WorkshopList::getNumber(Workshop workshop)
	{
		return workshop.theNumber;
	};

	std::string WorkshopList::getTitle(int workshopNo)
	{
		return workshop.theTitle;
	};

	int WorkshopList::getHours(int workshopNo)
	{
		return workshop.theHours;
	};

	int WorkshopList::getCapacity(int workshopNo)
	{
		return workshopNo.theCapacity;
	};

	double WorkshopList::getPrice(double workshopNo)
	{
		return workshopNo.thePrice;
	};

	bool WorkshopList::isEmpty()
	{
		return workshops.empty();
	};

	void WorkshopList::clearList()
	{
		workshops.clear();
	};

	set<Workshop>::iterator WorkshopList::findByNumber(int workshopNo)
	{
		return workshops.find(Workshop{workshopNo, "", 0, 0, 0.0});
	};


};
