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

        int getNumber() const;
        std::string getTitle() const;
        int getHours() const;
        int getCapacity() const;
        double getPrice() const;

        bool operator< (Workshop workshop);
        
    private:
        int number;
        std::string title;
        int hours;
        int capacity;
        double price;
        
};
#endif
