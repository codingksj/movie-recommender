#include "rating.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;

Rating::Rating() : userId(""), movieId(0), userRating(0.0) {}
Rating::Rating(string userId, int movieId, double userRating)
    : movieId(movieId) {
    if (userId.length() > 50) {
        cout << "아이디가 너무 깁니다!" << '\n';
        this->userId = userId.substr(0, 50);
    } else {
        this->userId = userId;
    }

    if (userRating < 0.0 || userRating > 5.0) {
        cout << "평점 범위가 잘못되었습니다!" << '\n';
        this->userRating = 0.0;
    } 
    else {
        this->userRating = userRating;
    }
}

string  Rating::getUserId()       const { return userId; }
int     Rating::getMovieId()      const { return movieId; }
double  Rating::getUserRating()   const { return userRating; }

void Rating::display() const {
    cout << "[ 유저 ID ] " << userId << " [ 영화 ID ] " << movieId << " [ 평점 ] " << userRating << '\n';
}