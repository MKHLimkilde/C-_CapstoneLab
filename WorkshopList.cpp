/*
	Ayala, Ruben

	Spring 2025
	CS A250 - C++ 2

	WorkshopList.h
*/

#ifndef WORKSHOPLIST_H
#define WORKSHOPLIST_H

#include <set>
#include "Workshop.h"  // Make sure this is included here

class WorkshopList {
public:
    void addWorkshop(const Workshop& workshop);
    int getNumber(const Workshop& workshop) const;
    std::string getTitle(int workshopNo) const;
    int getHours(int workshopNo) const;
    int getCapacity(int workshopNo) const;
    double getPrice(int workshopNo) const;
    const Workshop& getWorkshop(int workshopNo) const; // new function for part B
    const std::set<Workshop>& getAllWorkshops() const; // new function for part B
    bool isEmpty() const;
    void clearList();

private:
    std::set<Workshop> workshopList;
    std::set<Workshop>::const_iterator findByNumber(int workshopNo) const;
};

#endif
