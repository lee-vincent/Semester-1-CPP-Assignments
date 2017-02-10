/*---------------------------------------------------
 * Author: Vincent Lee
 * Date: 4/7/2015
 * File: tempConvert.cpp
 * Description: This program prompts the user to 
 * enter a temperature in degrees celsius. The
 * temperature is converted to degrees farenheit
 * and logged to the console.
 * -------------------------------------------------
 */


#include <iostream>

/* Function Prototype */

double convertToFarenheit(double celsius);

/* Main Program */

int main() {

	double tempCelsius;
	double tempFarenheit;
 
	std::cout << "Please enter a Celsius temperature.\n";
	std::cin >> tempCelsius;
	tempFarenheit = convertToFarenheit(tempCelsius);
	std::cout << tempFarenheit << std::endl;

	return 0;  
}

/*
 * Function: convertToFarenheit(temp)
 * Usage: double farenheit = convertToFarenheit(temp);
 * ----------------------------------------------------
 *  Returns the farenheit equivalent of a temperature celsius.
 */   

double convertToFarenheit(double celsius) {
	return 9.0 / 5.0 * celsius + 32;
}	









