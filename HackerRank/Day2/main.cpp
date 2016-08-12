//
//  main.cpp
//  Day2
//
//  Created by Zhiyong Yang on 8/12/16.
//  Copyright © 2016 Andrew Yang. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    double meal;
    int tipPercent;
    int taxPercent;
    cin >> meal >> tipPercent >> taxPercent;
    cout << "The total meal cost is " << round(meal * (100 + tipPercent + taxPercent)/100.0) << " dollars." << endl;
    return 0;
}
