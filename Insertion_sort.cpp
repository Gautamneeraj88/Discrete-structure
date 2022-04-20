//This program is for Insertion sort
/*
    In insertion sort the array is virtually split into a sorted and an unsorted part are picked and placed at the
    correct position in the sorted array.

    Algorithm:-
    To sort an array of size n in ascending order:-

    1. Iterate from arr[1] to arr[n] over the array.
    2. Compare the current element to its predecessor.
    3. If the element is smaller than its predecessor. compare it to the elements before. Move the greater elements one
       position up to make space for the swapped element.

*/
#include<iostream>
using namespace std;

class Insertion_sort
{
    public:
    int i,j,n,number[10],temp;   //variable declaration

    Insertion_sort()        //constructor
    {
       cout<<"How many number:";
       cin>>n;
    }

    void input()     //take input from the user
    {
        for(i=0;i<n;i++)
        {
            cout<<"Enter number: ";
            cin>>number[i];
        }
    }

    void sort()                     //here insertion sort is done
    {
        for(i=1;i<n;i++)
        {
            temp = number[i];
            j = i - 1;

            while(j>=0 && number[j]>temp)
            {
                number[j+1] = number[j];
                j = j - 1;
            }
            number[j+1]=temp;
        }
    }

    void output()              //print the output on screen
    {
        cout<<"Ascending order...."<<endl;
        for(i=0;i<n;i++)
        {
            cout<<number[i];
            cout<<endl;
        }
    }
};

int main()
{
    Insertion_sort insert; //insert is the object of class Insertion_sort
    
    insert.input();//here call the member function input to take input form the user
    insert.sort(); //here call the member function sort to do insertion sort
    insert.output();//here call the member function to print the output on the screen

    return 0;
}