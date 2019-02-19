//Programmer: Joseph Klutenkamper
//Class:      CS1200
//Date:       9/15/2017
//-----------------------------------------------------------------------------
//Description: Program will find all magic number in the set of 3-5000000.
//             Magic numbers are defined as a number that is disiible by 2 to
//             equal 1. If not, they must be either diveder by 2 or multiplied
//             by 3 and add one if they are even or odd respectively. Then the
//             the process must continue until the integer is divided by 2 and
//             eqaul to one. When this is true the number is magic.
#include <iostream>
#include <ctime>

using namespace std;

//This MAX with nothing real inside the loop ran in 0.5 seconds...
const int MAX = 500000000; //setting the max stopping point 100M for testing

int main () {
  clock_t startTime = clock();
  cout << "Beginning loop" << endl;

  //Registering unsigned ints because they are non-negative and easier
  //on execution time.
  register unsigned int k;
  register unsigned int j;
  for (register unsigned i = 3; i < MAX; i++) {
    //This is where your algorithm code would go.

    //Sets a temporary integer equal to the counting i variable.
    k = i;

    //loop that will preform operations on each iterated value.
    while(k!=1)
    {
      //if its even divide by 2.
      if (static_cast<int>(k)%2==0)
      {
        k/=2;
      }

      //if its not multiply by 3.
      else
      {
        if (k>100000)
        {
          k=static_cast<double>(k*3+1);
        }
        else
        {
          k=3*k+1;
        }
      }
    }

    //using a temp variable to see how many iterartions were ran.
    j=i;
  }

  //If all iterations ran and there was no error then all integers are magic
  //numbers.
  if(j+1==MAX)
  {
    cout << "All numbers are magic\n";
  }
  else
  {
    cout << "There exists an integer that is not magic\n";
  }

  //Computation time output.
  clock_t finishTime = clock();
  cout << "Looping took " << double(finishTime - startTime) / CLOCKS_PER_SEC
       << " seconds" << endl;

  return 0;
}
