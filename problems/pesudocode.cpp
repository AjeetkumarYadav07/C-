# include <iostream>
# include <string>

using namespace std ;

 int inputFun ( int p , int i , int t){
     return p*i*t/100;

 }
int  main (){
   int a , b ,c ;

   cout<<"Enter the Principal Amount"<<endl;
   cin >> a ;
   cout<<"Enter the Intrest Amount" <<endl;
    cin >> b ;
   cout<<"Enter the Time Amount" <<endl;
    cin >> c;

    cout << "The total intrest is = "<< inputFun( a , b , c) <<endl;

    return 0;

}