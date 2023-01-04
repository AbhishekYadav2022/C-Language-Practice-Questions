# Bubble Sort Algorithm

__Bubble Sort__ is the simplest [sorting algorithm](https://www.geeksforgeeks.org/bubble-sort/) that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.

## How does Bubble Sort Work?
__Input:__ arr[] = {5, 1, 4, 2, 8}

___First Pass:___

* Bubble sort starts with very first two elements, comparing them to check which one is greater.
    * ( __5 1__ 4 2 8 ) –> ( __1 5__ 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1. 
    * ( 1 __5 4__ 2 8 ) –>  ( 1 __4 5__ 2 8 ), Swap since 5 > 4 
    * ( 1 4 __5 2__ 8 ) –>  ( 1 4 __2 5__ 8 ), Swap since 5 > 2 
    * ( 1 4 2 __5 8__ ) –> ( 1 4 2 __5 8__ ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.

___Second Pass:___

* Now, during second iteration it should look like this:
    * ( __1 4__ 2 5 8 ) –> ( __1 4__ 2 5 8 ) 
    * ( 1 __4 2__ 5 8 ) –> ( 1 __2 4__ 5 8 ), Swap since 4 > 2 
    * ( 1 2 __4 5__ 8 ) –> ( 1 2 __4 5__ 8 ) 
    * ( 1 2 4 __5 8__ ) –>  ( 1 2 4 __5 8__ ) 

___Third Pass:___ 

* Now, the array is already sorted, but our algorithm does not know if it is completed.
* The algorithm needs one whole pass without any swap to know it is sorted.
    * ( __1 2__ 4 5 8 ) –> ( __1 2__ 4 5 8 ) 
    * ( 1 __2 4__ 5 8 ) –> ( 1 __2 4__ 5 8 ) 
    * ( 1 2 __4 5__ 8 ) –> ( 1 2 __4 5__ 8 ) 
    * ( 1 2 4 __5 8__ ) –> ( 1 2 4 __5 8__ )

Follow the below steps to solve the problem:

* Run a nested for loop to traverse the input array using two variables __i__ and __j__, such that 0 ≤ i < n-1 and 0 ≤ j < n-i-1
* If __arr[j]__ is greater than __arr[j+1]__ then swap these adjacent elements, else move on
* Print the sorted array