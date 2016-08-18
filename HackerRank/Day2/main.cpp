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
    int n;
    int t;
    long long s = 0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
        cin >> t;
        s += t;
    }
    cout << s << endl;
    return 0;
}
