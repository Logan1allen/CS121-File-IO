# CS121-File-IO
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

create int main
    call all varible that I will need
    std::ifstream inFile;
    std::string currentLine;
    std::stringstream converter;
    std::stringstream ss;
    int num1, num2, sum;
    std::string sNum1, sNum2, text;

    open the file data.csv

    use a while loop called getline with the parameters infile and currentline
        clear the stringStream
        clear the converter

        string stream currentline
        define the setup/ or sort of layout of the data in the file
        getline(ss, sNum1, ',')
        getline(ss, sNum2, ',')
        getline(ss, text)

        convert sNum1 to num1
        clear the converter

        convert sNum2 to num2
        clear the converter

        create sum which adds ints num1 and num2
        create a forloop that loops for sum amount of times
        it will be used to print out the text the correct number of times

        end main
