#ifndef PARTICIPANTLIST_H
#define PARTICIPANTLIST_H
#include "Participant.h"
#include <iostream>
#include <vector> 
class ParticipantList
{
	public:

		void addParticipant(Participant participant);
		void addWorkshopToParticipant(Participant participant, Workshop workshop);
		int getID(Participant participant);
		std::string getFirstName(int participantID);
		std::string getLastName(int participantID);
		vector<Workshop> getWorkshops(int participantID);
		void clearList();

	private:
		
		findByID(int participantID) :
			map<Participant, vector<Workshop>>::const_iterator


};

#endif

