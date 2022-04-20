//This program for the Bubble Sort
/* 
   In the bubble sort method, multiple exchanges take place in one pass. In this method adjacent element of the list
   to be sorted are compared. If the element on top is greater than item immediately below it, they are exchanged.
   This process is carried on till the list is sorted.
*/
#include<iostream>
using namespace std;

class Bubblesort{
    
    public:
    int i,j,n,number[10],temp; //here declaration of the variable and the array

    Bubblesort()                    //this is the constructor which is automaticaly call when the object of the class
   {
       cout<<"How many number:";
       cin>>n;
        
    }

    void input()                  //this is the member function in which take input for the array from the user
    {
        cout<<"Enter the number:";
        for(i=0; i<n; i++)
        {
            cin>>number[i];
        }
    }
 
   void swap()                  //this is the member function which check and swap the value.
    {                           
        for(i=0;i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(number[j] > number[j+1])
                {
                    temp = number[j];
                    number[j] = number[j+1];
                    number[j+1] = temp;
                }
            }
        }
    }

    void output()           //this is the member function which print the output on the screen
    {
        cout<<"Ascending order.."<<endl;
        for(i=0; i<n; i++)
        {
            cout<<number[i];
            cout<<endl;
        }
    }
};

int main()
{
    Bubblesort bubble;   //here bubble is the object of the class Bubblesort
    bubble.input();     //here call the member function of Bubblesort class which take value for the user
    bubble.swap();      //here call the member function of Bubblesort class which chech and swap the values
    bubble.output();    //here call the member function of Bubblesort class which print the output on the screen

    return 0;
}