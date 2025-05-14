/*
	Ayala, Ruben

	Spring 2025
	CS A250 - C++ 2

	WorkshopList.cpp
*/

#include "WorkshopList.h"
#include "Workshop.h"  // Include the full definition of the Workshop class
#include <algorithm>

void WorkshopList::addWorkshop(const Workshop& workshop)
{
    workshopList.insert(workshop);
}

int WorkshopList::getNumber(const Workshop& workshop) const
{
    return workshop.getNumber();
}

std::string WorkshopList::getTitle(int workshopNo) const
{
    auto workshopIt = findByNumber(workshopNo);
    return workshopIt->getTitle();
}

int WorkshopList::getHours(int workshopNo) const
{
    auto workshopIt = findByNumber(workshopNo);
    return workshopIt->getHours();
}

int WorkshopList::getCapacity(int workshopNo) const
{
    auto workshopIt = findByNumber(workshopNo);
    return workshopIt->getCapacity();
}

double WorkshopList::getPrice(int workshopNo) const
{
    auto workshopIt = findByNumber(workshopNo);
    return workshopIt->getPrice();
}

bool WorkshopList::isEmpty() const
{
    return workshopList.empty();
}

void WorkshopList::clearList()
{
    workshopList.clear();
}


std::set<Workshop>::const_iterator WorkshopList::findByNumber(int workshopNo) const
{
    return std::find_if(
        workshopList.begin(), workshopList.end(),
        [workshopNo](const Workshop& w) {
            return w.getNumber() == workshopNo;
        });
}

const Workshop& WorkshopList::getWorkshop(int workshopNo) const // new function for part B
{
    auto workshopIt = findByNumber(workshopNo);

    return *workshopIt;
}

const std::set<Workshop>& WorkshopList::getAllWorkshops() const // new function for part B
{
    return workshopList;
}
