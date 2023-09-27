#include "Movie.h"
#include<iostream>
#include "Movies.h"

Movie::Movie(std::string movie_val, std::string rating_val, int watched_val)
	:name{ movie_val }, rating{ rating_val }, watched{ watched_val }{
}

//copy constructor
Movie::Movie(const Movie& source)
	: Movie{ source.name, source.rating , source.watched } {
}

//destructor
Movie::~Movie() {
}

void Movie::display_movie() const {

	std::cout << get_name() << ", " << get_rating() << ", " << get_watched() << std::endl;
}
