#include <iostream>
#include <fstream>
#include <string>
#include "SaveGame.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::fstream;

int main()
{
	/*int userInput = 1;
	fstream file;
	fstream fileTwo("MyLog.txt");
	string buffer;
	string userText;
	int userLeave;
	bool leave = false;
	
	if (!fileTwo)
	{
		fileTwo.open("MyLog.txt", std::ios::out);
		if (!fileTwo.is_open())
		{
			std::cerr << "File not found." << endl;
			return -1;
		}
		fileTwo.close();
	}

	while (leave != true)
	{
		cout << "What do you want to do?\n1.Display\n2.Write\n3.Clear" << endl;

		cin >> userInput;
		file.clear();
		cin.ignore(10000, '\n');

		if (userInput == 1)
		{
			
			file.open("MyLog.txt", std::ios::in);

			if (!file.is_open())
			{
				std::cerr << "File not found." << endl;
				return -1;
			}

			cout << "Displaying the File" << endl;
			while (std::getline(file, buffer))
			{
				cout << buffer << endl;
			}
	
		}
		else if (userInput == 2)
		{
			file.open("MyLog.txt", std::ios::app);

			if (!file.is_open())
			{
				std::cerr << "File not found." << endl;
				return -1;
			}

			file.seekp(0, std::ios_base::end);

			cout << "Write to the File." << endl;
			std::getline(cin, userText);
			file << userText;

			
		}
		else if (userInput == 3)
		{
			file.open("MyLog.txt", std::ios::out);

			if (!file.is_open())
			{
				std::cerr << "File not found." << endl;
				return -1;
			}

			cout << "File is cleared" << endl;
		}

		file.flush();
		file.close();

		cout << "Do you want to continue?\nPress 4 to exit\nPress 0 to continue" << endl;
			
		cin >> userLeave;
		while (userLeave != 0 && userLeave != 4)
		{
			cout << "Press either 0 or 4" << endl;
			cin >> userLeave;
		}

		if (userLeave == 0)
		{
			leave = false;
		}
		else if (userLeave == 4)
		{
			leave = true;
		}
	}*/

	SaveGame save;

	save.example("Save.txt");
	
	while (true){}

	return 0;
}