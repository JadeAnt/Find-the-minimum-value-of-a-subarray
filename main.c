#include <stdio.h>
#include <stdlib.h>

int FindMin(int array[], int startIndex){
  int minValue = array[startIndex];
  int minIndex = startIndex;
  int i;
  
  for(i = minIndex + 1; i < sizeof(array); i++){
    if(array[i] <= minValue){
      minValue = array[i];
      minIndex = i;
    }
    
  }

  return minIndex;
  
}



int main(){
  int i, count, n, input, minIndex, final_Index, value;
  
  
  for(i = 0; i < n; i++){
     count = i + 1;
     printf("Input array value %d / %d : \n", count, n); 
     scanf("%d", &input);
     array[i] = input;
  }
  
  printf("Input minimum index value in order to find min value of sub array: ");
  scanf("%d", &minIndex);
  
  finalIndex = FindMin(array[n], minIndex);
  
  printf("The minimum value of the sub array is %d at index %d ", array[final_Index], minIndex); 

}
