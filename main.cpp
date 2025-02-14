#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

int main(){
    std::ifstream inFile;
    std::string currentLine;
    std::stringstream converter;
    std::stringstream ss;
    int counter;
    std::string sCounter;
    std::string text;

    inFile.open("data.csv");
  while (getline(inFile, currentLine)){
    //temporary stream for parsing commas

    //clear the stringstreams
    ss.clear();
    ss.str("");
    converter.clear();
    converter.str("");

    ss.str(currentLine);
    std::cout << currentLine << std::endl;

    getline(ss, sCounter, ',');

    //read text, newline is default delimiter
    getline(ss, text);

    // only counter needs to be converted, so send it
    // to converter stream
    converter << sCounter;
    converter >> counter;

    std::cout << counter << " " << text << std::endl;


  }
  inFile.close();
} // end main
