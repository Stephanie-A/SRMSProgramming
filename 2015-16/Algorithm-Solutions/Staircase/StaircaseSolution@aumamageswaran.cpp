/* Akul Umamageswaran
    SRMS Programming Club: HackerRank Staircase Problem - Solution Code
    Solution to HackerRank Staircase Problem. Prints a staircase of height N that consists of spaces and # signs.
    5/1/16 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = n-1; i >= 0; i--) {
        for (int a = i; a > 0; a--) {
            cout << " ";
        }
        for (int b = 0; b < n-i; b++) {
            cout << "#";
        }
        cout << "\n";
    }
    return 0;
}
