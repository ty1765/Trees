/*
* Created by: Tyler Potochnik
* Last updated 6:55p.m. 2/5/2015
* Main
*/
#include <iostream>

#include "list.hpp"
#include "array.hpp"

int main(){
	int a; // used to nav menu
	char b; // used to nave menu
	std::string s; // used to enter name of city
	double x, y; // used to enter coords
	cityList List;
	cityArray Arr;

	while(a != 8){
		std::cout << "\n\nImplementation Options: \n";
		std::cout << "A. Use an array-based list implementation\n";
		std::cout << "B. Use a linked-list implementation\n\n";
		std::cout << "Operation Options\n";
		std::cout << "1. Insert a record\n";
		std::cout << "2. Search for a record by name\n";
		std::cout << "3. Search for a record by coordnate\n";
		std::cout << "4. Delete a record by name\n";
		std::cout << "5. Delete a record by coordinate\n";
		std::cout << "6. Print records within a given distance of a specified location\n";
		std::cout << "7. Print all records\n";
		std::cout << "8. Exit\n\n";
		std::cout << "Enter your implementation option: ";
		std::cin >> b;
		std::cout << "Enter your operation option: ";
		std::cin >> a;
		std::cin.clear(); 
		std::cin.ignore(10000,'\n');
		if((b == 'A' || b == 'a') && a != 8){

			if(a == 1){
				Arr.addCity();
			}
			else if(a == 2){
				std::cout << "Enter name of the city to be searched: ";
				std::getline(std::cin, s);
				Arr.searchArr(s);
			}
			else if(a == 3){
				std::cout << "Enter coordinate to be searched: ";
				std::cout << "Enter latitude: ";
				std::cin >> x;
				std::cout << "Enter longitude: ";
				std::cin >> y;
				Arr.searchArr(x, y);
			}
			else if(a == 4){
				std::cout << "Enter name of the city to be deleted: ";
				std::getline(std::cin, s);
				Arr.delCity(s);
			}
			else if(a == 5){
				std::cout << "Enter coordinate to be deleted: ";
				std::cout << "Enter latitude: ";
				std::cin >> x;
				std::cout << "Enter longitude: ";
				std::cin >> y;
				Arr.delCity(x, y);
			}
			else if(a == 6){
				Arr.distanceArr();
			}
			else if(a == 7){
				Arr.printArr();
			}
			else{
				std::cout << "should never happen\n";
			}

		}
		else if((b == 'B' || b == 'b') && a != 8){

			if(a == 1){
				List.addNode();
			}
			else if(a == 2){
				std::cout << "Enter name of the city to be searched: ";
				std::getline(std::cin, s);
				List.search(s);
			}
			else if(a == 3){
				std::cout << "Enter coordinate to be searched: ";
				std::cout << "Enter latitude: ";
				std::cin >> x;
				std::cout << "Enter longitude: ";
				std::cin >> y;
				List.search(x, y);
			}
			else if(a == 4){
				std::cout << "Enter name of the city to be deleted: ";
				std::getline(std::cin, s);
				List.delNode(s);
			}
			else if(a == 5){
				std::cout << "Enter coordinate to be deleted: ";
				std::cout << "Enter latitude: ";
				std::cin >> x;
				std::cout << "Enter longitude: ";
				std::cin >> y;
				List.delNode(x, y);
			}
			else if(a == 6){
				List.distanceFind();
			}
			else if(a == 7){
				List.printList();
			}
			else{
				std::cout << "should never happen\n";
			}

		}
		else if(a != 8){
			std::cout << "**!!Please enter a proper implementation option!!**\n\n";
		}

	}
	return 0;
}
