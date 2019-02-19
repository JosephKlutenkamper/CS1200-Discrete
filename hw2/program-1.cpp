//Programmer: Joseph Klutenkamper
//Date:       12/1/2017
//Instructot: Gosnell
//class:      1200



#include <iostream>
#include <thread>
#include <gmp.h>

using namespace std;



int main () {

  
  //GMP is pretty weird ... this is the integer type
  //I Tried my best to use GMP but the ui and the fact that
  //i couldnt compare the values outside of a unsinged long really
  //confused me
  //Probably just stick with this until it breaks?
  //unsigned long long numToFactor;
  
  unsigned long long numToFactor; 
  
  cin >> numToFactor; 
  
  cout << "The following are the prime factors of " << numToFactor <<": ";

  for(unsigned long long i = 2;i<=numToFactor;i++)
  {
    unsigned short count = 0;
    while(numToFactor%i==0)
    {
      numToFactor/=i;
      count++;
    }
    if(count!=0)
    {
      cout << " " << i << "^" << count;
    }
    
  }
  cout<<endl; 
  return 0;
}