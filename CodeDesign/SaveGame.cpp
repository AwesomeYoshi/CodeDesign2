#include "SaveGame.h"
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::fstream;


SaveGame::SaveGame()
{
}


SaveGame::~SaveGame()
{
}

void SaveGame::example(const char * fileName)
{
	int userInput = 1;
	fstream file;
	fstream fileTwo(fileName);
	string buffer;
	string outDisplay;
	int userLeave;
	int choice;
	bool leave = false;
	
	
	if (!fileTwo)
	{
		fileTwo.open(fileName, std::ios::out);
		if (!fileTwo.is_open())
		{
			std::cerr << "File not found." << endl;
			//return -1;
		}
		fileTwo.close();
	}

	while (leave != true)
	{
		cout << "What do you want to do?\n1.Display\n2.Write\n3.Clear\n4.Load" << endl;

		cin >> userInput;
		file.clear();
		cin.ignore(10000, '\n');

		if (userInput == 1)
		{

			file.open(fileName, std::ios::in);

			if (!file.is_open())
			{
				std::cerr << "File not found." << endl;
				//return -1;
			}

			cout << "Displaying the File" << endl;
			while (std::getline(file, buffer))
			{
				cout << buffer << endl;
			}

		}
		else if (userInput == 2)
		{
			file.open(fileName, std::ios::app);

			if (!file.is_open())
			{
				std::cerr << "File not found." << endl;
				//return -1;
			}

			file.seekp(0, std::ios_base::end);

			cout << "Write to the File." << endl;
			
			SaveGame gameOne;
			gameOne.number = 100;
			gameOne.decimal = 77.7f;
			gameOne.display = true;
			gameOne.letter = 'S';

			file.open(fileName, std::ios::out);
			file << gameOne.number << endl;
			file << gameOne.decimal << endl;
			file << gameOne.display << endl;
			file << gameOne.letter << endl;
			
			/*cout << "Write a Number: " << endl;
			cin >> number;
			cout << "Write a decimal: " << endl;
			cin >> decimal;
			cout << "Press 1 for true or 2 for false: " << endl;
			cin >> choice;
			while (choice != 1 && choice != 2)
			{
				cout << "Press either 1 for True or 2 for false" << endl;
				cin >> choice;
			}
			if (choice == 1)
			{
				display = true;
			}
			else if (choice == 2)
			{
				display = false;
			}

			if (display == true)
			{
				outDisplay = "True";
			}
			else if (display == false)
			{
				outDisplay = "False";
			}
			cout << "Write a Letter: " << endl;
			cin >> s;*/

			/*file << "Number: " << number << "\nDecimal: " << decimal <<
				"\nDisplay: " << outDisplay << "\nLetter: " << s << endl;*/
		}
		else if (userInput == 3)
		{
			file.open(fileName, std::ios::out);

			if (!file.is_open())
			{
				std::cerr << "File not found." << endl;
				//return -1;
			}

			cout << "File is cleared" << endl;
		}
		else if (userInput == 4)
		{
			
			std::string tmp;

			file.open(fileName, std::ios::in);
			
			std::getline(file, tmp);
			number = atoi(tmp.c_str());

			std::getline(file, tmp);
			decimal = atof(tmp.c_str());

			std::getline(file, tmp);
			display = tmp.c_str()[0]=='1'?true:false;

			std::getline(file, tmp);
			letter = tmp.c_str()[0];

			cout << number << endl;
			cout << decimal << endl;
			cout << (display?"true":"false") << endl;
			cout << letter << endl;
		}

		file.flush();
		file.close();

		cout << "Do you want to continue?\nPress 5 to exit\nPress 0 to continue" << endl;

		cin >> userLeave;
		while (userLeave != 0 && userLeave != 5)
		{
			cout << "Press either 0 or 5" << endl;
			cin >> userLeave;
		}

		if (userLeave == 0)
		{
			leave = false;
		}
		else if (userLeave == 5)
		{
			leave = true;
		}
	}
}
