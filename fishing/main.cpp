//
//  main.cpp
//  fishing
//
//  Created by Peter Mata on 10/6/16.
//  Copyright © 2016 Peter Mata. All rights reserved.
//


#include <iostream>
using namespace std;

 // look i changed some things. CRAZZYYYY.
class student
{
private:
    const int roll;
public:
    // constructor
    student(int r):roll(r) {}
 
    // A const function that changes roll with the help of const_cast
    void fun() const
    {
        ( const_cast <student*> (this) )->roll = 5;
    }
 
    int getRoll()  { return roll; }
};
 
int main(void)
{
    student s(3);
    cout << "Old roll number: " << s.getRoll() << endl;
 
    s.fun();
 
    cout << "New roll number: " << s.getRoll() << endl;
 
    return 0;
}