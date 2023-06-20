#include "Movies.hpp"


Movies::Movies()
{
}

Movies::~Movies()
{
}

bool Movies::add_movie(std::string name, std::string rating, int watched)
{
 
    for (const Movie &m:movies){
        if (name == m.get_name()){
            return false;
        }
    }
    
    Movie movie(name, rating, watched);
    movies.push_back(movie);
    return true;
}

bool Movies::increment_watched(std::string name){
  
    for (Movie &m:movies){
        if (name == m.get_name()){
            m.increment_watched();
            return true;
            
        }
    }
    return false;
}

void Movies::display() const{
    for (const Movie &m:movies){
        m.display();
    }
}
