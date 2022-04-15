#include <iostream>
using namespace std;

//Function to retrun value of roman symbols
int value(char roman)
{
 switch(roman)
 {
   case 'I':
        return 1;
   case 'V':
        return 5;
   case 'X':
        return 10;
   case 'L':
        return 50;
   case 'C':
        return 100;
   case 'D':
        return 500;
   case 'M':
        return 1000;
 }
}

//Function to convert Roman Numerals to Integer
int roman_to_int (string roman_num)
{
int i, k, result=0, count=0;
k=roman_num.length()-1;

for( i=k; i>=0; i--)
{
 if( value(roman_num[i]) >= count)
 result = result + value(roman_num[i]);
 else
  result = result - value(roman_num[i]);

count = value(roman_num[i]);
}
return result;
}


int main() {

  string roman_number;
  int num;
  cout<<"enter a roman number: ";
  cin>>roman_number;
  num=roman_to_int(roman_number);
  cout<<num<<"\n";
  return 0;
}