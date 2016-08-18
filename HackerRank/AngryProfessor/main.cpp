//
//  main.cpp
//  AngryProfessor
//
//  Created by Zhiyong Yang on 8/18/16.
//  Copyright © 2016 Andrew Yang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        int arrive;
        int count = 0;
        cin >> n >> k;
        for(int a_i = 0;a_i < n;a_i++){
            cin >> arrive;
            if(arrive <=0) count++;
        }
        
        if(count >= k)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
