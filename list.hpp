/*
* Created by: Tyler Potochnik
* Last updated 6:55p.m. 2/5/2015
* List Implemtation
*/
#ifndef LIST_HPP
#define LIST_HPP

class cityList{
private:

	struct node{
		std::string cityName;
		double x; //x coordinate
		double y; // y coordinate
		node* next;
	};

	typedef struct node* nodePtr;

	nodePtr head;
	nodePtr current;
	nodePtr temp;

public:
	cityList();

	void addNode(); //adds a city to the database
	void delNode(std::string); //deletes city by name
	void delNode(double, double); //deletes city by coords
	void search(std::string); // search by city name
	void search(double,double); // search by coords
	void printList();
	void distanceFind();
	~cityList();

};

#endif