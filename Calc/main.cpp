//
//  main.cpp
//  Calc
//
//  Created by Robin on 11/03/2017.
//  Copyright © 2017 XIPU.Inc. All rights reserved.
//

#include <iostream>
#include<cstring>

//using namespace std;


int max = 5000;

void display(int arr[]){
    int ctr = 0;
    for (int i=0; i<max; i++){
        if (!ctr && arr[i])         ctr = 1;
        if(ctr)
            
            std::cout<<arr[i]<<std::scientific;
    }
}


void factorial(int arr[], int n){
    if (!n) return;
    int carry = 0;
    for (int i=max-1; i>=0; --i){
        arr[i] = (arr[i] * n) + carry;
        carry = arr[i]/10;
        arr[i] %= 10;
    }
    factorial(arr,n-1);
}

int main(){
    int *arr = new int[max];
    std::memset(arr,0,max*sizeof(int));
    arr[max-1] = 1;
    int num;
    std::cout<<"Enter the number: ";
    std::cin>>num;
    std::cout<<"factorial of "<<num<<" is :\n"<<std::scientific;
    factorial(arr,num);
    display(arr);
    delete[] arr;
    return 0;
}/*
 long long int factorial(int N)
{
    long long ans = 1;
    int i;
    for(i=1; i <= N; i++)
        ans *= i;
    return ans;
}


int main(int argc, const char * argv[]) {
    double n;                   //declare variables
    double f;
    
    double *p = new double;     //Create pointer p and allocate it to the heap
    p=&f;                       /* assign value of f to pointer p*/
    
/*
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
} */
