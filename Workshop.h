/*
    Hauen-Limkilde, Marcus
    Workshop.h
*/

#ifndef Workshop_H
#define Workshop_H

#include <string>

class Workshop
{
    public: 
        Workshop( int theNumber, std::string theTitle, int theHours, 
            int theCapacity, double thePrice);

        int getNumber() const { return theNumber; }
        std::string getTitle() const { return theTitle; }
        int getHours() const { return theHours; }
        int getCapacity() const { return theCapacity; }
        double getPrice() const { return thePrice; }

        bool operator< (Workshop workshop) { return theNumber < workshop.theNumber; }
        
    private:
        int theNumber;
        std::string theTitle;
        int theHours;
        int theCapacity;
        double thePrice;
        
};
#endif
