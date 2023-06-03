#include <fstream>
#include <iostream>
#include "realEstate.h"
#include <vector>
#include <string>

//-----------------------------------------------------------
//  Trim white space from front and back of string
//-----------------------------------------------------------
string trim(const string str)
{
    int start = 0;
    int end = str.length() - 1;
    while ((start < int(str.length())) && (isspace(str[start])))
        start++;
    while ((end > start) && (isspace(str[end])))
        end--;
    return str.substr(start, (end - start + 1));
}

//-----------------------------------------------
void readFile(vector<RealEstate> &realEstate, string fileName)
{
    RealEstate input;
    ifstream din;
    din.open(fileName);
    ofstream dout;
    // determine which file to write into
    if (fileName == "houses_big.txt")
    {
        dout.open("realEstateBH.csv");
    }
    else if (fileName == "houses_small.txt")
    {
        dout.open("realEstateSH.csv");
    }

    if (din.fail())
    {
        cout << "Could not open unknown file" << endl;
    }
    else if (dout.fail())
    {
        cout << "Error could not open output file" << endl;
    }
    else
    {
        // loop over vector
        while (!din.eof())
        {
            // variables that are not used only for trash
            char delim1 = ',';
            char delim2 = ' ';
            string trash1;
            string trash2;
            string trash3;
            string trash4;
            // variables that are used throughout the program
            string houseNumber;
            string streetName;
            string city;
            string state;
            string zipCode;
            int askingPrice;
            int numBedrooms;
            float numBathrooms;
            int houseSize;
            float lotSize;

            getline(din, houseNumber, delim2);       // get the address infomation until the delim is found
            input.setHouseNumber(trim(houseNumber)); // input the address information into the vector
            dout << input.getHouseNumber() << ",";   // output the information into the specified .csv file
            getline(din, streetName, delim1);
            input.setStreetName(trim(streetName));
            dout << input.getStreetName() << ",";
            getline(din, city, delim1);
            input.setCity(trim(city));
            dout << input.getCity() << ",";
            din >> state;
            input.setState(trim(state));
            dout << input.getState() << ",";
            din >> zipCode;
            input.setZipCode(zipCode);
            dout << input.getZipCode() << ",";
            din >> askingPrice;
            input.setAskingPrice(askingPrice);
            dout << input.getAskingPrice() << ",";
            din >> numBedrooms;
            din >> trash1;
            input.setNumBedrooms(numBedrooms);
            dout << input.getNumBedrooms() << ",";
            din >> numBathrooms;
            din >> trash2;
            input.setNumBathrooms(numBathrooms);
            dout << input.getNumBathrooms() << ",";
            din >> houseSize;
            din >> trash3;
            input.setHouseSize(houseSize);
            dout << input.getHouseSize() << ",";
            din >> lotSize;
            getline(din, trash4);
            input.setLotSize(lotSize);
            dout << input.getLotSize() << "," << endl;
            // pushback the input's information into the realEstate Vector
            // input.print();
            realEstate.push_back(input);
        }
    }
    dout.close();
    din.close();
}

int main()
{
    // intialize vector
    int selection;
    vector<RealEstate> RealEstateBH;
    vector<RealEstate> RealEstateSH;
    do
    {
        cout << "Welcome to the Bonus Project!!!" << endl;
        cout << "<><><><><><><><><><><><><><><><><><><>" << endl;
        cout << "1. read and write for big houses" << endl;
        cout << "2. read and write for small houses" << endl;
        cout << "3. To exit the program" << endl;
        cout << "Selection: ";
        cin >> selection;

        if (selection <= 0 || selection > 4)
        {
            cout << "Error!, please select an option between 1-2" << endl;
            cout << endl;
        }

        switch (selection)
        {
        case 1:
        {
            readFile(RealEstateBH, "houses_big.txt");
            cout << "The number of properties stored in the small house vector is: " << RealEstateBH.size() << endl;
            cout << endl;
            break;
        }
        case 2:
        {
            readFile(RealEstateSH, "houses_small.txt");
            cout << "The number of properties stored in the small house vector is: " << RealEstateSH.size() << endl;
            cout << endl;
            break;
        }
        case 3:
        {
            cout << "Thank you for using the real estate bonus Project!" << endl;
            break;
        }
        }
    } while (selection != 3);
}