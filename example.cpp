#include <iostream>
using namespace std;


int addNumbers(int num1 , int num2);
float divide(int n1 , int n2);
int maximum(int number1 , int number2);

main(){
 
 int number1 , number2 , total, greater ;
 cout << "Enter first number: ";
 cin >> number1;
 
 cout << "Enter second number: ";
 cin >> number2;





total = addNumbers( number1 ,  number2);
cout << "Sum is: " <<total <<endl;

float answer = divide(number1 ,number2);
 cout << "Division is: " <<answer <<endl;



greater = maximum(number1 ,  number2);
cout << greater <<" is the greater number";


}




int addNumbers(int num1 , int num2){

  int result = num1 + num2;
  return result;


}



float divide(int n1 , int n2){



 float division= n2 / n1;
 return division;


}



int maximum(int number1 , int number2)
{

 if(number1 > number2)
{

  return number1;

}



 if(number2 > number1)
{

 return number2;
  

}


  return 0;


}
