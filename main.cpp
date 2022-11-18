// Marlvin Goremusandu        November  15 2022
// J# J00975960
//Chapter 5 // EXAMPLE      page 278

#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

const string SENTINEL = "-1";

int main()
{
    string name;
    int numOfVolunteers = 0;
    int numOfBoxesSold = 0;
    int totalNumOfBoxesSold = 0;
    double costOfOneBox;
 
    cout<<fixed<<showpoint<<setprecision(2);
    string * ptr = nullptr;
    ptr = new string;
    cin>> *ptr;
    while (*ptr != SENTINEL)
    {
        numOfVolunteers++;
        cin>>numOfBoxesSold;
        totalNumOfBoxesSold += numOfBoxesSold;
        cin>> *ptr;
    }
    cin>>costOfOneBox;
    cout<<"Total number of boxes sold: "<<totalNumOfBoxesSold<<endl;
    cout<<"Total money made: $"<<totalNumOfBoxesSold*costOfOneBox<<endl;
    if (numOfVolunteers != 0)
        cout<<"Average number of boxes sold by each person: "<<totalNumOfBoxesSold/numOfVolunteers<<endl;
    else
        cout<<"No input."<<endl;
 


    return 0;
}
