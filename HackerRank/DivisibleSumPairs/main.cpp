//
//  main.cpp
//  DivisibleSumPairs
//
//  Created by Zhiyong Yang on 8/18/16.
//  Copyright © 2016 Andrew Yang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    int k;
    int s = 0;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    for(int i =0; i < n ;i++){
        for(int j = i + 1; j < n;j++){
            if(0 == (a[j] + a[i])%k){
                s++;
            }
        }
    }
    cout << s << endl;
    return 0;
}
