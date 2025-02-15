 //movie.h

#ifndef MOVIE_H
#define MOVIE_H

#include <string>
#include <iostream>
#include <stdexcept>

 class Movie {
    private:
      int id;
    
      std::string title;
      std::string director;
      int runtime; // runtime in minutes >= 0
      double rating; // range 0-10

    public:
      Movie(std::string t, std::string d, int r, int i, double rate);
      std::string GetTitle(); //returns title
      std::string GetDirector(); //returns title
      double GetRating(); //returns rating
      int GetRuntime(); //returns the runtime
      void PrintMovieData(); // to print details
  };

#endif