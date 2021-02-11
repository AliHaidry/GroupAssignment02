#include <iostream>
#include <time.h>
#include <cstdlib>
#include <iomanip>


using namespace std;


// Function which shuffle and print the array 
void shuffle(int cardList[], int numCard)
{
   // Initialize seed randomly 
   srand(time(0));

   for (int counter = 0; counter < numCard; counter++)
   {
      // Random for remaining positions. 
      int swapper = counter + (rand() % (52 - counter));

      swap(cardList[counter], cardList[swapper]);
   }
}

int main()
{

   const int MAX_SIZE = 52;

   // Array from 0 to 51 
   int container[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8,
              9, 10, 11, 12, 13, 14, 15,
              16, 17, 18, 19, 20, 21, 22,
              23, 24, 25, 26, 27, 28, 29,
              30, 31, 32, 33, 34, 35, 36,
              37, 38, 39, 40, 41, 42, 43,
              44, 45, 46, 47, 48, 49, 50,
              51 };

   shuffle(container, MAX_SIZE);

   // Printing all shuffled elements of cards 
   cout<<" Shuffling the items in the container: " << endl;
   for (int counter = 0; counter < MAX_SIZE; counter++)
      cout<< setw(6) << container[counter]<< " " << "\n";
   cout << " Shuffling done!" << endl;
   cout << endl;


   system("PAUSE");
   return 0;
}

