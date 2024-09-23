#pragma once

#include <iostream>
#include <string>
#include <limits>

using namespace std;

class addressType 
{

public:
    // Default Constructor
    //addressType() : address(""), city(""), state(""), zipcode(0) {}
     addressType() 
    {
        address = "";
        city = "";
        state = "";
        zipcode = 0;
    }

    // Constructor with parameters
    addressType(string addr = "", string cty = "", string st = "XX", int zip = 10000)
    {
        address = addr;
        city = cty;
        state = st;
        zipcode = zip;
    }

    // Setters
    void setAddress(string addr) { this->address = addr; } 
    void setCity(string cty) { this->city = cty; }
    //void setState(string st) { this->state = st; }
    //void setZipcode(int zip) { this->zipcode = zip; }

    // Set state
    void setState(string st) {
        if (st.length() != 2) {
            cerr << "Error: Invalid state code. State code must be 2 characters." << endl;
            return;
        }
        this->state = st; 
    }

    // Set zipcode
    void setZipcode(int zip) {
        if (zip < 10000 || zip > 99999) {
            cerr << "Error: Invalid zip code. Zip code must be 5 digits." << endl;
            return;
        }
        this->zipcode = zip; 
    }


    // Getters
    string getAddress() const{return address;}
    string getCity() const{return city;}
    string getState() const{return state;}
    int getZipcode() const{return zipcode;}

    // Print method
    void print() const
    {
        cout << address << endl;
        cout << city << " " << state << ", " << zipcode << endl;
    }

private:
string address;
string city;
string state;
int zipcode;

};