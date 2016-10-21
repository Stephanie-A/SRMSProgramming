/* Akul Umamageswaran
    SRMS Programming Club: Project Euler Problem 2 - Solution Code
    Solution code to Project Euler Problem 2. Finds the sum of all even values of the Fibonacci sequence up to 4,000,000.
    4/13/16 */

#include <iostream>
using namespace std;

int main() {
    int fib1 = 0;
    int fib2 = 1;
    int sum = 0;
    
    while (fib1 <= 4000000) {
        fib1 += fib2;
        if (fib1 % 2 == 0) {
            sum += fib1;    
        }
        fib2 += fib1;
        if (fib2 % 2 == 0) {
            sum += fib2;
        }
    }
    cout<<sum;
    return 0;
}
