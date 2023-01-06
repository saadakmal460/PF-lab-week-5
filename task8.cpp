#include <iostream>


using namespace std;





int poolVloume(int v , int p1, int p2 , int h);
int percentagePipe1(int v , int p1 , int p2);
int percentagePipe2(int v , int p1 , int p2);


main(){

 int volume , pipe1 , pipe2 ;
 float hours;
 
 cout << "Enter the volume of the pool: "; 
 cin >> volume;

 cout << "Enter flow rate of pipe 1: ";
 cin >> pipe1;

 cout << "Enter flow rate of pipe 2: ";
 cin >> pipe2;

 cout << "Enter number of hours the worker is absent: ";
 cin >> hours;

  int volume2 = poolVloume(volume , pipe1, pipe2 , hours);
  int pipeOne = percentagePipe1(volume , pipe1, pipe2);
  int pipeTwo = percentagePipe2(volume , pipe1, pipe2);
 
if(volume2 > volume){

 int overflow = volume2 ;
 cout << "The pool has overflown by " <<overflow << " liters" <<endl;


}


if(volume2 < volume) {

  float percentage = (volume2*100)/volume ;
 cout << "The pool has filled by " << percentage << " percent" <<endl;
 cout << "Pipe 1 contribution: " << pipeOne << " percent" <<endl;
 cout << "Pipe 2 contribution: " << pipeTwo << " percent" <<endl;

}








}





int poolVloume(int v , int p1, int p2 , int h){


 int p = p1 + p2;
 int finalVolume = p * h;
 
 return finalVolume;



}



int percentagePipe1(int v , int p1 , int p2){


 int p = p1 + p2;
 int percent = (p1 * 100)/p;

 return percent;




}



int percentagePipe2(int v , int p1 , int p2){


 int p = p1 + p2;
 int percent = (p2 * 100) / p;
 
 return percent;




}