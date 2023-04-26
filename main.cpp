#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

using namespace std;


int main()
{
    int num, guess, guessCounter;
    srand(time(0));
    num = rand() % 100 + 1;
    guess = 0;
    guessCounter = 0;

    cout << "This is the guessing game!" << endl;
    cout << "Try to guess the number: " << endl;
    cin >> guess;

    do{
        if (guess > num)
        {
            do
            {
                guessCounter++;
                cout << "Lower..." << endl;
                cout << "Try again: " << endl;
                cin >> guess;
            }
            while (guess > num);
        }
        else if(guess < num)
        {
            do
            {
                guessCounter++;
                cout << "Higher" << endl;
                cout << "Try again: " << endl;
                cin >> guess;
            }
            while(guess < num);
        }
      }

      while (guess != num);
      guessCounter++;

      if (guessCounter == 1)
        {
         cout << "Congrats! You used " << guessCounter << " guess." << endl;
        }
      else
      {
       cout << "Congrats! You used " << guessCounter << " guesses." << endl;
      }

    return 0;
}
