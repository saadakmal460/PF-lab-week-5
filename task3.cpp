#include <iostream>
using namespace std;




 bool isSymmetrical(int num);



main(){

 int num;
 

 cout << "Enter three digit number: ";
 cin >> num;


 int result = isSymmetrical(num);



}




bool isSymmetrical(int num) {
  
  int lastDigit = num % 10;
  int firstDigit = num / 100;

  if (firstDigit == lastDigit) {
    cout << "The number is symmetrical" <<endl;
    return true;
  }


 if (firstDigit != lastDigit){
    
    cout << "The number is symmetrical" <<endl;
    return false;
  


}




}











