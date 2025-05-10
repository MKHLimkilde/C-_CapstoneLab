/* 
    Hauen-Limkilde, Marcus
    DataLoader.cpp
*/
#include "DataLoader.h"
#include <fstream>
#include <string>

using namespace std;

void DataLoader::loadWorkshops(WorkshopList workshopList, string filename)
{
    ifstream file(filename);

    if (!file.is_open())  { return; }

    string line;
    while(getline(file,line))
    {
        stringstreams ss(line);
        int number, capacity, hour;
        double price;
        string title;

        ss >> number;
        getline(ss, title, '|');
        ss >> hour;
        ss.ignore(1);
        ss >> capacity;
        ss.ignore(1);
        ss >> price;

        Workshop workshop(number, title, hours, capacity, price);
        workshopList.addWorkshop(workshop);
    }
    
    file.close();
}
