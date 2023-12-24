#include <stdio.h>
/*
Selection sort is a simple sorting algorithm that repeatedly selects the
minimum (or maximum) element from an unsorted portion of the array and 
swaps it with the first unsorted element. This process is repeated until
the entire array is sorted. The algorithm has a time complexity of O(n^2)
for an array of n elements.
*/
void selection(int arr[], int arr_size){
  int min_index, temp;
  for(int i = 0; i < arr_size ; i++){
    min_index = i;
    for(int j = i; j < arr_size ; j++){
      if(arr[j] < arr[min_index]){
        min_index = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] = temp;
  }
}
int main(){
  int arr1[9] = {3,2,6,1,9,7,5,8,4};
  selection(arr1,9);
  for(int i = 0; i < 9 ; i++){
    printf("%d, ",arr1[i]);
  }
}