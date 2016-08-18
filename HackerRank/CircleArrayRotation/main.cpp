//
//  main.cpp
//  CircleArrayRotation
//
//  Created by Zhiyong Yang on 8/17/16.
//  Copyright © 2016 Andrew Yang. All rights reserved.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Pass
int main(int argc, const char * argv[]) {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int array[100000];
    int n,k,q,m;
    
    cin >> n >> k >> q;
    
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    
    
    for(int i = 0; i < q; i++){
        cin >> m;
        int index = n -k + m;
        while (index < 0) {
            index += 100 * n;
        }
        cout << array[ index % n] << endl;
    }
    return 0;
}
