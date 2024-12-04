# include <iostream>
 using namespace std;

//   int inchanTocm ( int size){
//         return size*2.54 ;
//   }
//  int main (){
     
//      int input ;
//       cout<< "Enter the inch";
//       cin >> input;
       
//      cout << input <<" inches is = "  <<  inchanTocm(input)  << "cm" ; 

//     return 0;
//  }



 /// << Program for cellcies to fahrenhit >>>> 

 int cellciesTofahrenhit( int cellcies){
     return cellcies *9/5 +32 ;

 }
int main (){
    
    int data ;
    cout << "Enter the cellcies ";
    cin>> data;

    cout<< data << "is equal of = " << cellciesTofahrenhit(data)  << ".F";
    


    return 0;
}