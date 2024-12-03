# include <iostream>
 using namespace std ;

//  int main (){

//     int arr [5] = { 1 ,2 ,3,4,5};
     
//      for ( int i = 0; i < 5; i++)
//      {
//         cout << arr[i] << " " << endl ;
//      }
     

//     return 0;
//  }

 int main (){
    
    int num [7] = {1 ,9, 2, 5,6,3, 7  };
    int lastchild = num[0] ;
      for ( int i = 0; i<7; i++){
        if (num[i ] > lastchild)
        {
          lastchild = num[i]  ;
        }
        
      }

      cout << " the max number is " << lastchild << endl;
    return 0;
 }