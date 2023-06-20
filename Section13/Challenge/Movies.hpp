#ifndef MOVIES_HPP
#define MOVIES_HPP

#include "Movie.hpp"
#include <vector>
#include <string>

class Movies
{
private:
    std::vector<Movie> movies;
public:
    Movies();
    ~Movies();

    bool add_movie(std::string name, std::string rating, int watched);
    bool increment_watched(std::string name);
    void display() const;
};

#endif // MOVIES_HPP
