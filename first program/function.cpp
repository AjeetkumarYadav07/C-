# include <iostream>

using namespace std;

// int   myFunction ( int a , int b){ 
//     //  cout << "hello  i'm c++ function" ;
//      sum a +b ;
//   }

//   int main (){
//     int num1 , int num2;
//     cout << "Enter the first number" << endl ;
//     cin>> num1 ;

//     cout << "Enter the second number" << endl ;
//     cin>> num2 ;


      
//      cout << "sum is :"<< myFunction(  num1 , num2) <<endl  ;
//     return 0;
//   }

// int square ( int num){
//      return num*num ;
// }
// int main (){
//     int num1 ;
//     cout <<"Enter your number"<< endl;
//    cin >> num1 ;

//     cout << " squre of number " << num1 << " is :" << square ( num1) ;
//    return 0;
// }


bool  isEven ( int numb){
    return numb % 2 == 0 ;
}

int main (){
    int number ;
    cout <<"Enter your number ";
    cin >>number ;

    if(isEven(number)){
        cout << "Given number is " << number << " is Even"  << endl;

    }

    else {
        cout << " Given number is " << number << " is Odd"  <<endl ;
    }




    return 0;
}


// #include <iostream>
// using namespace std;

// bool isEven(int num) {
//     return num % 2 == 0;
// }

// int main() {
//     cout << "6 is even: " << isEven(6) << endl; // Output: 6 is even: 1 (true)
//     cout << "5 is even: " << isEven(5) << endl; // Output: 5 is even: 0 (false)
//     return 0;
// }
