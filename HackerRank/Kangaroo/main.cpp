//
//  main.cpp
//  Kangaroo
//
//  Created by Zhiyong Yang on 8/18/16.
//  Copyright © 2016 Andrew Yang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    
    if(v2 >= v1)
        cout << "NO" << endl;
    else {
        if(0 == (x2 - x1) % (v1 - v2))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}
