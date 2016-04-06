#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    float firstNum;
    cout << "Please Input the First Number: ";
    cin >> firstNum;
    float secondNum;
    cout << "Please Input the Second Number: ";
    cin >> secondNum;
    float triBase;
    cout << "Please Input the Triangle's Base Length: ";
    cin >> triBase;
    float triHeight;
    cout << "Please Input the Triangle's Height: ";
    cin >> triHeight;
    float radius;
    cout << "Please Input the Circle's Radius: ";
    cin >> radius;
    string operation;
    cout << "Please Input Operation. Say add for addition, subtract for subtraction, multiply for multiplication, divide for division, triangle for triangle area, circle for circle area and circumference, and all for all operations: ";
    cin >> operation;
    float pi = 3.14159265358979323;
    
    system("cls");
    
    if ( operation == "add" )
    {
        cout << firstNum + secondNum;
    }
    if ( operation == "subtract" )
    {
        cout << firstNum - secondNum;
    }
    if ( operation == "multiply" )
    {
        cout << firstNum * secondNum;
    }
    if ( operation == "divide" )
    {
        cout << firstNum / secondNum;
    }
    if ( operation == "triangle" )
    {
        cout << triBase * triHeight / 2;
    }
    if ( operation == "circle" )
    {
        cout << ( radius * radius ) * pi << "\n";
        cout << ( radius * 2 ) * pi;
    }
    if ( operation == "all" )
    {
        cout << "Addition: " << firstNum + secondNum << "\n";
        cout << "Subtraction: " << firstNum - secondNum << "\n";
        cout << "Multiplication: " << firstNum * secondNum << "\n";
        cout << "Division: " << firstNum / secondNum << "\n";
        cout << "Triangle Area: " << triBase * triHeight / 2 << "\n";
        cout << "Circle Area: " << ( radius * radius ) * pi << "\n";
        cout << "Circle Circumference: " << ( radius * 2 ) * pi;
    }
        
    return 0;
}
