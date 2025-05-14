/*
    Ayala, Ruben

    Spring 2025
    CS A250 - C++ 2
    
    ParticipantList.h
*/

#ifndef PARTICIPANTLIST_H
#define PARTICIPANTLIST_H

#include <map>
#include <vector>
#include "Participant.h"
#include "Workshop.h"

class ParticipantList
{
public:
    void addParticipant(const Participant& participant);
    void addWorkshopToParticipant(const Participant& participant, const Workshop& workshop);

    int getID(const Participant& participant) const;
    std::string getFirstName(int participantID) const;
    std::string getLastName(int participantID) const;
    std::vector<Workshop> getWorkshops(int participantID) const;
    const Participant& getParticipant(int participantID) const; // new funciton for part B
    void cancelWorkshop(int participantID, int workshopNo); // new function for part B

    bool isEmpty() const;
    void clearList();

private:
    std::map<Participant, std::vector<Workshop>> participantList;

    std::map<Participant, std::vector<Workshop>>::const_iterator findByID(int participantID) const;
};

#endif
