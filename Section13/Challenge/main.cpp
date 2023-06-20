#include <iostream>
#include "Movie.hpp"
#include "Movies.hpp"

int main(){
    Movies movies;
    
    std::cout << movies.add_movie("50 shades of grey", "Pg-17", 1) << std::endl;
    std::cout << movies.add_movie("50 shades of grey", "Pg-17", 1) << std::endl;
    
    std::cout << movies.increment_watched("50 shades of grey") << std::endl;
    std::cout << movies.increment_watched("60 shades of grey") << std::endl;
    
    movies.display();
    
    return 0;
}