//
//  main.cpp
//  HackerRank
//
//  Created by Zhiyong Yang on 8/11/16.
//  Copyright © 2016 Andrew Yang. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    int is;
    double ds;
    string ss;
    
    // Read and save an integer, double, and String to your variables.
    cin >> is;
    cin >> ds;
    cin.ignore(); // important, skip last newline character
    getline(cin, ss);
    
    // Print the sum of both integer variables on a new line.
    cout << (i + is) << endl;
    cout.precision(1);
    // Print the sum of the double variables on a new line.
    cout << fixed << (d + ds) << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s << ss << endl;
    
    return 0;
}
