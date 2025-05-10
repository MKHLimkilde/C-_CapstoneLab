/* 
    Hauen-Limkilde, Marcus
    DataLoader.cpp
*/
#include "DataLoader.h"
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void DataLoader::loadWorkshops(WorkshopList workshopList, string filename)
{
    ifstream file(filename);

    if (!file.is_open())  
    { 
        cerr << "Error opening file" << endl; 
        return;
    }

    string line;
    while(getline(file,line))
    {
        stringstream ss(line);
        string numberStr, title, hoursStr, capacityStr, priceStr;

        std::getline(ss, numberStr, '|');
        std::getline(ss, title, '|');
        std::getline(ss, hoursStr, '|');
        std::getline(ss, capacityStr, '|');
        std::getline(ss, priceStr, '|');

        int number = std::stoi(numberStr);
        int hours = std::stoi(hoursStr);
        int capacity = std::stoi(capacityStr);
        double price = std::stod(priceStr);

        Workshop workshop(number, title, hours, capacity, price);
        workshopList.addWorkshop(workshop);
    }
    
    file.close();
}
