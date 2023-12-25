#include <stdio.h>
#define MAX_SIZE 9
void merge(int arr[], int low, int mid, int high){
  int i, k, j, n1, n2;
  i = j = 0;
  k = low;
  n1 = mid - low + 1;
  n2 = high - mid;

  int arr1[n1], arr2[n2];

  for(int n = 0; n < n1; n++){
    arr1[n] = arr[n + low];
  }
  for(int n = 0; n < n2; n++){
    arr2[n] = arr[mid + n + 1];
  }

  while(i < n1 && j < n2){
    if(arr1[i] > arr2[j]){
      arr[k] = arr2[j];
      j++;
    }
    else{
      arr[k] = arr1[i];
      i++;
    }
    k++;
  }
  while(i < n1){
    arr[k] = arr1[i];
    i++;
    k++;
  }
  while(j < n2){
    arr[k] = arr2[j];
    j++;
    k++;
  }
}

void merge_sort(int arr[], int low, int high){
  int mid = low + (high - low) / 2;
  if(low < high){
    merge_sort(arr, low, mid);
    merge_sort(arr, mid+1, high);
    merge(arr, low, mid, high);
  }
}

int main(){
  int arr1[] = {3,2,6,1,9,7,5,8,4};
  merge_sort(arr1, 0, MAX_SIZE - 1);
  for(int i = 0; i < 9 ; i++){
    printf("%d, ",arr1[i]);
  }
} 