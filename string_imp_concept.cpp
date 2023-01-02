                                                        Substring in C++
                                                      <--------------------->          
In C++, std::substr() is a predefined function used for string handling. string.h is the header file required for string functions. The substring function is used for handling string operations like strcat(), append(), etc. It generates a new string with its value initialized to a copy of a sub-string of this object.
This function takes two values pos and len as an argument and returns a newly constructed string object with its value initialized to a copy of a sub-string of this object. Copying of string starts from pos and is done till pos+len means [pos, pos+len).


                                                            Important points: 
                                                            <------------------>

The index of the first character is 0 (not 1).
If pos is equal to the string length, the function returns an empty string.
If pos is greater than the string length, it throws out_of_range. If this happens, there are no changes in the string.
If the requested sub-string len is greater than the size of a string, then returned sub-string is [pos, size()).
If len is not passed as a parameter, then returned sub-string is [pos, size()).

                                                                  Syntax: 
                                                            <------------------->
string substr (size_t pos, size_t len) const;
Parameters:

pos: Position of the first character to be copied.
len: Length of the sub-string.
size_t: It is an unsigned integral type.
Return value: 

It returns a string object.

<-----------------------------------------------------------code-------------------------------------------------------------------------------->
CPP

#include <string.h>
#include <iostream>
using namespace std;
int main(){
    string s1 = "Geeks";
    string r = s1.substr(3, 2);
    cout << "String is: " << r;
    return 0;
}

Time complexity: O(n)
Auxiliary Space: O(n)
<---------------------------------------------------------------------------------------------------------------------------------------------------->
                                                                      Applications:
                                                                  <-------------------->

1. How to get a sub-string after a character? 
In this, a string and a character are given and you have to print the sub-string followed by the given character. 
Extract everything after the “:” in the string “dog:cat“.

Example:C++
                                                                  
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
    string s = "dog:cat";
    int pos = s.find(":");
    string sub = s.substr(pos + 1);
    cout << "String is: " << sub;
    return 0;
}

Time complexity: O(n)
Auxiliary Space: O(n)                    
<----------------------------------------------------------------------------------------------------------------------------------------------------->
2. How to get a sub-string before a character? 
In this, a string and a character are given and you have to print the sub-string followed by the given character. 
Extract everything before the “:” in the string “dog:cat“. 

Example:

CPP
#include <string.h>
#include <iostream>
using namespace std;
int main(){
    string s = "dog:cat";
    int pos = s.find(":");
    string sub = s.substr(0 , pos);
    cout << "String is: " << sub;
    return 0;
}

Time complexity: O(n)
Auxiliary Space: O(n)
<----------------------------------------------------------------------------------------------------------------------------------------------------->
3. Print all substrings of a given string
Given a string as an input. We need to write a program that will print all non-empty substrings of that given string.

Example:
// C++ program to demosntrate all possible
// substrings of a given string
#include <bits/stdc++.h>
using namespace std;
// Function to print all sub strings
void subString(string s, int n){
	// Pick starting point in outer loop
	// and lengths of different strings for
	// a given starting point
	for (int i = 0; i < n; i++)
		for (int len = 1; len <= n - i; len++)
			cout << s.substr(i, len) << endl;
}
int main()
{
	string s = "abcd";
	subString(s, s.length());
	return 0;
}

Output:
<------->                                                                  
a
ab
abc
abcd
b
bc
bcd
c
cd
d

Time complexity: O( n3 )
Auxiliary Space: O(1)
<----------------------------------------------------------------------------------------------------------------------------------------------------->
4. Sum of all substrings of a string representing a numberGiven an integer represented as a string, we need to get the sum of all possible
substrings of this string.

Example:  C++
                                                                  
#include <bits/stdc++.h>
using namespace std;
int toDigit(char ch){
    return (ch - '0');
}
int sumOfSubstrings(string num){
    int n = num.length();
    int sumofdigit[n];
    sumofdigit[0] = toDigit(num[0]);
    int res = sumofdigit[0];
    for (int i = 1; i < n; i++) {
        int numi = toDigit(num[i]);
        sumofdigit[i] = (i + 1) * numi + 10 * sumofdigit[i - 1];
        res += sumofdigit[i];
    }
    return res;
}
int main(){
    string num = "1234";
    cout << sumOfSubstrings(num) << endl;
    return 0;
}

Time Complexity: O(n)
Auxiliary Space: O(n)
<----------------------------------------------------------------------------------------------------------------------------------------------------->
5: Maximum value of all substrings of a string representing a number.
Given an integer represented as a string, we need to get the maximum of all possible substrings of the given string which is representing a number.

Example:C++
                                                                  
#include <bits/stdc++.h>
using namespace std;
void subString(string s, int n){
      vector<int> v;
    for (int i = 0; i < n; i++){
        for (int len = 1; len <= n - i; len++){
             string sub =(s.substr(i, len));
             int x=stoi(sub);
             v.push_back(x);
            }
     }
     cout<<*max_element(v.begin(),v.end())<<endl;
}
int main()
{
    string s = "823";
    subString(s, s.length());
    return 0;
}

Output :
823 
Explanation: all substrings are {8,82,823,2,23,3} and the maximum value substring is 823.
Time complexity: O(n^3)

Auxiliary space: O(n!)
<----------------------------------------------------------------------------------------------------------------------------------------------------->
6: Minimum value of all substrings of a string representing a number.
Given an integer represented as a string, we need to get the minimum of all possible substrings of the given string which is representing a number.

Example:C++
                                                                  
#include <bits/stdc++.h>
using namespace std;
void subString(string s, int n){
      vector<int> v;
    for (int i = 0; i < n; i++){
        for (int len = 1; len <= n - i; len++){
             string sub =(s.substr(i, len));
             int x=stoi(sub);
             v.push_back(x);
            }
     }
     cout<<*min_element(v.begin(),v.end())<<endl;
}
int main()
{
    string s = "4572";
    subString(s, s.length());
    return 0;
}

Output:
2
Time complexity: O(N^3)
Auxiliary space: O(N!)
