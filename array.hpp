/*
* Created by: Tyler Potochnik
* Last updated 6:55p.m. 2/5/2015
* Array Implemtation
*/
#ifndef ARRAY_HPP
#define ARRAY_HPP

class cityArray{
private:
	struct cityArr{
		std::string city;
		double x, y;
	};
	cityArr Array[1000];

public:
	cityArray();

	void addCity();
	void delCity(std::string);
	void delCity(double, double);
	void searchArr(std::string); 
	void searchArr(double,double); 
	void printArr();
	void distanceArr();
	~cityArray();

};

#endif