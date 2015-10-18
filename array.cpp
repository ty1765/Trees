/*
* Created by: Tyler Potochnik
* Last updated 6:55p.m. 2/5/2015
* Array Implemtation
*/
#include <iostream>
#include <cmath>

#include "array.hpp"

cityArray::cityArray(){
	for(int i = 0; i < 1000; i++){
		Array[i].city = "NULL";
		Array[i].x = 0;
		Array[i].y = 0;
	}
}
void cityArray::addCity(){
	double a;
	double b;
	std::string c;
	int i = 0;

	std::cout << "Enter City Name: ";
	std::getline(std::cin, c);
	std::cout << "Enter longitude: ";
	std::cin >> a;
	std::cout << "Enter Latidude: ";
	std::cin >> b;
	if(Array[i].city != "NULL"){
		while(Array[i].city != "NULL"){
			i++;
		}
		Array[i].city = c;
		Array[i].x = a;
		Array[i].y = b;
	}
	else{
		Array[i].city = c;
		Array[i].x = a;
		Array[i].y = b;
	}
	std::cout << "Record inserted successfully\n";
}
void cityArray::delCity(std::string s){
	int i = 0;
	while(Array[i].city != "NULL" && Array[i].city != s){
		i++;
	}
	if(Array[i].city == "NULL"){
		std::cout << "No such record exists in the existing data set.\n";
		return;
	}
	else{
		while(Array[i].city != "NULL"){ //continues from where it found entry and moves all up 1
			Array[i].city = Array[i+1].city;
			Array[i].x = Array[i+1].x;
			Array[i].y = Array[i+1].y;
		}
	}
	std::cout << "Deleted successfully\n";
}
void cityArray::delCity(double a, double b){
	int i = 0;
	while(Array[i].city != "NULL" && Array[i].x != a && Array[i].y != b){
		i++;
	}
	if(Array[i].city == "NULL"){
		std::cout << "No such record exists in the existing data set.\n";
		return;
	}
	else{
		while(Array[i].city != "NULL"){
			Array[i].city = Array[i+1].city;
			Array[i].x = Array[i+1].x;
			Array[i].y = Array[i+1].y;
		}
	}
	std::cout << "Deleted successfully\n";
}
void cityArray::searchArr(std::string s){
	int i = 0;
	while(Array[i].city != s && Array[i].city != "NULL"){
		i++;
	}
	if(Array[i].city == "NULL"){
		std::cout << "No such record exists in the existing data set.\n";
	}
	else{
		std::cout << Array[i].city << ",  (" << Array[i].x << ", " << Array[i].y << ")\n";
	}

}
void cityArray::cityArray::searchArr(double a,double b){
	int i = 0;
	while(Array[i].x != a && Array[i].y != b && Array[i].city != "NULL"){
		i++;
	}
	if(Array[i].city == "NULL"){
		std::cout << "No such record exists in the existing data set.\n";
	}
	else{
		std::cout << Array[i].city << ",  (" << Array[i].x << ", " << Array[i].y << ")\n";
	}

}
void cityArray::printArr(){
	int i = 0;
	if(Array[i].city != "NULL"){
		while(Array[i].city != "NULL"){
			std::cout << Array[i].city << ",  (" << Array[i].x << ", " << Array[i].y << ")\n";
			i++;
		}
	}
	else{
		std::cout << "Array is empty\n";
	}		
}
void cityArray::distanceArr(){
	double e, a, b;
	double r = 3963.191;
	double d;
	double PI = 3.1415;
	double distance;
	int i = 0;
	int check = 0; //checks if any citys were printed
	std::string c;

	std::cout << "Enter name of the specfied location: ";
	std::getline(std::cin, c);
	std::cout << "Enter distance: ";
	std::cin >> d;

	if(Array[i].city == "NULL"){
			std::cout << "No such record exists in the existing data set.\n";
			return;
		}
	else{
		while(Array[i].city != "NULL" && Array[i].city != c){
			i++;
		}
		if(Array[i].city == "NULL"){
			std::cout << "No such record exists in the existing data set.\n";
			return;
		}
		else{
			a = Array[i].x;
			b = Array[i].y;
			i = 0;
			while(Array[i].city != "NULL"){
			e = std::acos(std::sin((a*PI)/180) * std::sin((Array[i].x*PI)/180) + std::cos((a*PI)/180)\
				* std::cos((Array[i].x*PI)/180) * std::cos(((Array[i].y*PI)/180) - ((b*PI)/180)));
			distance = e * r;
			if(distance > 0 && distance <= d){
				std::cout << Array[i].city << ",  (" << Array[i].x << ", ";
				std::cout << Array[i].y << ")\n";
				check++;
			}
			i++;
		}
		if(check == 0){
			std::cout << "No such record exists in the existing data set.\n";
		}
		}
	}
}

cityArray::~cityArray(){
	//delete Array;
}