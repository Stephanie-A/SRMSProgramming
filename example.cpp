/* Stephanie Almeida
    Example Program 
    Shows basic elements of C++, will be edited as more and more lessons pass by
    4/3/16 */

#include <iostream>                                                         //Including necessary libraries and namespace std
using namespace std;

int sum(int, float);                                                        //function definition

int main() {                                                                //main function

  int num1 = 5;                                                             //declaring an int variable
  float dec1 = 0.5;                                                         //declaring a float variable
  int arr1[5] = 0;                                                          //declaring array of ints with length 5, inital = 0
  int arr2[] = {0, 1, 2, 3, 4};                                             //declaring array and initializing the ints

  cout << "Hello World!" << endl;                                           //output statement
  cout << num1 * dec1 << endl;                                              //output 2.5
  
  cout << "Please enter num1: ";
  cin >> num1;                                                              //input num1
  cout << "Please enter dec1: ";
  cin >> dec1;                                                              //input dec1
  
  cout << num1 + dec1 << endl;                                              //output whatever num1 + dec1 is equal to
  
  if (num1 > 1) {
      cout << "Num1 is greater than 1!" << endl;                            //if statement
  }
  
  for (int i = 0; i < num1; i++) {
      cout << i << " ";                                                     //for loop
  }
  
  cout << endl;
  
  while (dec1 == num1) {
      cout << "dec1 and num1 are the same!" << endl;                        //while loop
      num1++;                                                               //will only execute once since num1 changes
  }
  
  cout << sum(1, 5) << endl;                                                //calls function and outputs 6
  
  for (int i = 0; i < 5; i++)                                               //initializing arr1 with values from arr2
      arr1[i] = arr2[i];                            

return 0; }                                                                 //end of program

int sum (int a, float b) {                                                  //function itself
    return a + b;
}
