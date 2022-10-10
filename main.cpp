#include <iostream>
#include <fstream>
#include <vector>

using namespace std;




void readData(const string &inputFile, vector<double> &v1, vector<double> &v2);
double interpolation(double, const vector<double> &, const vector<double> &);
bool isOrdered(const vector<double> &);
void reorder(vector<double> &, vector<double> &);

int main () {

    vector<double> angles;
    vector<double> coefficients;






    // might have to get rid of this??? idk 
    return 0;

}


void readData(const string &inputFile, vector<double> &v1, vector<double> &v2) {
// bring in and open data file 
ifstream flightData;

flightData.open(inputFile);

// check if file opened correctly
if (!flightData.is_open())  {

// output error message and return 1 if it did not open correctly
 cout << "Error opening " << inputFile << endl;
      exit(1);
   }
// fill in angles vector (v1) 


// fill in coefficients vector (v2)
}


