Operations on Forward List:
<-------------------------->

1. assign(): 
-This function is used to assign values to the forward list, its other variant is used to assign repeated elements and using the values 
of another list.
  
2. push_front(): 
-This function is used to insert the element at the first position on forward list. The value from this function is copied to the 
space before first element in the container. The size of forward list increases by

3. emplace_front(): 
-This function is similar to the previous function but in this no copying operation occurs, the element is created directly at 
the memory before the first element of the forward list.
  
4. pop_front():
-This function is used to delete the first element of the list.
  
5. insert_after(): 
-This function gives us a choice to insert elements at any position in forward list. The arguments in this function are copied at the desired position.
  
6. emplace_after(): 
-This function also does the same operation as the above function but the elements are directly made without any copy operation.
  
7. erase_after(): 
-This function is used to erase elements from a particular position in the forward list. There are two variants of ‘erase after’ function.
  
8. remove(): 
-This function removes the particular element from the forward list mentioned in its argument.
  
9. remove_if():
-This function removes according to the condition in its argument. 
  
10. clear(): 
-This function deletes all the elements from the list. 
  
11. splice_after(): 
-This function transfers elements from one forward list to other.

# Method Definition
<------------------>

1. front()	        ->   This function is used to reference the first element of the forward list container.
2. begin()          ->   This function is used to return an iterator pointing to the first element of the forward list container.
3. end()            ->	 This function is used to return an iterator pointing to the last element of the list container.
4. cbegin()	        ->   Returns a constant iterator pointing to the first element of the forward_list.
5. cend()	          ->   Returns a constant iterator pointing to the past-the-last element of the forward_list.
6. before_begin()	  ->   Returns an iterator that points to the position before the first element of the forward_list.
7. cbefore_begin()  ->   Returns a constant random access iterator which points to the position before the first element of the forward_list.
8. max_size()	      ->   Returns the maximum number of elements that can be held by forward_list.
9. resize()	        ->   Changes the size of forward_list.
10. unique()	      ->   Removes all consecutive duplicate elements from the forward_list. It uses a binary predicate for comparison.
11. reverse() 	    ->   Reverses the order of the elements present in the forward_list.
  
  
  
==================================================****************************************************====================================================  
1. assign(): 
-This function is used to assign values to the forward list, its other variant is used to assign repeated elements and using the values 
of another list.
  
<------------------------------------------------------------->
CPP

#include <forward_list>
#include <iostream>
using namespace std;
int main()
{
    forward_list<int> flist1;
    forward_list<int> flist2;
      forward_list<int> flist3;
    flist1.assign({ 1, 2, 3 });
    flist2.assign(5, 10);
      flist3.assign(flist1.begin(), flist1.end());
    cout << "The elements of first forward list are : ";
    for (int& a : flist1)
        cout << a << " ";
    cout << endl;
    cout << "The elements of second forward list are : ";
    for (int& b : flist2)
        cout << b << " ";
    cout << endl;
      cout << "The elements of third forward list are : ";
    for (int& c : flist3)
        cout << c << " ";
    cout << endl;
    return 0;

}

Output
The elements of first forward list are : 1 2 3 
The elements of second forward list are : 10 10 10 10 10 
The elements of third forward list are : 1 2 3 
<--------------------------------------------------------------------------********************************************--------------------------------->
  
2. push_front(): 
-This function is used to insert the element at the first position on forward list. The value from this function is copied to the 
space before first element in the container. The size of forward list increases by
3. emplace_front(): 
-This function is similar to the previous function but in this no copying operation occurs, the element is created directly at 
the memory before the first element of the forward list.
4. pop_front():
-This function is used to delete the first element of the list.  

  
<--------------------------------------------------------------------------------------------------------->
CPP
#include <forward_list>
#include <iostream>
using namespace std;
int main()

{
    forward_list<int> flist = { 10, 20, 30, 40, 50 };
    flist.push_front(60);
    cout
        << "The forward list after push_front operation : ";
    for (int& c : flist)
      cout << c << " ";
    cout << endl;
    flist.emplace_front(70);
    cout << "The forward list after emplace_front "
            "operation : ";
    for (int& c : flist)
        cout << c << " ";
    cout << endl;
    flist.pop_front();
    cout << "The forward list after pop_front operation : ";
    for (int& c : flist)
        cout << c << " ";
    cout << endl;
    return 0;
}

Output
The forward list after push_front operation : 60 10 20 30 40 50 
The forward list after emplace_front operation : 70 60 10 20 30 40 50 
The forward list after pop_front operation : 60 10 20 30 40 50 
 
<----------------------------------------------------------------------------------------------------------------------------------------------------->  
  
5. insert_after(): 
-This function gives us a choice to insert elements at any position in forward list. The arguments in this function are copied at the desired position.
6. emplace_after(): 
-This function also does the same operation as the above function but the elements are directly made without any copy operation.
7. erase_after(): 
-This function is used to erase elements from a particular position in the forward list. There are two variants of ‘erase after’ function.

<-------------------------------------------------------------------------------->
CPP
#include <forward_list>
#include <iostream>
using namespace std;
int main()
{
    forward_list<int> flist = { 10, 20, 30 };
    forward_list<int>::iterator ptr;
    ptr = flist.insert_after(flist.begin(), { 1, 2, 3 });
    cout << "The forward list after insert_after operation " ": ";
    for (int& c : flist)
        cout << c << " ";
    cout << endl;
    ptr = flist.emplace_after(ptr, 2);
    cout << "The forward list after emplace_after " "operation : ";
    for (int& c : flist)
        cout << c << " ";
    cout << endl;
    ptr = flist.erase_after(ptr);
      cout << "The forward list after erase_after operatio ": ";
     for (int& c : flist)
        cout << c << " ";
    cout << endl;
      ptr=flist.erase_after(flist.begin(), flist.end());
    cout << "The forward list after erase_after (range) operation " ": ";
      for (int& c : flist)
        cout << c << " ";
    cout << endl; 
    return 0;
}

Output
The forward list after insert_after operation : 10 1 2 3 20 30 
The forward list after emplace_after operation : 10 1 2 3 2 20 30 
The forward list after erase_after operation : 10 1 2 3 2 30 
The forward list after erase_after (range) operation : 10 

<--------------------------------------------------------------------------------------------------------------------------------------------------->
8. remove(): 
-This function removes the particular element from the forward list mentioned in its argument.
9. remove_if():
-This function removes according to the condition in its argument. 
  
<------------------------------------------------------------------------->
CPP
#include <forward_list>
#include <iostream>
using namespace std;
int main()
{
    forward_list<int> flist = { 10, 20, 30, 25, 40, 40 };
    flist.remove(40);
    cout << "The forward list after remove operation : ";
    for (int& c : flist)
        cout << c << " ";
    cout << endl;
    flist.remove_if([](int x) { return x > 20; });
    cout << "The forward list after remove_if operation : ";
    for (int& c : flist)
        cout << c << " ";
    cout << endl;
    return 0;
}

Output
The forward list after remove operation : 10 20 30 25 
The forward list after remove_if operation : 10 20 
 
 <------------------------------------------------------------------------------------------------------------------------------------------------------> 
10. clear(): 
-This function deletes all the elements from the list. 

C++
#include <forward_list>  // for using forward list
#include <iostream>
using namespace std;
int main()
{
    forward_list<int> flist{ 1, 2, 3, 4, 5 }; 
      cout<<"Forward list: ";
      for(auto i: flist){
      cout<<i<<" ";
    }
      cout<<endl;
    flist.clear();
      cout<<"Forward list after using clear function: ";
    for (auto it = flist.begin(); it != flist.end(); ++it)
        cout << ' ' << *it;
      cout<<endl;
    return 0;
}

Output
Forward list: 1 2 3 4 5 
Forward list after using clear function: 

<------------------------------------------------------------------------------------------------------------------------------------------------------>
11. splice_after(): 
-This function transfers elements from one forward list to other.  

<---------------------------------------------------------------->
CPP
#include <forward_list> // for splice_after()
#include <iostream>
using namespace std;
int main()
{
    forward_list<int> flist1 = { 10, 20, 30 };
    forward_list<int> flist2 = { 40, 50, 60 };
    flist2.splice_after(flist2.begin(), flist1);
    cout << "The forward list after splice_after operation " ": ";
    for (int& c : flist2)
        cout << c << " ";
    cout << endl;
    return 0;
}

Output
The forward list after splice_after operation : 40 10 20 30 50 60 
Some More Methods of forward_list:

<------------------------------------------------------------------------------------------------------------------------------------------------------->
  
Method Definition
<------------------>

1. front()	        ->   This function is used to reference the first element of the forward list container.
2. begin()          ->   This function is used to return an iterator pointing to the first element of the forward list container.
3. end()            ->	 This function is used to return an iterator pointing to the last element of the list container.
4. cbegin()	        ->   Returns a constant iterator pointing to the first element of the forward_list.
5. cend()	          ->   Returns a constant iterator pointing to the past-the-last element of the forward_list.
6. before_begin()	  ->   Returns an iterator that points to the position before the first element of the forward_list.
7. cbefore_begin()  ->   Returns a constant random access iterator which points to the position before the first element of the forward_list.
8. max_size()	      ->   Returns the maximum number of elements that can be held by forward_list.
9. resize()	        ->   Changes the size of forward_list.
10. unique()	      ->   Removes all consecutive duplicate elements from the forward_list. It uses a binary predicate for comparison.
11. reverse() 	    ->   Reverses the order of the elements present in the forward_list.
