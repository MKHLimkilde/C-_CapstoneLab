/*
    Ayala, Ruben

    Spring 2025
    CS A250 - C++ 2

    ParticipantList.cpp
*/


#include "ParticipantList.h"
#include <algorithm> // for std::find_if

void ParticipantList::addParticipant(const Participant& participant)
{
    participantList.insert({ participant, {} });
}

void ParticipantList::addWorkshopToParticipant(const Participant& participant, const Workshop& workshop)
{
    participantList[participant].push_back(workshop);
}

int ParticipantList::getID(const Participant& participant) const
{
    return participant.getID();
}

std::string ParticipantList::getFirstName(int participantID) const
{
    auto it = findByID(participantID);
    return it->first.getFirstName();
}

std::string ParticipantList::getLastName(int participantID) const
{
    auto it = findByID(participantID);
    return it->first.getLastName();
}

std::vector<Workshop> ParticipantList::getWorkshops(int participantID) const
{
    auto it = findByID(participantID);
    return it->second;
}

bool ParticipantList::isEmpty() const
{
    return participantList.empty();
}

void ParticipantList::clearList()
{
    participantList.clear();
}

std::map<Participant, std::vector<Workshop>>::const_iterator
ParticipantList::findByID(int participantID) const
{
    return std::find_if(participantList.begin(), participantList.end(),
        [participantID](const std::pair<Participant, std::vector<Workshop>>& entry)
        {
            return entry.first.getID() == participantID;
        });
}

const Participant& ParticipantList::getParticipant(int participantID) const // new funciton for part B
{
    auto participantIt = findByID(participantID);
    return it->first;
}

void ParticipantList::cancelWorkshop(int participantID, int workshopNo) // new function for part B
{
    auto participantIt = findByID(participantID);

    auto& workshops = participantIt->second;

    auto workshopIt = std::remove_if(workshops.begin(), workshops.end(),
                        [workshopNo](const Workshop& workshop)
                        {
                            return workshop.getWorkshopNumber() == workshopNo;
                        }

    workshops.erase(workshopIt, workshops.end());
}
