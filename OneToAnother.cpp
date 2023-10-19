#include <iostream>
#include <string>
#include "JSimple.hpp"
#include <stdlib.h>
#include<windows.h>   

float ConvertToMeters(float value, int measurement) {
    switch (measurement) {
    case 1:  // Millimeter to meter
        return value / 1000.0;
    case 2:  // Inch to meter
        return value * 0.0254;
    case 3:  // Centimeter to meter
        return value / 100.0;
    case 4:  // Meter (no conversion needed)
        return value;
    case 5:  // Yard to meter
        return value * 0.9144;
    case 6:  // Kilometer to meter
        return value * 1000.0;
    case 7:  // Mile to meter
        return value * 1609.34;
    default:
        return 0.0;  // Invalid measurement
    }
}

float ConvertFromMeters(float value, int measurement) {
    switch (measurement) {
    case 1:  // Millimeter
        return value * 1000.0;
    case 2:  // Inch
        return value / 0.0254;
    case 3:  // Centimeter
        return value * 100.0;
    case 4:  // Meter (no conversion needed)
        return value;
    case 5:  // Yard
        return value / 0.9144;
    case 6:  // Kilometer
        return value / 1000.0;
    case 7:  // Mile
        return value / 1609.34;
    default:
        return 0.0;  // Invalid measurement
    }
}

int main()
{    
    while (true) {
        std::cout << "Table Of Measurements: Millimeter [1], Inch [2], Centimeter [3], Meter [4], Yard [5], Kilometer [6], Mile [7]\n";

        float firstValue = std::stof(CreateInput("First Value: "));
        int firstMeasurement = std::stoi(CreateInput("First Measurement: "));
        float secondValue = std::stof(CreateInput("Second Value: "));
        int secondMeasurement = std::stoi(CreateInput("Second Measurement: "));

        float inMeters = ConvertToMeters(firstValue, firstMeasurement);
        float result = ConvertFromMeters(inMeters, secondMeasurement) * secondValue;

        std::cout << "Result: " << result << std::endl;

        Sleep(3000);
        system("CLS");
    }
    return 0;
}
