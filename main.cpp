#include "Movie.h"

int main() {
    Movie m1("기생충", "드라마", "봉준호", 2019, 4.8);
    Movie m2("인터스텔라", "SF", "크리스토퍼 놀란", 2014, 4.9);

    m1.display();
    m2.display();

    m1.setRating(5.5); 
    cout << "수정된 평점: ";
    m1.display();

    return 0;
}