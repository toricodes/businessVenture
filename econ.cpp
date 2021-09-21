#include <iostream>
#include <cmath>
#include <iomanip>
#include <cfloat>

//void costsOfProduction(int TC, int TVC, int TFC, int ATC, int MC, int AVC, int AFC);
using namespace std;


int main()
{
    string industryOfInterest;
    string answer1;
    cout << " Enter an industry of interest to start a business. " << endl;
    cin >> industryOfInterest;
    cout << " You would like to start a " << industryOfInterest << " business. " << endl;
    cin >> answer1;


    string specfProd;
    cout << " What kind of product do you want to sell? " << endl;
    cin >> specfProd;
    cout << " So you want to sell " << specfProd << " ? " <<endl;
    string answer2;
    cin >> answer2;

    float annRev;
    cout << " How much do you expect to make in the first year? " << endl;
    cin >> annRev;
    cout << " You expect to make " << setprecision(4) << "$" << annRev << " in the first year " << " ? " << endl;
    //cout << "Your total bill equals to: " << setprecision(2) << "$" << totalBillAmount << endl;
    string answer3;
    cin >> answer3;

    //costsOfProduction(string, string, string, string, string, string, string)

}

//void costsOfProduction(string a, string b, string c, string d, string e, string f, string g)


