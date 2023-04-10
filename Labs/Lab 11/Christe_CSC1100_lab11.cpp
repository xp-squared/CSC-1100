/******************************************************************************

Zane Christe
4/4/23
Lab 11 Casino Game

*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;

void
line (int i, char z)
{				// create line function to make game look nice
  for (int q = 0; q <= i; q++)
    {
      cout << z;
    }
  cout << endl;
}

void
rulesmenu ()
{				// rules menu function
  line (90, '-');
  cout <<
    "\t\t\tRules of the Game: \n\t1. Choose a number between 1 and 10\n\t2. If you win you will get 10 times the money you bet\n\t3. If you bet on wrong number you will lose your betting amount"
    << endl;
  line (90, '-');
}

int
main ()
{
  srand (time (0));		// seed program
  string name;
  int balance, betA, guess;
  string decision = "y";
  cout << "\t\tCASINO GAME!\n";
  line (50, '*');
  cout << "Enter your name! ";
  cin >> name;
  cout << "Enter starting amount of cash: ";
  cin >> balance;		// balance that you start with
  if (balance < 1)
    {
      while (balance < 1)
	{			// if balance < 1, you must reennter
	  cout << "Invalid balance\nRe-enter balance: ";
	  cin >> balance;
	}
    }
  line (50, '*');
  rulesmenu ();


  while (decision == "y")
    {				// while decision equals y, the loop will infinitely run
      int randnum = rand () % 9 + 1;	// between 1 and 10
      cout << "Your current balance is: $" << balance << "\n" << name <<
	", enter money to bet: ";
      cin >> betA;
      while (betA > balance || betA == 0)
	{			// if invalid bet is placed reask
	  cout << "Error, not enough funds\n" << name <<
	    ", enter money to bet: ";
	  cin >> betA;
	}
      line (50, '*');
      cout << "Guess your number to bet between 1 and 10: ";
      cin >> guess;		// takes guess
      while (guess < 1 || guess > 10)
	{
	  cout << "Error, Number that was guessed is outside of range\n" <<
	    "Guess your number to bet between 1 and 10: ";
	  cin >> guess;
	}
      if (guess != randnum)
	{			// if guess is incorrect
	  cout << "Bad Luck this time !! you lost $" << betA <<
	    "\nThe winning number was: " << randnum << "\n";
	  line (50, '-');
	  balance -= betA;
	  cout << name << ", You have have" << " $" << balance << "\n";
	}
      else
	{			// if guess is correct
	  cout << "Good Job! You won $" << 10 *
	    betA << "\nThe winning number was: " << randnum << endl;
	  line (50, '-');
	  balance += betA * 10;
	  cout << name << ", You have have" << " $" << balance << "\n";
	  line (50, '-');
	}
      if (balance == 0)
	{			// if you run out of funds to play the game
	  cout << "you have no money left to play the game" << "\n";
	  cout << "Thanks for playing the game! your balance amount is $" <<
	    balance;
	  break;
	}
      else
	{
	  cout << "play again [y/n]? ";
	  cin >> decision;	// decision decides if you want to play again with while loop
	}

      if (decision == "n")
	{
	  cout << "Thanks for playing the game! your balance amount is $" <<
	    balance;
	}


    }

  return 0;
}
