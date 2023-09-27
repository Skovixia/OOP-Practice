#include<iostream>
#include<string>
#include "Movies.h"

using namespace std;

void add_movie(Movies& movie, string name, string rating, int watched);
void increment_watched(Movies& movie, string name);
//void display_list();
//char selectionCaps(char selection);

int main() {

	Movies my_Movies;
	my_Movies.display();

	add_movie(my_Movies, "Big", "PG-13", 2);
	add_movie(my_Movies, "Star Wars", "PG", 5);
	add_movie(my_Movies, "Cinderella", "PG", 7);

	my_Movies.display();

	add_movie(my_Movies, "Cinderella", "PG", 7);
	add_movie(my_Movies, "Ice Age", "PG", 12);

	my_Movies.display();

	increment_watched(my_Movies, "Big");
	increment_watched(my_Movies, "Ice Age");

	my_Movies.display();

	increment_watched(my_Movies, "XXXX");

	return 0;
}

void add_movie(Movies& movie, string name, string rating, int watched) {


	if (movie.add_movie(name, rating, watched)) {
		cout << "Movie added." << endl;
	}
	else {
		cout << "Sorry, this movie already exists." << endl;
	}


}

void increment_watched(Movies& movie, string name){
	if(movie.increment_watched(name)){
		cout << "Watch updated." << endl;
	}else {
		cout<< "Sorry, this movie does not exist." << endl;
	}
}

//void display_list() {
//
//	cout << "Type 'A' - Add movie" << endl;
//	cout << "Type 'I' - Increment movie watch time" << endl;
//	cout << "Type 'C' -  Add comment about movie" << endl;
//	
//}
//
//char selectionCaps(char selection) {
//
//	return toupper(selection);
//
//}