#include <iostream>
#include <cstdlib> // for std::rand() and std::srand()
#include <iomanip> // for input / output manipulators it works for 'iostream' and 'fstream'.
#include <algorithm>


using namespace std;


// function prototype

unsigned int randomSeedGenerator();
void shuffle(int cardList[], int numCard);
void showMenu();


int main()
{


   int optionVal;

   do {
      showMenu();
      cout << endl;
      cout << "Option:" << endl;
      cin >> optionVal;


      switch (optionVal)
      {
      case 1:
      {
         cout << "Generating all the random see values..." << endl;
         cout << endl;
         randomSeedGenerator();
         cout << "Done creating the PRNG values !" << endl;
         break;

      }
      case 2:
      {

         const int MAX_SIZE = 52;

         // Array from 1 to 51 
         int container[] = { 1, 2, 3, 4, 5, 6, 7, 8,
                    9, 10, 11, 12, 13, 14, 15,
                    16, 17, 18, 19, 20, 21, 22,
                    23, 24, 25, 26, 27, 28, 29,
                    30, 31, 32, 33, 34, 35, 36,
                    37, 38, 39, 40, 41, 42, 43,
                    44, 45, 46, 47, 48, 49, 50,
                    51, 52 };



         shuffle(container, MAX_SIZE);

         // Printing all shuffled elements of cards 
         cout << " Shuffling the items in the container: " << endl;
         for (int counter = 0; counter < MAX_SIZE; counter++)
            cout << setw(6) << container[counter] << " " << "\n";
         cout << " Shuffling done!" << endl;
         cout << endl;

         /**/

         cout << "NOW RE-SHUFFLE" << endl;
         cout << endl;

         int n = sizeof(container) / sizeof(container[0]);
         sort(container, container + n);
         shuffle(container - 52, MAX_SIZE);

         // Printing all shuffled elements of cards 
         cout << " RE - Shuffling the items in the container: " << endl;
         for (int counter = 0; counter < MAX_SIZE; counter++)
            cout << setw(6) << container[counter] << " " << "\n";
         cout << "RE - Shuffling done!" << endl;
         cout << endl;

         /**/

         break;
      }

      case 3:
      {
         cout << "You have exited the program!" << endl;

         break;
      }
      }
   } while (optionVal != 3);
   {
      // No Body Required !
   }

   system("PAUSE");
   return 0;
}


// function definition
unsigned int randomSeedGenerator()
{

   const unsigned int MAX_VAL = 52; // ten thousand
   //srand(time(0));
   std::srand(1000); // set initial seed value to 1000


   // Print 10000 random numbers
   for (int counter = 0; counter <= MAX_VAL; counter++) // Before assigning the value to the variable, the value is incremented by one.
   {
      std::cout << std::rand() << '\t';
      std::cout << '\n';
   }

   return rand();
}


/*
* Expands to an integer constant expression equal to the maximum value returned by the function std::rand.
* This value is implementation dependent. It's guaranteed that this value is at least 32767.
*/

/*
* Seeds the pseudo-random number generator used by std::rand() with the value seed.
* If rand() is used before any calls to srand(), rand() behaves as if it was seeded with srand(1).
* Each time rand() is seeded with the same seed, it must produce the same sequence of values.
* srand() is not guaranteed to be thread-safe.
*/

/*
* unsigned int  = 4,294,967,295
*/


// function definition

 //Function which shuffle and print the array 
void shuffle(int cardList[], int numCard)
{
   // Initialize seed randomly 
   srand(time(0));
   // std::srand(1000); // set initial seed value to 5000

   for (int counter = 0; counter < numCard; counter++)
   {
      // Random for remaining positions. 
      int swapper = counter + (rand() % (52 - counter));

      swap(cardList[counter], cardList[swapper]);

   }
}



// function definition 

void showMenu()
{
   cout << "***********************MENU***********************" << endl;
   cout << "***|1|**********Generate Random Seed*************" << endl;
   cout << "***|2|**Shuffle Values / Re-Shuffle Values to orignal position**" << endl;
   cout << "***|3|**********Exit the Program*************" << endl;

}