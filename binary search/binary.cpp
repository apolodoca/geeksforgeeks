#include <iostream>

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int max = n - 1, min = 0, mid;
        if(k <= arr[max] && k >= arr[min]){
            while(max - min > 0){
                 mid = (min + max)/2;
                if(k > arr[mid]){
                    min = mid + 1;
                }
                else{
                    max = mid;
                }
            }
            if(k == arr[min]){
                return min;
            }
            else if(k == arr[max]){
                return max;
            }
            else return -1;
        }

        else return -1;


    }
};
