#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int playerHealth = 100;
int cpuHealth = 100;
bool gameIsRunning = true;
char choice;
bool yes = true;
int randomNum1, randomNum2;
int main()
{
	srand(time(0));
	
	while (gameIsRunning)
	{
		
		cout << "TYPE (R) TO ROLL THE DYCE: ";
		cin >> choice;
		
		if (choice == 'R')
		{
			for (;;)
			{
				cout << "\t\t\t\t\t YOUR HEALTH: " << playerHealth << "\t\t\t\tCPU HEALTH: " << cpuHealth << endl;
				
				randomNum1 = (rand() % 20 + 1);
				randomNum2 = (rand() % 20 + 1);

				cout << "you rolled a: " << randomNum1 << endl;
				cpuHealth -= randomNum1;
				cout << "\nCpu health is now: " << cpuHealth << endl;

				cout << "CPU rolled a: " << randomNum2 << endl;
				playerHealth -= randomNum2;
				cout << "\nyour health is now: " << playerHealth << endl;
				if (playerHealth <= 0)
				{
					cout << "\nYOU LOSE!!!\n";
					gameIsRunning = false;
				}
				else if (cpuHealth <= 0)
				{
					cout << "\nYOU WIN!!!\n";
					gameIsRunning = false;
				}
				break;

			}

		}
		else if (choice != 'R')
		{
			cout << "invalid choice" << endl;
		}
		
		
		
	}cout << "GAME OVER!";
	return 0;
}
