#include <iostream>
#include <string>

using namespace std;
/*  <<<< Square pattern

 Easy with number   n =4  */

/**
  1   2   3   4
  1   2   3   4
  1   2   3   4
  1   2   3   4

     **/
int main()
{

    // int n =4 ;

    //     for (int i = 0 ; i < n ; i++){

    //           for (int j = 1 ;  j < n ; j++){

    //             cout << "*" << " " ;
    //           }

    //           cout << endl ;
    //     }

    //   int n = 3 ;
    //   char cha = 'A' ;
    //   for ( int a = 0; a <n ; a++){
    //     for (int m = 0 ; m <n ; m++){
    //         cout << cha << " ";
    //          cha++  ;

    //     }
    //       cout << endl ;
    //   }

    /* <<    Tringle Pattern   int n = 4 ;
    for (int star = 0 ; star <=n ; star++){
    for( int str2 = 0 ; str2 < star ; str2 ++ ){

          cout << star;

        }

          cout << endl ;
         }    */

    // int n = 4 ;
    // for ( int num = 0 ; num <n ; num++){
    //     for (int j = 0 ; j <num+1 ;  j++){
    //         cout << num+1 ;

    //     }

    //  cout << endl ;
    // }

    // int n = 4 ;
    // for (int i = 0 ; i <n ; i++){
    //     for (int j = 1 ; j <= i+1 ; j++){
    //         cout << j ;
    //     }
    //     cout << endl ;
    // }





/*   <<< reverse Triangle Pattern 
     
     question   1
               21
               321
               4321


    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }  
     */
//   int n = 4 ;

//    for(int i = 1 ; i<=n ; i++){
    
//     for(int j=  1 ; j<=n ; j++){
//         cout << j ; 
//     }
//      cout << endl ;

int n = 4 ;

 for( int i = 0; i <n ; i++){
     char ch = 'A' ;
     for( int j = 0 ; j <n ; j++){
        cout << ch ;
       ch = ch +1 ;
     }
    cout << endl ;
 }


// int n = 3 ;
// int num = 1 ;
// for(int i = 0 ; i<n ; i ++){

//     for(int j = 0 ; j<n ; j++){
//           cout << num ;
//           num++ ;

        
//     }
    
//     cout << endl ;
   
// }


    return 0;
}
