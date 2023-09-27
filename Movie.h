#pragma once
#include<string>

class Movie
{
private:

	std::string name;
	std::string rating;
	int watched;


public:

	Movie(std::string movie, std::string rating, int watch);

	Movie(const Movie& source);

	~Movie();

	void set_name(std::string name) {
		this->name = name;
	}

	void set_rating(std::string rating) {
		this->rating = rating;
	}

	void set_watched(int watched) {
		this->watched = watched;
	}


	std::string get_name() const { return name; }

	std::string get_rating() const { return rating; }

	int get_watched() const { return watched; }

	void display_movie() const;
};

