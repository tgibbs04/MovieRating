#include "movie.h"
#include "movie_factory.h"
#include <iostream>
#include <vector>
#include <limits>

using namespace std;

// finds highest rated movie
Movie* FindHighestRatedMovie(const std::vector<Movie*>& movies) {
    Movie* highestRatedMovie = nullptr;
    double highestRating = -1.0;
    for (auto movie : movies) {
        if (movie->GetRating() > highestRating) {
            highestRatedMovie = movie;
            highestRating = movie->GetRating();
        }
    }
    return highestRatedMovie;
}

// Find average runtime
double CalculateAverageRuntime(const std::vector<Movie*>& movies) {
    int totalRuntime = 0;
    for (auto movie : movies) {
        totalRuntime += movie->GetRuntime();
    }
    return static_cast<double>(totalRuntime) / movies.size();
}

int main() {
    //cout << "HW3\n";

    // Vectors representing movie data
    std::vector<std::string> titles{"Movie 1", "Movie 2", "Movie 3", "Movie 4", "Movie 5"};
    std::vector<std::string> directors{"Director 1", "Director 2", "Director 3", "Director 4", "Director 5"};
    std::vector<int> runtimes{140, 175, 150, 160, 140};
    std::vector<int> ids{1, 2, 3, 4, 5};
    std::vector<double> ratings{9.1, 9.2, 9.0, 8.8, 8.9};
    std::vector<Movie*> movies = CreateMovies(titles, directors, runtimes, ids, ratings);

    Movie* highestRatedMovie = FindHighestRatedMovie(movies);
    highestRatedMovie->PrintMovieData();

    double averageRuntime = CalculateAverageRuntime(movies);
    cout << "\nAverage Runtime: " << averageRuntime << " minutes\n";

    for (Movie* movie : movies) {
        delete movie;
    }
    return 0;
}