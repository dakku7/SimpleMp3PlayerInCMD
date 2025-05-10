#include <iostream>
#include<string>
#include <SFML/Audio.hpp>
//#define DEBUG


using namespace std;
class mp3Player {

private:
	sf::Music music;
	int volume;
	bool isPlaying;
	string currentSong;
#ifdef DEBUG
	int buttonForPlay; // 0 - stop, 1 - playing
#endif // DEBUG

	string path;



public:
	mp3Player() {
		volume = 50;
		isPlaying = false;
		currentSong = "";
		path = "";
	}

	void my_play(string path_song);

	void pauseMySong();

	void SetVolumemine(int volumeChoosen);

};

string chooseSong(string your_music, string pathUser);