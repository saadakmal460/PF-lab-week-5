# include <iostream>
using namespace std;

string tenth(int num1);
string ones(int num2);



main()
{
    system("cls");

int number;
int num1,num2;
string z;
string y;
while(1){
cout<< "Enter no: ";
cin>> number;


num2=number%10;
num1=number/10;


if (number<10)
{
    z=ones(num2);
    cout <<z<<endl;
    }


if (number>10)
{
    z=ones(num2);
    y=tenth(num1);
    cout<<y<< " " <<z<<endl;


}


}
}











string ones(int num2)
{
if (num2==1){
    return "one";
    }
if (num2==2){
    return "two";
    }
if (num2==3){
    return "three";
    }
if (num2==4){
    return "four";
    }
if (num2==5){
    return "five";
    }
if (num2==6){
    return "six";
    }
if (num2==7){
    return "seven";
    }
if (num2==8){
    return "eight";
    }
if( num2==9){
    return "nine";
    }
return 0;
}



string tenth(int num1)
{
if(num1==1){
    return "ten";
    }
if (num1==2){
    return "twenty";
    }
if(num1==3){
    return "thirty";
}
if (num1==4){
    return "fourty";
    }
if (num1==5){
    return "fifty";
    }
if (num1==6){
    return "sixty";
    }
if (num1==7){
    return "seventy";
    }
if (num1==8){
    return "eighty";
    }
if (num1==9){
    return "ninty";
    }
return 0;
}
