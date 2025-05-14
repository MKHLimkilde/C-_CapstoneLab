/*
    Ayala, Ruben

    Spring 2025
    CS A250 - C++ 2

    RegistrationManager.cpp
*/

#include "RegistrationManager.h"
#include "WorkshopList.h"
#include "Workshop.h"  // Include the full definition of the Workshop class
#include "ParticipantList.h"
#include "Participant.h"

RegistrationManager::RegistrationManager(WorkshopList& workshopList, ParticipantList& participantList)
    : workshopList(workshopList), participantList(participantList)
{

};

void RegistrationManager::addOpenWorkshop(int workshopNo)
{
    openWorkshops.insert(workshopNo);
};

void RegistrationManager::registerParticipant(int workshopNo, int participantID)
{
    if (isOpen(workshopNo))
    {
        Participant& participant = participantList.getParticipant(participantID);
        Workshop& workshop = workshopList.getWorkshop(workshopNo);

        participantList.addWorkshopToParticipant(participantID, workshop);

        registration[workshopNo].insert(participantID);

        if (registration[workshopNo].size() >= workshop.getCapacity())
        {
            openWorkshops.erase(workshopNo);
        }


    }
};

void RegistrationManager::unregisterParticipant(int workshopNo, int participantID)
{
    auto& participants = registration[workshopNo];
    participants.erase(participantID);

    Workshop& workshop = workshopList.getWorkshop(workshopNo);
    if (participants.size() < workshop.getCapacity())
    {
        openWorkshops.insert(workshopNo);
    }

    participantsList.cancelWorkshop(participantID, workshop);
};

void RegistrationManager::closeWorkshop(int workshopNo)
{
    openWorkshops.erase(workshopNo);
};

void RegistrationManager::reopenWorkshop(int workshopNo)
{
    openWorkshops.insert(workshopNo);
};

bool RegistrationManager::isOpen(int workshopNo) const
{
    return (openWorkshops.find(workshopNo) != openWorkshops.end());
};

const set<int>& RegistrationManager::getOpenWorkshops() const
{
    return openWorkshops;
};
