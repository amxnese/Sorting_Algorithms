#include <stdio.h>
/*
Insertion sort is a simple sorting algorithm that builds the final sorted 
array one element at a time. It takes each element and inserts it into its 
correct position by comparing it with the elements before it in the array. 
This process is repeated until all elements are in their proper places.
*/
void insertion(int arr[], int arr_size){
  for(int i = 0; i < arr_size; i++){
    int cur = i;
    // Swap elements if they are in the wrong order
    while(cur > 0 && arr[cur] < arr[cur-1]){
      int temp = arr[cur];
      arr[cur] = arr[cur-1];
      arr[cur-1] = temp;
      cur--;
    }
  }
}
int main(){
  int arr1[9] = {3,2,6,1,9,7,5,8,4};
  insertion(arr1,9);
  for(int i = 0; i < 9 ; i++){
    printf("%d, ",arr1[i]);
  }
}