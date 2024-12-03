#include <iostream>
using namespace std;

// int main() {
//     int n = 1;

//     // Loop to print the table of 3 up to 3 × 10
//     while (n <= 10) {
//         cout << "3 x " << n << " = " << n * 3 << "\n"; // Print the multiplication table
//         n++; // Increment n
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int num = 2; // Start from 2 (the first prime number)

    cout << "Prime numbers between 1 and 40 are:\n";

    while (num <= 40) {
      

        // Check if the number is divisible by any number other than 1 and itself
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
               
                break;
            }
        }

        // If the number is prime, print it
       

        num++; // Increment the number
    }

    return 0;
}
