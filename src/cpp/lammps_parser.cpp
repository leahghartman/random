// The following is 


// Include headers
#include <iostream>   // Provides functionality for standard input/output streams
#include <fstream>    // Short for "filestream" and used to read/write to files
#include <vector>

// Define a data structure for each atom (variable names are based on the format of the dump files)
struct Atom {
  int id{};
  int type{};
  double x{}, y{}, z{};
};

// Define a data structure for each timestep (variable names are based on the format of the dump files)
struct Timestep{
  int timestep{};
  
  std::vector<Atom> atoms{};    // An array of Atom objects that is initialized to be empty
  
};

// Define a function that parses the entire 


int main() {

  return 0;
}
