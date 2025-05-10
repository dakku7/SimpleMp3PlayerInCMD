#include <iostream>
#include<string>
#include <SFML/Audio.hpp>
#include "funkiPlayer.h"


using namespace std;


	void mp3Player::my_play(string path_song) {
		if (music.getStatus() == sf::Music::Playing || music.getStatus() == sf::Music::Paused) {
			music.stop();
		}

		if (!music.openFromFile(path_song))
		{
			cout << "\nCant find your song!" << endl;
			return;
		}
		else {
			currentSong = path_song;


			isPlaying = true;
			music.play();
			cout << "\t\nNow playing: " << currentSong << endl << endl;

		}
	}

	void mp3Player::pauseMySong() {
		if (isPlaying) {
			music.pause();
			isPlaying = false;
			cout << "\t\nPlayer has been stopped" << endl << endl;
		}
		else {
			cout << "\tIts already stopped" << endl;
		}
	}

	void mp3Player::SetVolumemine(int volumeChoosen) {
		if (volumeChoosen < 0 || volumeChoosen > 100) {
			cout << "\t\nError volume(only 0 to 100)" << endl;
			return;
		}

		music.setVolume(volumeChoosen);
		cout << "\tVolume is " << volumeChoosen << endl;
	}

	string chooseSong(string your_music, string pathUser) {
		string fullPath;
		fullPath = pathUser + your_music;
		if (your_music.find(".mp3") == string::npos) {
			fullPath += ".mp3";
		}
		cout << "\n\tYour song now is: " << fullPath << endl;

		return fullPath;
	}