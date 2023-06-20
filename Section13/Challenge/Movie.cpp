#include <iostream>
#include "Movie.hpp"

Movie::Movie(std::string name, std::string rating, int watched): name{name}, rating{rating}, watched{watched}{
}

// Copy constructor 
Movie::Movie(const Movie &source): name{source.name}, rating{source.rating}, watched{source.watched}{
}

Movie::~Movie()
{
}

void Movie::display() const{
    std::cout << "name: " << name << std::endl;
    std::cout << "rating: " << rating << std::endl;
    std::cout << "watched: " << watched << std::endl;
}

