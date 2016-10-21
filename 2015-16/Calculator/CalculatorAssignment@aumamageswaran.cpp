/* Akul Umamageswaran
    SRMS Programming Club: Calculator Assignment
    Four-function calculator (+, -, *, /). Can also find area of triangle and area/circumference of circle.
    4/5/16 */
    
#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    float firstVal;
    cout<<"Please enter first value. "<<"\n";
    cin>>firstVal;
    float secondVal;
    cout<<"Please enter second value."<<"\n";
    cin>>secondVal;
    float triangleBase;
    cout<<"Please enter triangle base."<<"\n";
    cin>>triangleBase;
    float triangleHeight;
    cout<<"Please enter triangle height."<<"\n";
    cin>>triangleHeight;
    float circleRadius;
    cout<<"Please enter circle radius value."<<"\n";
    cin>>circleRadius;
    float pi = 4.0 * atan(1.0);
    string operation;
    cout<<"Please enter 'add' for addition, 'sub' for subtraction, 'mult' for multiplication, 'div' for division, 'tri' for triangle area calcualation, and 'circle' for circle circumference and area calculation."<<"\n";
    cin>>operation;
    
    
    float additionResult = firstVal + secondVal;
    float subtractionResult = firstVal - secondVal;
    float multiplicationResult = firstVal * secondVal;
    float divisionResult = firstVal / secondVal;
    
    float triangleArea = 0.5 * triangleBase * triangleHeight;
    float circleCircumference = 2 * pi * circleRadius;
    float circleArea = pi * circleRadius * circleRadius;
    
    if (operation == "add") {
        cout<<"Addition Result: "<<additionResult<<"\n";
    }
    else if (operation == "sub") {
        cout<<"Subtraction Result: "<<subtractionResult<<"\n";
    }
    else if (operation == "mult") {
        cout<<"Multiplication Result: "<<multiplicationResult<<"\n";
    }
    else if (operation == "div") {
        cout<<"Division Result: "<<divisionResult<<"\n";
    }
    else if (operation == "tri") {
        cout<<"Triangle Area: "<<triangleArea<<"\n";
    }
    else if (operation == "circle") {
        cout<<"Circle Circumference: "<<circleCircumference<<"\n";
        cout<<"Circle Area: "<<circleArea<<"\n";
    }
    return 0;
}
