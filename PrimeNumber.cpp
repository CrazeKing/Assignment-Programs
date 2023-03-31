#include <iostream>
using namespace std;

int main() 
{
    int num;
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> num;

    //Checking if number is negative
    if (num <= 1)
    {
        isPrime = false;
    }
  
    //For loop for checking if number is prime or not
    for (int i = 2; i*i <= num; ++i) 
    {
        if (num % i == 0) 
        {
            //Set isPrime as false then else statement will be printed
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << num << " is a Prime Number";   
    }
    else
    {
        cout << num << " is Not a Prime Number";
    }
    return 0;
}
