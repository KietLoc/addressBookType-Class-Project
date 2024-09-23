#pragma once

#include <iostream>
#include <string>

using namespace std;

class addressType {
private:
    string address;
    string city;
    string state;
    int zipcode;

public:
    // Constructor
    addressType(string address = "", string city = "", string state = "XX", int zipcode = 10000);

    // Setters
    void setAddress(string address);
    void setCity(string city);
    void setState(string state);
    void setZipcode(int zipcode);

    // Getters
    string getAddress() const;
    string getCity() const;
    string getState() const;
    int getZipcode() const;

    // Print method
    void print() const;
};