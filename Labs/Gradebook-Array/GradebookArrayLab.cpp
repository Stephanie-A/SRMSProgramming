/* Akul Umamageswaran
    SRMS Programming Club: Gradebook Array Lab
    Calculates a student's average grades based on seven inputted grades.
    5/17/16 */

#include <iostream>
using namespace std;

int main() {
  int gradebook[7] = {100};
  int sum = 0;
  for (int i = 1; i < 8; i++) {
    cout << "Enter grade for assignment number " << i << ":" << "\n";
    cin >> gradebook[i-1];
    sum += gradebook[i-1];
  }
  
  int average = sum / 7;
  cout << "The student's average is: " << average << ".";
  
  return 0;
}
