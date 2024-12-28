# include <iostream>
using namespace std ;
 int leanerfunction  (int numb[] , int sz , int target){
    for(int i = 0 ; i <sz ; i++){
      if(numb[i] == target){
         return i ;
      }
    }

    return -1 ;
 }
int main (){
    
    int numb[] = { 4 , 2, 7, 8,1 , 5 } ;
    int sz = 7 ;
     int target = 4 ;


     cout<< leanerfunction(numb , sz , target)  <<endl;
    return 0 ;
}