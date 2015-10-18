/*
* Created by: Tyler Potochnik
* Last updated 6:55p.m. 2/5/2015
* List Implemtation
*/
#include <iostream>
#include <cmath>

#include "list.hpp"

cityList::cityList(){
	head = NULL;
	current = NULL;
	temp = NULL;
}

void cityList::addNode(){
	double a;
	double b;
	std::string c;

	nodePtr n = new node;
	n->next = NULL;
	std::cout << "Enter City Name: ";
	std::getline(std::cin, c);
	n->cityName = c;
	std::cout << "Enter longitude: ";
	std::cin >> a;
	std::cout << "Enter Latidude: ";
	std::cin >> b;
	n->x = a;
	n->y = b;

	if(head != NULL){
		current = head;
		while(current->next != NULL){

			if(current->cityName == c){
				std::cout << "No need to insert again, as this\n";
				return;
			}

			current = current->next;
		}
		current->next = n;
	}

	else{
		head = n;
	}

	std::cout << "Record inserted successfully\n"; 
}

void cityList::delNode(std::string c){
	nodePtr n = NULL;
	temp = head;
	current = head;
	while(current != NULL && current->cityName != c){
		temp = current;
		current = current->next;
	}

	if(current == NULL){
		std::cout << "No such record exists in the existing data set\n";
		delete n;
	}

	else{
		n = current;
		current = current->next;
		temp->next = current;
		if(n == head){
			head = head->next;
			temp = NULL;
		}
		delete n;
		std::cout << "Deleted successfully\n";
	}
}

void cityList::delNode(double a, double b){
	nodePtr n = NULL;
	temp = head;
	current = head;
	while(current != NULL && current->x != a && current->y != b){
		temp = current;
		current = current->next;
	}

	if(current == NULL){
		std::cout << "No such record exists in the existing data set\n";
		delete n;
	}
	else{
		n = current;
		current = current->next;
		temp->next = current;
		if(n == head){
			head = head->next;
			temp = NULL;
		}
		delete n;
		std::cout << "Deleted successfully\n";
	}
}

void cityList::search(std::string s){
	if(head == NULL){
		std::cout << "List is empty\n";
	}
	else{
		current = head;
		while(current != NULL && current->cityName != s){
			current = current->next;
		}
		if(current == NULL){
			std::cout << "No such record exists in the existing data set.\n";
		}
		else{
			std::cout << current->cityName << ",  (" << current->x << ", ";
			std::cout << current->y << ")\n"; 
		}
	}
}

void cityList::search(double a, double b){
	if(head == NULL){
		std::cout << "List is empty\n";
	}
	else{
		current = head;
		while(current != NULL && current->x != a && current->y != b){
			current = current->next;
		}
		if(current == NULL){
			std::cout << "No such record exists in the existing data set.\n";
		}
		else{
			std::cout << current->cityName << ",  (" << current->x << ", ";
			std::cout << current->y << ")\n"; 
		}
	}
}

void cityList::printList(){
	if(head == NULL){
		std::cout << "List is empty\n";
	}
	else{
		current = head;
		while(current != NULL){
			std::cout << current->cityName << ",  (" << current->x << ", ";
			std::cout << current->y << ")\n";
			current = current->next;
		}
	}
}

void cityList::distanceFind(){
	double e, a, b;
	double r = 3963.191;
	double d;
	double PI = 3.1415;
	double distance;
	int check = 0; //checks if any citys were printed
	std::string c;

	std::cout << "Enter name of the specfied location: ";
	std::getline(std::cin, c);
	std::cout << "Enter distance: ";
	std::cin >> d;

	current = head;
	while(current != NULL && current->cityName != c){
		current = current->next;
	}
	if(current == NULL){
		std::cout << "No such record exists in the existing data set.\n";
		return;
	}
	else{
		a = current->x;
		b = current->y;
		current = head;
		while(current != NULL){
			e = std::acos(std::sin((a*PI)/180) * std::sin((current->x*PI)/180) + std::cos((a*PI)/180)\
				* std::cos((current->x*PI)/180) * std::cos(((current->y*PI)/180) - ((b*PI)/180)));
			distance = e * r;
			if(distance > 0 && distance <= d){
				std::cout << current->cityName << ",  (" << current->x << ", ";
				std::cout << current->y << ")\n";
				check++;
			}
			current = current->next;
		}
	}
	if(check == 0){
		std::cout << "No such record exists in the existing data set.\n";
	}
}

cityList::~cityList(){
	current = head;
	while(current != NULL){
		temp = current->next;
		delete current;
		current = temp;
	}
}
