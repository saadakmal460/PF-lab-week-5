#include <iostream>
#include <cmath>

using namespace std;


float quadraticPlus(int number1 , int number2 ,int number3);
float quadraticMinus(int number1 , int number2 ,int number3);

main(){



int number1 ; 
int number2 ;
int number3;
float x1 , x2 ;


  cout << "Enter value of a: " ;
  cin >> number1;

   cout << "Enter value of b: " ;
  cin >> number2;

  cout << "Enter value of c: " ;
 cin >> number3;



 x1 = quadraticPlus(number1 , number2 ,number3);
 cout << "The value of x is: " << x1 <<endl;

 x2 = quadraticMinus(number1 , number2 , number3);
 cout << "The value of x is: " << x2 <<endl;






}














float quadraticPlus(int number1 , int number2 ,int number3)
{   


  int square = pow(number2 , 2);
  
  int product = 4*(number1 * number3);
 
  int subtract = square - product; 
 
  float root = sqrt(subtract);

  float add = (-number2) + root;

  float divide = add / (2 *number1);


 return divide ;
 

}
 
  

 float quadraticMinus(int number1 , int number2 ,int number3)
{   

    
  int square = pow(number2 , 2);
  
  int product = 4*(number1 * number3);
 
  int subtract = square - product; 
 
  float root = sqrt(subtract);

  float add = (-number2) - root;

  float divide = add / (2 *number1);


 return divide ;
 

}