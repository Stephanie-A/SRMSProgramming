/* Akul Umamageswaran
    SRMS Programming Club: Project Euler Problem 3 - Solution Code
    Solution code to Project Euler Problem 3. Finds the largest prime factor of a number.
    5/4/16 */

#include <iostream>
using namespace std;

int main() {
    long long num;
    long long largest = 0;
    
    cin >> num;
    int halfNum = num / 2;
    
    for (int i = 2; i <= halfNum; i++) {
        bool isPrime = true;
        if (num % i == 0) {
            for (int a = 2; a <= i-1; a++) {
                if (i % a != 0) {
                    continue;
                }
                else {
                    isPrime = false;
                    break;    
                }    
            }
            if (isPrime && i > largest) {
                largest = i;
            }
        }
    }
    
    cout << largest;
    
    return 0;
}
