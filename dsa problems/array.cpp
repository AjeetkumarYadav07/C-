# include <iostream>
# include <climits>
using namespace std ;

int main ()
{
    /* int student [4]  ;  without values   */ 

   /*  With values intilize 

    int marks [5] = { 34, 34, 54, 53, 34 };

   cout << marks[3] ; */


  /* Print the values using  of loop 
    
    int marks [5] = { 34 ,34 , 43,24,34};
   int size = 5;
   for(int i = 0; i<size ; i++){
    cout << marks[i] << " ";
   }
*/

/* creat array with inout form user */



/*      int size = 4;
    int marks[4];

    // Input values
    for (int i = 0; i < size; i++) {
        cin >> marks[i];
    }

    // Output values
    for (int i = 0; i < size; i++) {
        cout << marks[i] << endl;
    }  
    */


  /*  
     <<< find the smalest number in given array

 

int num [] = { 23 , -34 , 3 , 3, -3} ;
int size = 4 ;

int smallest = INT_MAX ;
 
 for(int i =0 ; i<size ; i++){
    if(num[i] < smallest){
        smallest = num[i];
    }
 }

 cout << "smaleest number is " << smallest <<endl;

 */


/*  Print the Largest tern in Array */

   int numb []={ 5 , 1 , 24 , 15, -34, -15, };
int size = 5;
int largest =  INT_MIN;
int index = -1 ;


for(int  i = 0 ; i<size ; i++){
    if(numb[i] >largest){
        largest = numb[i];
        index = i ;
    }

    // largest = max(numb[i] , largest) ;
}
  cout << "The largest num is " << largest << " at the index " << index << endl ;

 



    return 0;

    
}