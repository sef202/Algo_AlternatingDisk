//
//  main.cpp
//  Algorithm_Disk1
//
//  Created by Sam on 2/10/20.
//  Copyright © 2020 Sam. All rights reserved.
//
//  Bubble Sort Method
#include <iostream>

int main(int argc, const char * argv[]) {
    std::string arr[] = {"L", "D", "L", "D", "L", "D", "L", "D"};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for (int i = 0; i < n-1; i++){
        if(i % 2 == 0){
            std::cout << arr[i];
                std::cout << "yes";
            }
        }
    
    
    
    
    
    
//    ///bubble sort
//    int n = sizeof(arr)/sizeof(arr[0]);
//    int count = 0;
//    bool swap_it = true;
//    std::string temp;
//
//    for(int k = 1; k < n-1; k++){
//       swap_it = false;
//
//        for(int i = 0; i < n-k-1; i++)
//            if(arr[i] > arr[i+1]){
//                int temp = arr[i];
//                arr[i] = arr[i+1];
//                arr[i+1] = temp;
//                swap_it = true;
//                count ++;
//            }
//    }
//    }
//
//    for(int j = 0; j < n; j++)
//    {
//    std::cout << arr[j] << ' ';
//    }
////    std::cout << "\n" << "Number of swaps: " << count; // bubble sort
//    std::cout << "\n";
    return 0;

}
