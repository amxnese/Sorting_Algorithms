#include <stdio.h>
/*
QuickSort is a divide-and-conquer sorting algorithm that selects a pivot 
element, partitions the array into two subarrays, and recursively sorts 
them. The pivot is placed in its final sorted position, and the process 
is repeated for the subarrays until the entire array is sorted. It's known
for its efficiency and is widely used in practice.
The time complexity of QuickSort is typically O(n log n) on average. In 
the worst case, however, when the pivot selection consistently results 
in an unbalanced partitioning, the time complexity can degrade to O(n^2).
*/
int partition(int arr[], int low, int high){
  int temp;
  int pivot_index = high;
  while(1){
    while(arr[low] < arr[pivot_index]){
      low++;
    }
    while(arr[high] >= arr[pivot_index]){
      high--;
    }
    if(low > high){
      break;
    }
    temp = arr[low];
    arr[low] = arr[high];
    arr[high] = temp;
  }
  temp = arr[low];
  arr[low] = arr[pivot_index];
  arr[pivot_index] = temp;
  return low;
}

void quick_sort(int arr[], int low, int high){
  if(low >= high){
    return;
  }
  int mid = partition(arr, low, high);
  quick_sort(arr, low, mid-1);
  quick_sort(arr, mid+1, high);
}

int main(){
  int arr1[9] = {7,5,2,9,4,1,3,8,6};
  quick_sort(arr1,0,8);
  for(int i = 0; i < 9 ; i++){
    printf("%d, ",arr1[i]);
  }
}

