Algorithm Library | C++ Magicians STL Algorithm
For all those who aspire to excel in competitive programming, only having a knowledge about containers of STL is of less use till one is not aware what all STL has to offer. 
STL has an ocean of algorithms, for all < algorithm > library functions : Refer here.
Some of the most used algorithms on vectors and most useful one’s in Competitive Programming are mentioned as follows :

<======================================================******************************************======================================================>
                                                     Non-Manipulating Algorithms
                                                 <-------------------------------->
1. sort(first_iterator, last_iterator) ;
  – To sort the given vector.
                                                       
2. sort(first_iterator, last_iterator, greater<int>()) ;
  – To sort the given container/vector in descending order
  
3. reverse(first_iterator, last_iterator);
   – To reverse a vector. ( if ascending -> descending  OR  if descending -> ascending)
     
4. *max_element (first_iterator, last_iterator) ;
   – To find the maximum element of a vector.
     
5. *min_element (first_iterator, last_iterator) ;
   – To find the minimum element of a vector.
     
6. accumulate(first_iterator, last_iterator, initial value of sum) ;
 – Does the summation of vector elements
 
7. count(first_iterator, last_iterator,x);
  – To count the occurrences of x in vector.

 8. find(first_iterator, last_iterator, x);
  – Returns an iterator to the first occurrence of x in vector and points to last address of vector ((name_of_vector).end()) if element is not present in vector. 

 9. binary_search(first_iterator, last_iterator, x) ;
  – Tests whether x exists in sorted vector or not.

 10. lower_bound(first_iterator, last_iterator, x) ;
  – returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘x’.

 11. upper_bound(first_iterator, last_iterator, x);
  – returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘x’. 
                                                                    
12. arr.erase(position to be deleted) ;
   – This erases selected element in vector and shifts and resizes the vector elements accordingly.
                                                                    
13. arr.erase(unique(arr.begin(),arr.end()),arr.end()) ;
  – This erases the duplicate occurrences in sorted vector in a single line.
                                                                    
3. next_permutation(first_iterator, last_iterator);
  – This modified the vector to its next permutation.

4. prev_permutation(first_iterator, last_iterator) ;
  – This modified the vector to its previous permutation. 
                                                                                                                                                  
5. distance(first_iterator,desired_position); 
 – It returns the distance of desired position from the first iterator.This function is very useful while finding the index. 
                                                                    
 <===================================================***************************=====================================================================>                                                                   
 <---------------------------------------------------------------------------------------------------------------------------------------------------> 
                                                                    
                                                                    
   1. sort(first_iterator, last_iterator) ;
  – To sort the given vector.
                                                       
2. sort(first_iterator, last_iterator, greater<int>()) ;
  – To sort the given container/vector in descending order
  
3. reverse(first_iterator, last_iterator);
   – To reverse a vector. ( if ascending -> descending  OR  if descending -> ascending)
     
4. *max_element (first_iterator, last_iterator) ;
   – To find the maximum element of a vector.
     
5. *min_element (first_iterator, last_iterator) ;
   – To find the minimum element of a vector.
     
6. accumulate(first_iterator, last_iterator, initial value of sum) ;
 – Does the summation of vector elements
                                                                  
                                                                    
<---------------------------------------------------------------code-------------------------------------------------------------------------------->
CPP
#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric> //For accumulate operation
using namespace std;
int main(){
    int arr[] = {10, 20, 5, 23 ,42 , 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);
    cout << "Vector is: ";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";
    sort(vect.begin(), vect.end());
    cout << "\nVector after sorting is: ";
    for (int i=0; i<n; i++)
       cout << vect[i] << " ";
      sort(vect.begin(),vect.end(), greater<int>());
    cout << "\nVector after sorting in Descending order is: ";
    for (int i=0; i<n; i++)
       cout << vect[i] << " ";
    reverse(vect.begin(), vect.end());
    cout << "\nVector after reversing is: ";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";
    cout << "\nMaximum element of vector is: ";
    cout << *max_element(vect.begin(), vect.end());
    cout << "\nMinimum element of vector is: ";
    cout << *min_element(vect.begin(), vect.end());
    cout << "\nThe summation of vector elements is: ";
    cout << accumulate(vect.begin(), vect.end(), 0);
    return 0;
}

Output :
<-------->
Vector is: 10 20 5 23 42 15 
Vector after sorting is: 5 10 15 20 23 42 
Vector after sorting in Descending order is: 42 23 20 15 10 5 
Vector after reversing is: 5 10 15 20 23 42 
Maximum element of vector is: 42
Minimum element of vector is: 5
The summation of vector elements is: 115
  
<---------------------------------------------------------------------------------------------------------------------------------------------------->
                                                                    
       6. count(first_iterator, last_iterator,x);
  – To count the occurrences of x in vector.

       7. find(first_iterator, last_iterator, x);
  – Returns an iterator to the first occurrence of x in vector and points to last address of vector ((name_of_vector).end()) if element is not present in vector. 

<--------------------------------------------------------------code-------------------------------------------------------------------------------->
CPP

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[] = {10, 20, 5, 23 ,42, 20, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);
    cout << "Occurrences of 20 in vector : ";
    cout << count(vect.begin(), vect.end(), 20);
    find(vect.begin(), vect.end(),5) != vect.end()?
                         cout << "\nElement found":
                     cout << "\nElement not found";
    return 0;
}

Output:
<------->
Occurrences of 20 in vector : 2
Element found
<--------------------------------------------------------------------------------------------------------------------------------------------------->
       8. binary_search(first_iterator, last_iterator, x) ;
  – Tests whether x exists in sorted vector or not.

       9. lower_bound(first_iterator, last_iterator, x) ;
  – returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘x’.

       10. upper_bound(first_iterator, last_iterator, x);
  – returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘x’. 
<--------------------------------------------------------------code---------------------------------------------------------------------------------->
C++
                                                                                                                           
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);
    sort(vect.begin(), vect.end());
    auto q = lower_bound(vect.begin(), vect.end(), 20);
    auto p = upper_bound(vect.begin(), vect.end(), 20);
    cout << "The lower bound is at position: ";
    cout << q-vect.begin() << endl;
    cout << "The upper bound is at position: ";
    cout << p-vect.begin() << endl;
    return 0;
}

Output:
<------->                                                                                                                                                                                                                                                   
The lower bound is at position: 3
The upper bound is at position: 5
Some Manipulating Algorithms
<---------------------------------------------------------------------------------------------------------------------------------------------------->
11. arr.erase(position to be deleted) ;
   – This erases selected element in vector and shifts and resizes the vector elements accordingly.
                                                                    
12. arr.erase(unique(arr.begin(),arr.end()),arr.end()) ;
  – This erases the duplicate occurrences in sorted vector in a single line.
                                                                                                                           
<---------------------------------------------------------------------code---------------------------------------------------------------------------->                                                                                                                          
C++
                                                                                                                           
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[] = { 5, 10, 15, 20, 20, 23, 42, 45 };
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vect(arr, arr + n);
    cout << "Given Vector is:\n";
    for (int i = 0; i < n; i++)
        cout << vect[i] << " ";
    vect.erase(find(vect.begin(),vect.end(),10));
    cout << "\nVector after erasing element:\n";
    for (int i = 0; i < vect.size(); i++)
        cout << vect[i] << " ";
    vect.erase(unique(vect.begin(), vect.end()),
               vect.end());
    cout << "\nVector after removing duplicates:\n";
    for (int i = 0; i < vect.size(); i++)
        cout << vect[i] << " ";
    return 0;
}

Output:
<-------->                                                                    
Given Vector is:
5 10 15 20 20 23 42 45 
Vector after erasing element:
5 15 20 20 23 42 45 
Vector after removing duplicates:
5 15 20 23 42 45 
         
<----------------------------------------------------------------------------------------------------------------------------------------------------->
       3. next_permutation(first_iterator, last_iterator);
  – This modified the vector to its next permutation.

       4. prev_permutation(first_iterator, last_iterator) ;
  – This modified the vector to its previous permutation. 

<----------------------------------------------------------------code--------------------------------------------------------------------------------->                                                                    
CPP

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);
    cout << "Given Vector is:\n";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";
    next_permutation(vect.begin(), vect.end());
    cout << "\nVector after performing next permutation:\n";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";
    prev_permutation(vect.begin(), vect.end());
    cout << "\nVector after performing prev permutation:\n";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";
    return 0;
}

Output:
<-------->
Given Vector is:
5 10 15 20 20 23 42 45 
Vector after performing next permutation:
5 10 15 20 20 23 45 42 
Vector after performing prev permutation:
5 10 15 20 20 23 42 45 
                                                                    
<---------------------------------------------------------------------------------------------------------------------------------------------------->                                                                    
         5. distance(first_iterator,desired_position); 
 – It returns the distance of desired position from the first iterator.This function is very useful while finding the index. 
<---------------------------------------------------------------------------------------------------------------------------------------------------->
                                                                    
CPP

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);
    cout << "Distance between first to max element: ";
    cout << distance(vect.begin(),
                     max_element(vect.begin(), vect.end()));
    return 0;
}

Output:
<------->                                                                    
Distance between first to max element: 7

<---------------------------------------------------------------------------------------------------------------------------------------------------->
 ******************************************************************(BIT MANUPATATION)****************************************************************
<====================================================================================================================================================>

Builtin functions of GCC compiler
These are four important built-in functions in GCC compiler:  

1. __builtin_popcount(x);
 This function is used to count the number of one’s(set bits) in an integer.
 Note: Similarly you can use __builtin_popcountl(x) & __builtin_popcountll(x) for long and long long data types.
                                                                                                                                       
 2. __builtin_parity(x);
 - This function is used to check the parity of a number. This function returns true(1) if the number has odd parity else it returns false(0) for even parity. 
 Note: Similarly you can use __builtin_parityl(x) & __builtin_parityll(x) for long and long long data types.                                                             
                                                                    
 3. __builtin_clz(x);
This function is used to count the leading zeros of the integer. Note : clz = count leading zero’s   
Note: __builtin_clz(x) This function only accept unsigned values 
Note: Similarly you can use __builtin_clzl(x) & __builtin_clzll(x) for long and long long data types.

 4. __builtin_ctz(x);
  This function is used to count the trailing zeros of the given integer. Note : ctz = count trailing zeros. 
 Note:Similarly you can use __builtin_ctzl(x) & __builtin_ctzll(x) for long and long long data types.                                                               
                                                                    
 <****************************************************************************************************************************************************>
                                                                    
<----------------------------------------------------------------------------------------------------------------------------------------------------> 
 1. __builtin_popcount(x);
 This function is used to count the number of one’s(set bits) in an integer.
<----------------------------------------------------------------CODE-------------------------------------------------------------------------------->                                                                    
                                                                    
Example: 
 
if x = 4
binary value of 4 is 100
Output: No of ones is 1.
 
C
#include <stdio.h>

int main()

{

    int n = 5;

     

    printf("Count of 1s in binary of %d is %d ",

           n, __builtin_popcount(n));

    return 0;

}

 
Output: 
Count of 1s in binary of 5 is 2
                                                                    
                                                      Note:
                                               <--------------->
 Similarly you can use __builtin_popcountl(x) & __builtin_popcountll(x) for long and long long data types.
                                                                    
<----------------------------------------------------------------------------------------------------------------------------------------------------->
                                                                    
2. __builtin_parity(x);
 - This function is used to check the parity of a number. This function returns true(1) if the number has odd parity else it returns false(0) for even parity. 
                                                                    
<-----------------------------------------------------------------CODE-------------------------------------------------------------------------------->                                                                   
Example: 
 
if x = 7
7 has odd no. of 1's in its binary(111).
Output: Parity of 7 is 1 
 
C
#include <stdio.h>

int main()

{

    int n = 7;

     

    printf("Parity of %d is %d ",

           n, __builtin_parity(n));

    return 0;

}

 
                                                                Note: 
                                                             <----------->       
Similarly you can use __builtin_parityl(x) & __builtin_parityll(x) for long and long long data types.
<----------------------------------------------------------------------------------------------------------------------------------------------------->
3. __builtin_clz(x);
This function is used to count the leading zeros of the integer. Note : clz = count leading zero’s 

<----------------------------------------------------------------------------------------------------------------------------------------------------->

Example: It counts number of zeros before the first occurrence of one(set bit). 
 
a = 16
Binary form of 16 is 00000000 00000000 00000000 00010000
Output: 27
 
C
#include <stdio.h>

int main()

{

    int n = 16;

     

    printf("Count of leading zeros before 1 in %d is %d",

           n, __builtin_clz(n));

    return 0;

}

 
Output: 
Count of leading zeros before 1 in 16 is 27
                                                                    
Note: __builtin_clz(x) This function only accept unsigned values 
Note: Similarly you can use __builtin_clzl(x) & __builtin_clzll(x) for long and long long data types.
                                                                    
 <---------------------------------------------------------------------------------------------------------------------------------------------------->
                                                                    
4. __builtin_ctz(x);
  This function is used to count the trailing zeros of the given integer. Note : ctz = count trailing zeros. 
                                                                    
 <--------------------------------------------------------------------------------------------------------------------------------------------------->
Example: Count no of zeros from last to first occurrence of one(set bit). 
 
a = 16
Binary form of 16 is 00000000 00000000 00000000 00010000
Output: ctz = 4
 
C
#include <stdio.h>

int main()

{

    int n = 16;

     

    printf("Count of zeros from last to first "

           "occurrence of one is %d",

           __builtin_ctz(n));

    return 0;

}

 
Output: 
Count of zeros from last to first occurrence of one is 4

                                                                    
                                                             Note:
                                                          <---------->
 Similarly you can use __builtin_ctzl(x) & __builtin_ctzll(x) for long and long long data types.

