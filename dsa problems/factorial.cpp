#include <iostream>
#include <string>
using namespace std;

/*
   Find the factorial of N nuber

*/

// int factorial ( int n ){

//     int fact = 1 ;
// }

 /*
 
 int nuSum(int n)
{
    int sum = 0;

    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

  */ 

  int factorial(int n)
    {
        int fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        return fact;
    }

int main()
{

/* cout << nuSum(7); */  

  cout << factorial(4);

    return 0;
}