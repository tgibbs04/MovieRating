#include "movie.h"

Movie::Movie(std::string t, std::string d, int r, int i, double rate) {
    // for invalid inputs
    if (r < 0) {
        throw std::invalid_argument("Runtime must be >= 0");
    }

    if (rate < 0.0 || rate > 10.0) {
        throw std::invalid_argument("Rating must be between 0 and 10");
    }

    title = t;
    director = d;
    runtime = r;
    id = i;
    rating = rate;
}


//returns title
std::string Movie::GetTitle(){
    return title;
}

 //returns title
std::string Movie::GetDirector(){
    return director;
}

//returns rating
double Movie::GetRating(){
    return rating;
}

//returns the runtime
int Movie::GetRuntime(){
    return runtime;
}

// Print the movie details
void Movie::PrintMovieData() {
    std::cout << "Movie ID: " << id << std::endl;
    std::cout << "Title: " << title << std::endl;
    std::cout << "Director: " << director << std::endl;
    std::cout << "Runtime: " << runtime << " minutes" << std::endl;
    std::cout << "Rating: " << rating << "/10" << std::endl; 
}
