#pragma once
#include <string>

using std::string;

class Rating {
private:
    string  userId;       // 평가한 사용자
    int     movieId;      // 평가 대상 영화
    double  userRating;   // 0.0 ~ 5.0

public:
    Rating();
    Rating(string userId, int movieId, double userRating);

    string     getUserId()          const;
    int        getMovieId()         const;
    double     getUserRating()      const;
    void       display()            const;
};
