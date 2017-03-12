//
//  main.cpp
//  Calc
//
//  Created by Robin on 11/03/2017.
//  Copyright © 2017 XIPU.Inc. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cout << "Your number: ";
    int n;
    cin>>n;

    unsigned int f=1;
    for (int i=1;i<=n;i++)
    {
    f=f*i;
    
    }
    if (n<0){
        cout<<"you cant put negative number, dumbass!"<<endl;
    }
    else {
        cout << "Your result is: " << f<<endl;

    }
    return 0;
}
