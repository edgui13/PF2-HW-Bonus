//----------------------------------------------
// Purpose: Implement address class node's
// Author:  Edgar Alcocer
//----------------------------------------------

#include <fstream>
#include "realEstate.h"
#include <iostream>
#include <vector>

//----------------------------------------------
RealEstate::RealEstate()
{
    HouseNumber = "";
    StreetName = "";
    City = "";
    State = "";
    ZipCode = "";
    AskingPrice = 0;
    NumBedrooms = 0;
    NumBathrooms = 0;
    HouseSize = 0;
    LotSize = 0;
}

//----------------------------------------------
RealEstate::RealEstate(string houseNumber, string streetName, string city, string state, string zipCode, int askingPrice, int numBedrooms, float numBathrooms, int houseSize, float lotSize)
{
    HouseNumber = houseNumber;
    StreetName = streetName;
    City = city;
    State = state;
    ZipCode = zipCode;
    AskingPrice = askingPrice;
    NumBedrooms = numBedrooms;
    NumBathrooms = numBathrooms;
    HouseSize = houseSize;
    LotSize = lotSize;
}

//----------------------------------------------
RealEstate::RealEstate(const RealEstate &realEstate)
{
    HouseNumber = realEstate.HouseNumber;
    StreetName = realEstate.StreetName;
    City = realEstate.City;
    State = realEstate.State;
    ZipCode = realEstate.ZipCode;
    AskingPrice = realEstate.AskingPrice;
    NumBedrooms = realEstate.NumBedrooms;
    NumBathrooms = realEstate.NumBathrooms;
    HouseSize = realEstate.HouseSize;
    LotSize = realEstate.LotSize;
}

//----------------------------------------------
RealEstate::~RealEstate()
{
}

//----------------------------------------------
string RealEstate::getHouseNumber() const
{
    return HouseNumber;
}

//----------------------------------------------
string RealEstate::getStreetName() const
{
    return StreetName;
}

//----------------------------------------------
string RealEstate::getCity() const
{
    return City;
}

//----------------------------------------------
string RealEstate::getState() const
{
    return State;
}

//----------------------------------------------
string RealEstate::getZipCode() const
{
    return ZipCode;
}

//----------------------------------------------
int RealEstate::getAskingPrice() const
{
    return AskingPrice;
}

//----------------------------------------------
int RealEstate::getNumBedrooms() const
{
    return NumBedrooms;
}

//----------------------------------------------
float RealEstate::getNumBathrooms() const
{
    return NumBathrooms;
}

//----------------------------------------------
int RealEstate::getHouseSize() const
{
    return HouseSize;
}

//----------------------------------------------
float RealEstate::getLotSize() const
{
    return LotSize;
}

//----------------------------------------------
void RealEstate::setHouseNumber(string houseNumber)
{
    HouseNumber = houseNumber;
}
//----------------------------------------------
void RealEstate::setStreetName(string streetName)
{
    StreetName = streetName;
}
//----------------------------------------------
void RealEstate::setCity(string city)
{
    City = city;
}
//----------------------------------------------
void RealEstate::setState(string state)
{
    State = state;
}
//----------------------------------------------
void RealEstate::setZipCode(string zipCode)
{
    ZipCode = zipCode;
}
//----------------------------------------------
void RealEstate::setAskingPrice(int askingPrice)
{
    AskingPrice = askingPrice;
}
//----------------------------------------------
void RealEstate::setNumBedrooms(int numBedrooms)
{
    NumBedrooms = numBedrooms;
}
//----------------------------------------------
void RealEstate::setNumBathrooms(float numBathrooms)
{
    NumBathrooms = numBathrooms;
}
//----------------------------------------------
void RealEstate::setHouseSize(int houseSize)
{
    HouseSize = houseSize;
}
//----------------------------------------------
void RealEstate::setLotSize(float lotSize)
{
    LotSize = lotSize;
}
//----------------------------------------------
void RealEstate::print() const
{
    cout << "This is the house number: " << HouseNumber << endl;
    cout << "This is the street name: " << StreetName << endl;
    cout << "This is the city: " << City << endl;
    cout << "This is the state: " << State << endl;
    cout << "This is the zip code: " << ZipCode << endl;
    cout << "This is the asking price: " << AskingPrice << endl;
    cout << "This is the num of bedrooms: " << NumBedrooms << endl;
    cout << "This is the num of bathrooms: " << NumBathrooms << endl;
    cout << "This is the house size: " << HouseSize << endl;
    cout << "This is the lot size: " << LotSize << endl;
    cout << endl;
}
