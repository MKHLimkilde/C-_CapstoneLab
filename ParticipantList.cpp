#include "ParticipantList.h"

#include "Participant.h"
#include <iostream>
#include <vector> 

void addParticipant(Participant participant)
{
	participant.insert();
}

void addWorkshopToParticipant(Participant participant, Workshop workshop)
{
	participant.push_back(workshop); //Not correct 
}

int getID(Participant participant)
{
	return participant.id;
}

std::string getFirstName(int participantID)
{
	return participantID.first_name;
}

std::string getLastName(int participantID)
{
	return participantID.last_name;
}
vector<Workshop> getWorkshops(int participantID);
void clearList();

		findByID(int participantID) :
			map<Participant, vector<Workshop>>::const_iterator