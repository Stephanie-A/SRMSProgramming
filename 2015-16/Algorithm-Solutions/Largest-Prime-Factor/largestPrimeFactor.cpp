/*Soumya Vavilala
5/10/16
This program is meant to find the largest prime factor of the number 600851475143.*/

#include <iostream>
#include <cstdint>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ();

uint64_t num = 600851475143;
int count;
for (int i = num/2; i >= 2; i--) {
	if (num % i == 0) {
		for (int a = 2; a <= i/2; a++) {
			if (i % a == 0) {
				break; }
			if (i % a != 0) {
				continue; 
				a = count;}
}
}
}
    int largestFactor = count;
	cout<<"The largest prime factor of the given number is " largestFactor ".";
	
	/*When entered into cpp.sh, I seem to get an error with my first for statements and cout statement. The program says: 14:1: error: expected unqualified-id before 'for'
14:21: error: 'i' does not name a type
14:29: error: 'i' does not name a type
26:2: error: 'cout' does not name a type
 */
	

