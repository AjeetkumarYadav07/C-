# include <iostream>
# include <string>

using namespace std;

// int main (){
//     int  age;
   
//     cout << "Enter the your age" << endl;
//     cin >> age ;
//     if( age <=18 ){
//          cout << "you can't vote";
//     }
//     else {
//         cout << " you are able to give vote";
//     }
// }


  //  >>>>>  Grading system using if else >>>>//
 
   int main (){
     int marks ;

     cout << "Enter your marks";
     cin >> marks ;
     if( marks >100){
        cout << " invaild marks";
     }
      else if(marks >= 90){
         cout << " Gade A";
      }
      else if(marks >= 80){
         cout << " Gade B";
      }
      else if(marks >= 70){
         cout << " Gade C";
      }
      else if(marks >= 60){
         cout << " Gade D";
      }
      else if(marks >= 50){
         cout << " Gade E";
      }

      else {
        cout <<" you are fail";

      }

      return 0;
       

   }