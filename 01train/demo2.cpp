//
// Created by muller on 8/26/18.
//
#include <map>
#include<iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
using  namespace std;

void  selectionSort(int arr[],int n){


    for (int i = 0; i < n; ++i) {
        int minIndex=i;
        for (int j = i+1; j < n; ++j) {
            if(arr[minIndex]>arr[j]){
                minIndex=j;

            }

        }
        swap(arr[i],arr[minIndex]);
    }
}

int main(){

    int a[10]={10,9,4,2,7,6,3,8,1,5};
    selectionSort(a,10);
    for (int i = 0; i < 10; ++i) {
       std::cout<<a[i]<<" ";

    }
   std::cout<<endl;
    return 0;
}