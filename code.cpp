//Assignment12 

#include <iostream> 

using namespace std; 

//using for loop to find a factorial number
int main() {
    int number; 
    int factorial = 1;

    cout << "Enter a number: " << endl; 
    cin >> number; 

    for(int i = 1; i <= number; ++i){
        factorial *= i;
    cout << "The factorial of number " << number << " is " << factorial << endl; 
    }

    return 0; 
}
