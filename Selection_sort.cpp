//this is the program of the selection sort
/*
   The selection sort algorithm sorts an array by repeatedly finding the minimum element form unsorted part and putting
   it at the beginning.
                             (OR)

    Find the minimum element in unsorted array and swap it with element at beginning of unsorted array.
*/
#include<iostream>
using namespace std;

class Selectionsort
{
    public:

    int i,j,n,number[10],temp; //variable declaration
 
    Selectionsort()                 //this is the constructor which is automaticaly call when the object of the class
    {
       Start:cout<<"How many number:";
        if(n>=10)
        {
            cin>>n;
        }
        else
        {
            cout<<"Enter in range 0 to 10."<<endl;
        }
        goto Start;
    }

    void input()                   //this is the member function in which take input for the array from the user
    {
        for(i=0; i<n; i++)
        {
            cout<<"Enter the number:";
            cin>>number[i];
        }
    }

    void selection_sort()                   //this is the member function which check and swap the value.
    {
        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(number[j] < number[i])
                {
                    temp = number[j];
                    number[j] = number[i];
                    number[i] = temp;
                }
            }
        }
    }

    void output()                         //this is the member function which print the output on the screen
    {
        cout<<"Ascending order....."<<endl;
        for ( i = 0; i<n; i++)
        {
            cout<<number[i];
            cout<<endl;
        }
        
    }
};

int main()
{
    Selectionsort selection;    //here bubble is the object of the class Selectionsort            
    selection.input();          //here call the member function of Selectionsort class which take value for the user
    selection.selection_sort(); //here call the member function of Selectionsort class which chech and swap the values
    selection.output();         //here call the member function of Selectionsort class which print the output on the screen

    return 0;
}