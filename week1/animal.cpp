/*---------------------------------------------------------
 * Author: Vincent Lee
 * Date: 4/1/2015
 * Description: This program prompts the user for
 * their favorite animal and stores the result in a C++
 * style string variable called faveAnimal. The variable
 * is then displayed on the console.
 * -------------------------------------------------------
 */




#include <iostream>
#include <string>

//a simple example program 
int main() {
	std::string faveAnimal;
	std::cout << "Please enter your favorite animal." << std::endl;
	std::cin >> faveAnimal;
	std::cout << "Your favorite animal is the " << faveAnimal;
	std::cout << "." << std::endl;

	return 0;
}




