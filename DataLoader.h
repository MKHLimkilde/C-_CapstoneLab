/*
    Hauen-Limkilde, Marcus

    Spring 2025
    CS A250 - C++ 2

    Workshop Hub
*/

#ifndef DATALOADER_H
#define DATALOADER_H

#include <string> 
#include "WorkshopList.h"

class DataLoader
{
  public: 
          static void loadWorkshops(WorkshopList workshopList, std::string filename);
}

#endif
