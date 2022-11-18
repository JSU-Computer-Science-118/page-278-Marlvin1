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
    int numOfVolunteers;
    int numOfBoxesSold;
    int totalNumOfBoxesSold;
    double costOfOneBox;
    
    cout<<fixed<<showpoint<<setprecision(2);
    
    cout<<"Line 14: Enter each volunteers name and the number of boxes"<<endl<<"    sold by each volunteer, ending with -1: "<<endl;
    
    totalNumOfBoxesSold =0;
    numOfVolunteers = 0;
    
    cin>>name;
    
    while(name != SENTINEL)
    {
        cin>>numOfBoxesSold;
        totalNumOfBoxesSold = totalNumOfBoxesSold + numOfBoxesSold;
        numOfVolunteers++;
        cin>>name;
    }
    cout<<endl;
    
    cout<<"Line 26: The total number of boxes sold: "<<totalNumOfBoxesSold<<endl;
    
    cout<<"Line 27: Enter the cost of one box: ";
    cin>>costOfOneBox;
    cout<<endl;
    
    cout<<"Line 30: The total money made by selling cookies: $"<<totalNumOfBoxesSold*costOfOneBox<<endl;
    
    if (numOfVolunteers != 0 )
    {
        cout<<"Line 32: The average number of boxes sold by each volunteer: "<<totalNumOfBoxesSold/numOfVolunteers<<endl;
    }

    return 0;
}

