//This program is for Linear search
/*
   In this method, the elements are scanned from the first one till either the required element is found
   or the list is exhausted.
   One major drawback of the sequential search is that it is very time consuming particular for large 
   list (e.g. n>1000)
*/
#include<iostream>
using namespace std;

class LinearSearch
{
   public:

   int i,n,search,number[10];//variable decalaration

   LinearSearch()    //constructor
   {
     cout<<"How many number:";
     cin>>n;
   }

   void input()   //take the input fronm the user
   {
       for ( i = 0; i < n; i++)
       {
          cout<<"Enter the number:";
          cin>>number[i];
       }
       
   }   

   void l_search() //this function do linear search
   {
       cout<<"Enter a number which you want to search:";
       cin>>search;

       for(i=0;i<n;i++)
       {
           if(number[i] == search)
           {
               cout<<"Search number is at position: "<<1+1<<endl;
           }
       }
   }
};

int main()
{
    LinearSearch linear;  //this the object of the class LinearSearch

    linear.input();    //this is the input function call 
    linear.l_search();  //this is the linear search function call for linear search

    return 0;
}