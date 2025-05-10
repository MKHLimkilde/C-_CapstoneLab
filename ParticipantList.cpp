/*
    Ayala, Ruben

    Spring 2025
    CS A250 - C++ 2
    ParticipantList.cpp
*/

#include "ParticipantList.h"

void ParticipantList::addParticipant(const Participant& participant)
{
	participantMap[participant] = {};
}

void ParticipantList::addWorkshopToParticipant(const Participant& participant, const Workshop& workshop)
{
	participantMap[participant].push_back(workshop); 
}

int ParticipantList::getID(const Participant& participant) const
{
	return participant.id;
}

std::string ParticipantList::getFirstName(int participantID) const
{
	for (const auto& [participant, workshops] : participantList)
	{
		if (participant.id == participantID)
		{
			return participant.firstName;
		}
	}
}

std::string ParticipantList::getLastName(int participantID) const
{
	for (const auto& [participant, workshops] : participantList)
	{
		if (participant.id == participantID)
		{
			return participant.lastName;
		}
	}
}

std::vector<Workshop> ParticipantList::getWorkshops(int participantID) const
{
	for (const auto& [participant, workshops] : participantList)
	{
		if (participant.id == participantID)
		{
			return workshops;
		}
	}
}

void clearList()
{
	participantList.clear();
}


std::map<Participant, std::vector<Workshop>>::const_iterator ParticipantList::findByID(int participantID) const
{
	for (auto mapIt = participantList.begin(); it != participantList.end(); ++mapIt)
	{
		if (mapIt->first.id == participantID)
		{
			return mapIt;
		}
	}
}
