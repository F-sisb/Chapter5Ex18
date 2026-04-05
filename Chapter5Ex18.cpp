/*
Programmer: Frank Sisbarro
Filename: Chapter2Ex18.cpp
Date: April 5th 2026
Requirements:
Program must display a bar chart showing the population growth of
a small town at 20 year intervals over the last 100 years. The chart should read in
rounded population figures of 1000 people each. The years are 1900, 
1920, 1940, 1960, 1980, and 2000. Each year should display the date and 
a bar consisting of one (*) for each 1000 people. Used attached ppl.txt file
for the program data. 

1. Open the .txt file
    a. place .txt in solution folder
2. Read the .txt file
    a. extract data point for first year
    b. go to 3.
3. Turn data point from .txt to figure "*"
    a. divide extrated data point by 1000
    b. count how many times 1000 goes into the number
    c. convert to figure
    d. goto 2. unless all data points estracted
4. Print data point derived figures adjacent to year.
    a. print figures adjacent to corresponding years.

*/

#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    fstream censusdata("people-1.txt", ios::in);
     int num,figure;

    
     if (censusdata >> num)
     {
         cout << "1900: ";

         figure = (num / 1000);

         for (int count = 1; count <= figure; count++)
         {
             cout << "*";
             

         }

         cout << "\n";

         censusdata >> num;

         cout << "1920: ";
         figure = (num / 1000);
         
         for (int count = 1; count <= figure; count++)
         {
             cout << "*";


         }
         cout << "\n";
         censusdata >> num;
         cout << "1940: ";
         figure = (num / 1000);

         for (int count = 1; count <= figure; count++)
         {
             cout << "*";


         }
         cout << "\n";
         censusdata >> num;
         cout << "1960: ";
         figure = (num / 1000);

         for (int count = 1; count <= figure; count++)
         {
             cout << "*";


         }
         cout << "\n";
         censusdata >> num;
         cout << "1980: ";
         figure = (num / 1000);

         for (int count = 1; count <= figure; count++)
         {
             cout << "*";


         }
         cout << "\n";

         censusdata >> num;
         cout << "2000: ";
         figure = (num / 1000);

         for (int count = 1; count <= figure; count++)
         {
             cout << "*";


         }
         cout << "\n";

     }
    
}
    
    





