#include <iostream>
#include <vector>

using namespace std;

int main() 
{
  int x, i;
  bool isPrime = true;
  
  cout<< "Enter a positive integer: ";
  cin  >> x;
  
  for(i = 2; i<= x / 2; ++i)
  {
  	if(x % i == 0)
  	{
  		isPrime = false;
  		break;
  	}
  }	
  if (isPrime)
  	cout<< "This is a prime number";
  else
  	cout<< "This is not a prime number";
	return 0;
}
