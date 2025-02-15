// movie_factory.h

#ifndef MOVIE_FACTORY_H
#define MOVIE_FACTORY_H

#include "movie.h"
#include <vector>
#include <stdexcept>

// Function declaration for CreateMovies
std::vector<Movie*> CreateMovies(
    const std::vector<std::string>& titles, 
    const std::vector<std::string>& directors, 
    const std::vector<int>& runtimes, 
    const std::vector<int>& ids, 
    const std::vector<double>& ratings
);

#endif
