#include <stdio.h>
/*
Bubble sort is a simple sorting algorithm that repeatedly steps through 
the list, compares adjacent elements, and swaps them if they are in the 
wrong order. This process is repeated until the list is sorted
*/
void bubble(int arr[], int arr_size){
  for(int i = 0; i < arr_size; i++){
    /* in each iterate the last item will be sorted so we don't need to 
    deal with it that's why the condition i s (j < arr_size - i - 1) */
    for(int j = 0; j < arr_size - i -1; j++){
      if(arr[j] > arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}
int main(){
  int arr1[9] = {6,2,3,1,8,7,5,9,4};
  bubble(arr1,9);
  for(int i = 0; i < 9 ; i++){
    printf("%d, ",arr1[i]);
  }
}