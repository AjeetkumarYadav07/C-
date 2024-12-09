# include <iostream>
# include <string>

using namespace std ;

//  int inputFun ( int p , int i , int t){
//      return p*i*t/100;

//  }
// int  main (){
//    int a , b ,c ;

//    cout<<"Enter the Principal Amount"<<endl;
//    cin >> a ;
//    cout<<"Enter the Intrest Amount" <<endl;
//     cin >> b ;
//    cout<<"Enter the Time Amount" <<endl;
//     cin >> c;

//     cout << "The total intrest is = "<< inputFun( a , b , c) <<endl;

//     return 0;

// }

// int maxFun ( int num1 , int num2){
//     return num1< num2 ;
// }


  /// <<***   Function for max number *** >>
// int main (){
//     int num1, num2 ;
//     cout <<"Enter the first number";
//     cin>> num1 ;


//     cout <<"Enter the first number";
//     cin>> num2 ;
//    if ( num1> num2)
//    {
//      cout << num1 << " is the max number";
//    }
//    else {
//     cout << num2 << "is the max number" ;
//    }
     
//   return 0;
// }

/// factor of n number 





#include <iostream>
using namespace std;

int main() {
    int num;
    int i;
    int factorial = 1;

    // Prompt user for input
    cout << "Enter the number: " << endl;
    cin >> num;

    // Check for negative input
    if (num < 0) {
        cout << "No factorial for negative numbers!" << endl;
        return 0; // Exit the program
    }

    // Initialize i to 1
    i = 1;

    cout << "Factorial Calculation: ";

    // Use a while loop for factorial calculation
    while (i <= num) {
        factorial *= i; // Multiply the current factorial value
        cout << i; // Print the current number
        if (i < num) {
            cout << " x "; // Print multiplication sign for intermediate steps
        }
        i++;
    }

    // Print the result
    cout << " = " << factorial << endl;

    return 0;
}

