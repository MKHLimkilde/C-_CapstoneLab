/*
	Ayala, Ruben

	Spring 2025
	CS A250 - C++ 2

	Participant
*/

#ifndef WORKSHOPLIST_H
#define WORKSHOPLIST_H

#include <string>
#include <set>
#include <iostream>

class WorkshopList
{
	public:

		void addWorkshop(const Workshop& workshop);
		int getNumber(const Workshop& workshop) const;
		std::string getTitle(int workshopNo) const;
		int getHours(int workshopNo) const;
		int getCapacity(int workshopNo) const;
		int getPrice(int workshopNo) const;
		bool isEmpty() const;
		void clearList();

	private:
		std::set<Workshop> workshops;
		std::set<Workshop>::iterator findByNumber(int workshopNo);
};
#endif
