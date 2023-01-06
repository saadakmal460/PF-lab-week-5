#include <iostream>
#include <cmath>


using namespace std;



float claculateHeight(float base , float angle);

main(){

float base , angle , result;

cout << "Enter base: ";
cin >> base;
 
cout << "Enter angle: ";
cin >> angle;




result = claculateHeight(base , angle); 
cout << "Height of the tree is: " <<result;




}






float claculateHeight(float base , float angle){

 float radian = 57.2958;


 float radians = angle / radian;
 
 float height = tan(radian) * base;
 
 return height;












}