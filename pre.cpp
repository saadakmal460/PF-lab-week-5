#include <iostream>
#include <cmath>

using namespace std;





main(){
 
 float number1 , number2 , greater , less ;
 float power , root , cubeRoot , roundOff;

 cout << "Enter first number: ";
 cin >> number1;
 
 cout << "Enter second number: ";
 cin >> number2;


 
 greater = max(number1 , number2);
 cout << greater << " is greater " <<endl;

 
 less = min(number1 , number2);
 cout <<less << " is lesser" <<endl;



 power = pow(number1, number2);
 cout << power << " is the answer" <<endl; 



 root = sqrt(number1);
 cout << root << " is  the square root of number" <<endl;



 cubeRoot = cbrt(number1);
 cout << cubeRoot << " is the cube root of number" <<endl;



 roundOff = ceil(number1);
 cout << roundOff << " is the rounded number" <<endl;



}