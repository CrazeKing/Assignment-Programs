#include <iostream>  
using namespace std; 

int main()  
{  
    int a=20, b=5;      
    cout << "Before swap A = "<<a<<" and B = "<< b << endl;

    a=a*b; //a = 100 (20*5)    
    b=a/b; //b = 20 (100/5)    
    a=a/b; //a = 5 (100/20)    
    
    cout<<"After swap A = "<<a<<" and B = "<<b<<endl;      
    return 0;  
}