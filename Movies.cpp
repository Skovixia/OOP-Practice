#include "Movies.h"
#include "Movie.h"
#include<string>
#include <iostream>


Movies::Movies() {

}

bool Movies::add_movie(std::string name, std::string rating, int watched) {
	if (movies.size() == 0) {

		movies.push_back(Movie(name, rating, watched));
		return true;

	}
	else{
		for (size_t i = 0; i < movies.size(); i++) {

			std::string movie = movies[i].get_name();

			if ((name == movie)) {
				return false;

			}
			else if ((i == movies.size() - 1) && name != movie) {
				movies.push_back(Movie(name, rating, watched));
				return true;
			}
		}
	}
}

bool Movies::increment_watched(std::string name) {
	for (size_t i = 0; i < movies.size(); i++) {

		std::string movie = movies[i].get_name();

		if ((name == movie)) {

			movies[i].set_watched(movies[i].get_watched()+1);
			return true;

		}
		else if ((i == movies.size() - 1) && name != movie) {
			return false;
		}

	}
}

void Movies::display()const {

	std::cout << "=============================================================" << std::endl;

	if (movies.size() == 0) {
		std::cout << "There are no movies in the list currently." << std::endl;
	}
	else {
		for (size_t i = 0; i < movies.size(); i++) {

			movies[i].display_movie();
		}
	}
	std::cout << "=============================================================" << std::endl;
}

Movies::~Movies() {

}