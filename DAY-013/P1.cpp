// Problem Link: https://leetcode.com/problems/convert-the-temperature/description/
// Problem Name: 2469. Convert the Temperature (LeetCode)
// Solution: accepted Submission

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> v; 
        cout<<setprecision(5)<<fixed;
        double Kelvin = celsius + 273.15;
        double Fahrenheit = (celsius * 1.80) + 32.00;
        v.push_back(Kelvin);
        v.push_back(Fahrenheit);
        return v;
    }
};

