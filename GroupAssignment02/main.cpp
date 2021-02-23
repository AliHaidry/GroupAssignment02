#include <iostream>
#include <cstdlib> // for std::rand() and std::srand()
#include <iomanip> // for input / output manipulators it works for 'iostream' and 'fstream'.
#include <algorithm>


using namespace std;


// function prototype

unsigned int randomSeedGenerator();
void shuffle(int cardList[], int numCard); // 52 elements
void shuffleTwo(int cardList[], int numCard); // 500 elements
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
         cout << "Generating all the random seed values..." << endl;
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

         const int MAX_SIZE = 500;

         // Array from 1 to 500 
       int container[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ,11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,
                            26, 27, 28, 29, 30, 31, 32, 33, 34, 35 ,36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 
                            51, 52, 53, 54, 55, 56, 57, 58, 59, 60 ,61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 
                            76, 77, 78, 79, 80, 81, 82, 83, 84, 85 ,86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 
                           101, 102, 103, 104, 105, 106, 107, 108, 109, 110 ,111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 
                           126, 127, 128, 129, 130, 131, 132, 133, 134, 135 ,136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 
                           151, 152, 153, 154, 155, 156, 157, 158, 159, 160 ,161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 
                           176, 177, 178, 179, 180, 181, 182, 183, 184, 185 ,186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 
                           201, 202, 203, 204, 205, 206, 207, 208, 209, 210 ,211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 222, 224, 225, 
                           226, 227, 228, 229, 230, 231, 232, 233, 234, 235 ,236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 
                           251, 252, 253, 254, 255, 256, 257, 258, 259, 260 ,261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 
                           276, 277, 278, 279, 280, 281, 282, 283, 284, 285 ,286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 
                           301, 302, 303, 304, 305, 306, 307, 308, 309, 310 ,311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 
                           326, 327, 328, 329, 330, 331, 332, 333, 334, 335 ,336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 
                           351, 352, 353, 354, 355, 356, 357, 358, 359, 360 ,361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 
                           376, 377, 378, 379, 380, 381, 382, 383, 384, 385 ,386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 
                           401, 402, 403, 404, 405, 406, 407, 408, 409, 410 ,411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 
                           426, 427, 428, 429, 430, 431, 432, 433, 434, 435 ,436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 
                           451, 452, 453, 454, 455, 456, 457, 458, 459, 460 ,461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 
                           476, 477, 478, 479, 480, 481, 482, 483, 484, 485 ,486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500,
                          };



         shuffleTwo(container, MAX_SIZE);

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
         shuffleTwo(container - 1000, MAX_SIZE);

         // Printing all shuffled elements of cards 
         cout << " RE - Shuffling the items in the container: " << endl;
         for (int counter = 0; counter < MAX_SIZE; counter++)
            cout << setw(6) << container[counter] << " " << "\n";
         cout << "RE - Shuffling done!" << endl;
         cout << endl;

         /**/

         break;
      }


      case 4:
      {
         cout << "You have exited the program!" << endl;

         break;
      }
      }
   } while (optionVal != 4);
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

 //Function which shuffle and print the array with 52 elements.
void shuffle(int cardList[], int numCard)
{
   // Initialize seed randomly 
  // srand(time(0));
    std::srand(1000); // set initial seed value to 1000

   for (int counter = 0; counter < numCard; counter++)
   {
      // Random for remaining positions. 
      int swapper = counter + (rand() % (52 - counter));

      swap(cardList[counter], cardList[swapper]);

   }
}




//Function which shuffle and print the array with 500 elements.
void shuffleTwo(int cardList[], int numCard)
{
   // Initialize seed randomly 
  // srand(time(0));
   std::srand(1000); // set initial seed value to 1000

   for (int counter = 0; counter < numCard; counter++)
   {
      // Random for remaining positions. 
      int swapper = counter + (rand() % (500 - counter));

      swap(cardList[counter], cardList[swapper]);

   }
}





// function definition 

void showMenu()
{
   cout << "***********************MENU***********************" << endl;
   cout << "***|1|**********Generate Random Seed*************" << endl;
   cout << "***|2|** (52 elements) Shuffle Values / Re-Shuffle Values to orignal position**" << endl;
   cout << "***|3|** (500 elements) Shuffle Values / Re-Shuffle Values to orignal position**" << endl;
   cout << "***|4|**********Exit the Program*************" << endl;

}