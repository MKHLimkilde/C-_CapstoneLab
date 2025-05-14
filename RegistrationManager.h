/*
	Ayala, Ruben

	Spring 2025
	CS A250 - C++ 2

	RegistrationManager.h
*/

#ifndef REGISTRATIONMANAGER_H
#define REGISTRATIONMANAGER_H

#include <map>
#include <set>
#include <algorithm>

class RegistrationManager
{
public:
    RegistrationManager(WorkshopList workshopList,
                        ParticipantList participantList);

    void addOpenWorkshop(int workshopNo);
    void registerParticipant(int workshopNo, int participantID);
    void unregisterParticipant(int workshopNo, int participantID);
    void closeWorkshop(int workshopNo);
    void reopenWorkshop(int workshopNo);
    bool isOpen(int workshopNo) const;
    const set<int>& getOpenWorkshops() const;

private:
    map<int, set<int>> registration;
    set<int> openWorkshops;
    const WorkshopList& workshopList;
    ParticipantList& participantList;
};

#endif
