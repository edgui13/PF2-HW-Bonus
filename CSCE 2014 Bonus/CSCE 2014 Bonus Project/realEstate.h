#ifndef REALESTATE_H
#define REALESTATE_H

//-----------------------------------------------------------
//  Purpose:    Header file for the real estate class.
//  Author:     Edgar ALcocer
//-----------------------------------------------------------
#include <iostream>
using namespace std;

//-----------------------------------------------------------
// Define the realestate class interface
//-----------------------------------------------------------
class RealEstate
{
public:
    // Constructors
    RealEstate();
    RealEstate(string houseNumber, string streetName, string city, string state, string zipCode, int askingPrice, int numBedrooms, float numBathrooms, int houseSize, float lotSize);
    RealEstate(const RealEstate &realEstate);
    ~RealEstate();

    // Get methods
    string getHouseNumber() const;
    string getStreetName() const;
    string getCity() const;
    string getState() const;
    string getZipCode() const;
    int getAskingPrice() const;
    int getNumBedrooms() const;
    float getNumBathrooms() const;
    int getHouseSize() const;
    float getLotSize() const;

    // Set methods
    void setHouseNumber(string houseNumber);
    void setStreetName(string streetName);
    void setCity(string city);
    void setState(string state);
    void setZipCode(string zipCode);
    void setAskingPrice(int askingPrice);
    void setNumBedrooms(int numBedrooms);
    void setNumBathrooms(float numBathrooms);
    void setHouseSize(int houseSize);
    void setLotSize(float lotSize);

    // Other methods
    void print() const;

private:
    string HouseNumber;
    string StreetName;
    string City;
    string State;
    string ZipCode;
    int AskingPrice;
    int NumBedrooms;
    float NumBathrooms;
    int HouseSize;
    float LotSize;
    // vector<RealEstate> RealEstate;
};

#endif