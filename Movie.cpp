#include "Movie.h"

Movie::Movie(string t, string g, string d, int y, double r) {
    title = t;
    genre = g;
    director = d;
    year = y;
    setRating(r);
}

void Movie::display() {
    cout << title << " (" << year << ") [" << genre << "] "
         << "평점: " << rating << "/5.0" << endl;
}

void Movie::setRating(double r) {
    if (r < 0.0) {
        rating = 0.0;
    } 
    else if (r > 5.0) {
        rating = 5.0;
    } 
    else {
        rating = r;
    }
}