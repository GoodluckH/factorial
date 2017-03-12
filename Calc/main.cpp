//
//  main.cpp
//  Calc
//
//  Created by Robin on 11/03/2017.
//  Copyright © 2017 XIPU.Inc. All rights reserved.
//

#include <iostream>
#include<cstring>

using namespace std;




 
int main(int argc, const char * argv[]) {
    double n;                   //declare variables
    double f;
    
    double *p = new double;     //Create pointer p and allocate it to the heap
    p=&f;                       /* assign value of f to pointer p*/
    

    cout << "Your number: ";
    cin>>n;
    if (n<0){
        cout<<"you cant put negative number, dumbass!"<<endl;
        return 0;
    }
    
    f=1;                        //calculation begins
    for (int i=1; i<=n; i++)
    {
    f=f*i;
    }
   
   if (n>15)
    {
        cout << n;
        std::cout.precision(3);
        std::cout << " factorial result is: " <<std::scientific;
        std::cout << *p<<endl;
    }
    else
    {
        
        cout << n;
        std::cout.precision(0);
        std::cout <<" factorial is: "<<std::fixed;
        std::cout << *p<<endl;
    }
    
    
    return 0;
}
