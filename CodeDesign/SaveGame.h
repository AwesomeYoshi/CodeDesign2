#pragma once
class SaveGame
{
public:
	SaveGame();
	~SaveGame();

	void example(const char * fileName);

	int number = 100;
	float decimal = 77.7f;
	bool display = true;
	char letter = 'a';
	char* s = &letter;
};

