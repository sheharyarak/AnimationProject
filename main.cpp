#include "Bug.h"
#include "alpha.h"
#include <iostream>
#include <chrono>
#include <future>
#include <vector>
#include <thread>
#include "Timer.h"

//~ static std::vector<std::future<void>>future_v;

//NORMAL MAIN
int		main()
{
	std::string word = "./Letters/";
	std::cout << "Enter a word [PSA: Words don't have numbers]: ";
	std::cin >>	word;
	toUpper(word);
	Picture p("duck.png");
	Animation *a = new Animation(word+".gif", WIDTH*word.length()+PADDING, HEIGHT+PADDING);
	Bug *barry = new Bug(0,50, a);
	barry->set_p(p);
	barry->set_v(5);
	auto start = std::chrono::high_resolution_clock::now();
	for(int i = 0; i < word.length(); i++)
	{
		barry->teleport(WIDTH*i,50);
		draw(barry, word[i]);
	}
	a->close();
	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<float> duration = end - start;
	std::cout << word <<".gif has been made in "<<duration.count()<<"s." <<std::endl;
	std::string command = "animate " + word + ".gif"; 
	system(command.c_str());
}

//~ //THREADED MAIN
//~ int		main()
//~ {
	//~ Timer t("Total time");
	//~ std::string word = "./Letters/";
	//~ std::cout << "Enter a word [PSA: Words don't have numbers]: ";
	//~ std::cin >>	word;
	//~ toUpper(word);
	//~ Picture p("duck.png");
	//~ Animation *a = new Animation(word+".gif", WIDTH*word.length()+PADDING, HEIGHT+PADDING);
	//~ Bug *barry = new Bug(0,50, a);
	//~ barry->set_p(p);
	//~ barry->set_v(5);
	//~ for(int i = 0; i < word.length(); i++)
	//~ {
		//~ barry->teleport(WIDTH*i,50);
		//~ future_v.push_back(std::async(std::launch::async, draw, barry, word[i]));
	//~ }
	//~ std::cout << word <<".gif has been made." <<std::endl;
	//~ a->close();
	//~ std::string command = "animate " + word + ".gif";
	//~ system(command.c_str());
//~ }
