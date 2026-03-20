#pragma once
#include <iostream>
#include <string>

using namespace std;

class Movie {
private:
    string title;
    string genre;
    string director;
    int year;
    double rating;

public:
    // 생성자
    Movie(string t, string g, string d, int y, double r);

    // 정보 출력 함수
    void display();

    // Getter & Setter (캡슐화)
    void setRating(double r);
    double getRating() const { return rating; }
};
