/*----------------------------------------------------------------------
 * File: hailstone.cpp
 * Author: Vincent Lee
 * Date: 4/22/2015
 * Description: This file contains the hailstone sequence
 * function that accepts an integer to start the sequence and
 * returns the steps needed to reach 1.
 *----------------------------------------------------------------------
*/

int hailstone(int num) {
	int steps = 0;

	while(num != 1) {
	
		if(num % 2 == 0) {
			num /= 2;
		} else {
			num = (num * 3) + 1;
		}
	
		steps++;
	}

	return steps;
}








