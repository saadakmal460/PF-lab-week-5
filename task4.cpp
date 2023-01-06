#include <iostream>
using namespace std;




int oddish(int number , int total);

main(){


 int number , result ,total;

 cout << "Enter number: ";
 cin >> number;

 result =  oddish(number , total);
 
 if(result % 2 == 0){



 cout << "The  number is evenish";




}

if(result % 2 != 0){



cout << "The number is oddish";




}

 




}












 int oddish(int number , int total){

 
  int rem = number % 10;
 
  int div = number / 10;
  int rem2 = div % 10;
 
  int div2 = div / 10;
  int rem3 = div2 % 10;

  int div3 = div2 / 10;
  int rem4 = div3 % 10;
 
  int rem5 = div3 / 10;
 
  

  total = rem + rem2 + rem3 + rem4 + rem5;
 
  return total;

  




}