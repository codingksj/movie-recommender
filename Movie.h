#pragma once
#include <string>

using std::string;

class Movie {
private:
    int         id;
    string      title;
    string      genre;
    int         releaseYear;
    double      totalRating;    // averageRating 제거
    int         ratingCount;    // 추가

public:
    Movie();                    // 기본 생성자 추가
    Movie(int id, const string& title,
          const string& genre, int year);

    int         getId()              const;
    string      getTitle()           const;
    string      getGenre()           const;
    int         getReleaseYear()     const;  // getYear → getReleaseYear
    double      getAverageRating()   const;  // getRating → getAverageRating
    int         getRatingCount()     const;  // 추가
    void        addRating(double r); // 추가
    void        display()            const;
};
