#include <iostream>
using namespace std;

int main()
{
    int first, second;
    float divide;
    
    cout << "Please enter two integer: ";
    cin >> first;
    cin >> second;
    
    divide = first / (float)second;   //typecasting
    
    cout << endl <<"Division = " << divide; 
    
    return 0;
}
