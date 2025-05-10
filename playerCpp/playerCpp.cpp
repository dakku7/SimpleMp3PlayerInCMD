#include <iostream>
#include<string>
#include <SFML/Audio.hpp>
#include "funkiPlayer.h"

using namespace std;



int main() {

	cout << "\tThis is my simple cmd player!" << endl;
	mp3Player playerUser;
	string pathUser = "D:/visualcode/playerCpp/music/";
	string your_music;
	
	int choice;


	do {
		cout << "[1]Play song\n[2]Stop song\n[3]Volume settings\n[4]Choose your song\n[5]Exit\n";
		cout << "Make your choice: ";

		cin >> choice; cout << endl;

	switch (choice)
		{
		case 1:
			playerUser.my_play(pathUser);
			break;
		case 2:
			playerUser.pauseMySong();
			break;
		case 3:
			int choiceVolume;
			cout << "\nWhat it will be(0-100): "; cin >> choiceVolume;
			playerUser.SetVolumemine(choiceVolume);
			break;
		case 4:
			pathUser = "D:/visualcode/playerCpp/music/";
			cout << "\nEnter name of your .mp3 file: ";
			cin.ignore();
			getline(cin, your_music);
			pathUser = chooseSong(your_music, pathUser);
			
			break;
		case 5:
			cout << "\nSee ya next time!" << endl;
			return 0;
		default:
			cout << "\nDuh choice" << endl;
			break;
		}
	} while (choice != 5);
	
	return 0;
}