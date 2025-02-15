#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "movie.h"
#include "movie_factory.h"

TEST_CASE("Testing Movie Constructor and getMethods"){
    std::string title = "Star Wars";
    std::string director = "Lucas";
    int runtime = 136;
    int id = 1;
    double rating = 10;

    Movie movie(title, director, runtime, id, rating);

    REQUIRE(movie.GetTitle() == title);
    REQUIRE(movie.GetDirector() == director);
    REQUIRE(movie.GetRuntime() == runtime);
    REQUIRE(movie.GetRating() == rating);
}

TEST_CASE("Testing Movie Constructor with invalid parameter"){
    std::string title = "Star Wars Holiday Special";
    std::string director = "Lucas";
    int id = 1;

    REQUIRE_THROWS_AS(Movie(title, director, -1, id, 1), std::invalid_argument);
    REQUIRE_THROWS_AS(Movie(title, director, 60, id, -1), std::invalid_argument);
}

TEST_CASE("CreateMovies valid movies") {
    std::vector<std::string> titles = {"Movie1", "Movie2"};
    std::vector<std::string> directors = {"Director1", "Director2"};
    std::vector<int> runtimes = {120, 90};
    std::vector<int> ids = {1, 2};
    std::vector<double> ratings = {8.5, 7.5};

    std::vector<Movie*> movies = CreateMovies(titles, directors, runtimes, ids, ratings);

    REQUIRE(movies.size() == 2);
    REQUIRE(movies[0]->GetTitle() == "Movie1");
    REQUIRE(movies[1]->GetTitle() == "Movie2");
    REQUIRE(movies[0]->GetDirector() == "Director1");
    REQUIRE(movies[1]->GetDirector() == "Director2");
    REQUIRE(movies[0]->GetRuntime() == 120);
    REQUIRE(movies[1]->GetRuntime() == 90);
    REQUIRE(movies[0]->GetRating() == 8.5);
    REQUIRE(movies[1]->GetRating() == 7.5);
}

TEST_CASE("CreateMovies With different sized vectors") {
    std::vector<std::string> titles = {"Movie1", "Movie2"};
    std::vector<std::string> directors = {"Director1"};
    std::vector<int> runtimes = {120, 90};
    std::vector<int> ids = {1, 2};
    std::vector<double> ratings = {8.5, 7.5};

    REQUIRE_THROWS_AS(CreateMovies(titles, directors, runtimes, ids, ratings), std::invalid_argument);
}

TEST_CASE("CreateMovies empty vectors") {
    std::vector<std::string> titles = {};
    std::vector<std::string> directors = {};
    std::vector<int> runtimes = {};
    std::vector<int> ids = {};
    std::vector<double> ratings = {};

    std::vector<Movie*> movies = CreateMovies(titles, directors, runtimes, ids, ratings);
    REQUIRE(movies.size() == 0);
}

TEST_CASE("CreateMovies with min and max vals") {
    std::vector<std::string> titles = {"Movie1", "Movie2"};
    std::vector<std::string> directors = {"Director1", "Director2"};
    std::vector<int> runtimes = {0, 60};  // min run time
    std::vector<int> ids = {1, 2};
    std::vector<double> ratings = {0.0, 10.0};  // min and max ratings

    std::vector<Movie*> movies = CreateMovies(titles, directors, runtimes, ids, ratings);

    REQUIRE(movies[0]->GetRuntime() == 0);
    REQUIRE(movies[1]->GetRuntime() == 60);
    REQUIRE(movies[0]->GetRating() == 0.0);
    REQUIRE(movies[1]->GetRating() == 10.0);
}

TEST_CASE("CreateMovies with invalid runtime and rating") {
    std::vector<std::string> titles = {"Movie1"};
    std::vector<std::string> directors = {"Director1"};
    std::vector<int> runtimes = {-120};
    std::vector<int> ids = {1};
    std::vector<double> ratings = {8.5};

    REQUIRE_THROWS_AS(CreateMovies(titles, directors, runtimes, ids, ratings), std::invalid_argument);

    std::vector<int> runtimes2 = {120};
    std::vector<double> ratings2 = {-8.5};

    REQUIRE_THROWS_AS(CreateMovies(titles, directors, runtimes2, ids, ratings2), std::invalid_argument);
}