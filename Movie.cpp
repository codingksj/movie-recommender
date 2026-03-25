#include "Movie.h"
#include <iostream>

using std::string;
using std::cout;

// 기본 생성자
Movie::Movie()
    : id(0), title(""), genre(""), releaseYear(0), 
    totalRating(0.0), ratingCount(0) {}

// 4인자 생성자
Movie::Movie(int id, const string& title, const string& genre, int year)
    : id(id), title(title), totalRating(0.0), ratingCount(0) {
    
    if (genre.length() > 50) {
        cout << "장르가 너무 깁니다!" << '\n';
        this->genre = genre.substr(0, 50);
    } else {
        this->genre = genre;
    }

    if (year < 1888 || year > 2026) {
        cout << "출시 연도가 잘못되었습니다!" << '\n';
        this->releaseYear = 2026;
    } else {
        this->releaseYear = year;
    }
}

int         Movie::getId()           const { return id; }
string      Movie::getTitle()        const { return title; }
string      Movie::getGenre()        const { return genre; }
int         Movie::getReleaseYear()  const { return releaseYear; }
int         Movie::getRatingCount()  const { return ratingCount; }

double Movie::getAverageRating() const {
    return ratingCount > 0 ? totalRating / ratingCount : 0.0;
}

void Movie::addRating(double r) {
    if (r < 0.0 || r > 5.0) {
        cout << "평점 범위가 잘못되었습니다!" << '\n';
        return;
    }
    totalRating += r;
    ratingCount++;
}

void Movie::display() const {           
    cout << id << ". " << title << " (" << releaseYear << ")"
              << "  평점: " << getAverageRating()
              << " (" << ratingCount << "건)" << '\n';
}
