// movie_factory.cpp

#include "movie_factory.h"

std::vector<Movie*> CreateMovies(
    const std::vector<std::string>& titles, 
    const std::vector<std::string>& directors, 
    const std::vector<int>& runtimes, 
    const std::vector<int>& ids, 
    const std::vector<double>& ratings
) {
    // Ensure all vectors have the same size
    if (titles.size() != directors.size() || titles.size() != runtimes.size() || titles.size() != ids.size() || titles.size() != ratings.size()) {
        throw std::invalid_argument("All input vectors must have the same length.");
    }

    std::vector<Movie*> moviePointers;

    // Create a Movie object for each set of attributes and store the pointer in the vector
    for (size_t i = 0; i < titles.size(); ++i) {
        moviePointers.push_back(new Movie(titles[i], directors[i], runtimes[i], ids[i], ratings[i]));
    }

    return moviePointers;
}
