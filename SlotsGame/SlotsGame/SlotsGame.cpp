// SlotsGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Reel.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main()
{
	bool running = true;

	int money = 100;

	Reel a = Reel();
	Reel b = Reel();
	Reel c = Reel();

	string answer;

	srand(time(NULL));

	while (running) 
	{
		

		money -= 5;

		a.spin();
		b.spin();
		c.spin();

		cout << a.result << b.result << c.result << "\n";
		if (a.result == b.result && b.result == c.result) 
		{
			cout << "You win!  GET MONEY!\n";
			money += 100;
		}
		else 
		{
			cout << "You lose!  Try again?\n";
		}
		if (money > 0){
		cout << "type ! to quit\n";
		cout << "Money: " << money << "\n";
		answer = cin.get();
		}
		else {
			cout << "You're out of money.  That sucks.  Bye!";
			answer = cin.get();
			running = false;
		}

		if (answer == "!") {
			running = false;
		}
		

	}






    return 0;
}

