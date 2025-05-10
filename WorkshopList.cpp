/*
	Ayala, Ruben

	Spring 2025
	CS A250 - C++ 2

	Participant
*/

#include "WorkshopList.h"

void WorkshopList::addWorkshop(const Workshop& workshop)
{
	workshops.insert(workshop);
};

int WorkshopList::getNumber(const Workshop& workshop) const
{
	return workshop.theNumber;
};

std::string WorkshopList::getTitle(int workshopNo) const
{
	return workshop.theTitle;
};

int WorkshopList::getHours(int workshopNo) const
{
	auto workshopIt = findByNumber(workshopNo);
	return workshopIt->theHours;
};

int WorkshopList::getCapacity(int workshopNo) const
{
	auto workshopIt = findByNumber(workshopNo);
	return workshopIt->theCapacity;
};

double WorkshopList::getPrice(double workshopNo) const
{
	auto workshopIt = findByNumber(workshopNo);
	return workshopIt->thePrice;
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
