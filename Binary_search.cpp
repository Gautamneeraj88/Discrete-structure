//This program is for Binary Search
/*
    Binary search method can be used only for sorted lists.In this method,
    the vlaue of the element in the middle of the list is compared with 
    the value of the element to be searched for. If the middle element 
    is large, the desired element may be in the upper half of the list. 
    If the middle element is smaller, the desired element may be in the 
    lower half of the list. Hence, every time the domain of search is reduced 
    by half.
*/
#include<iostream>
using namespace std;

class BinarySearch
{
   public:
   int i,j,n,search,temp,number[10];//variable declaration

   BinarySearch()  //this the constructor
   {
       cout<<"How many number: ";
       cin>>n;
   }

    void input() //this function take input from the user
    {
        for(i=0; i<n; i++)
        {
            cout<<"Enter data: ";
            cin>>number[i];
        }
    }

    void sort()  //this will sort the elements
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(number[j]>number[j+1])
                {
                    temp = number[j];
                    number[j] =  number[j+1];
                    number[j+1] = temp;
                }
            }
        }
    }
   void getValue() //this will get inout from the user for searching number
   {
    cout<<"Enter the  number you want to search: ";
    cin>>search;
   }

    int binary_search()  //this will search for the number in the array
    {
        

        int beg = 0;
        int last = n-1;
        while(beg<=last)
        {
            int mid;
            mid = (beg+last)/2;

            if(number[mid] == search)
            {
                return mid+1;
            }

            else if(number[mid] > search)
            {
                last = mid - 1;
            }
            else
            {
            beg = mid + 1;
            }
        }
        return -1;
    }

    void output() //this will print the out put on the screen
    {
        cout<<"After sort..."<<endl;
        for(i=0; i<n; i++)
        {
            cout<<number[i]<<endl;
        }
    }


};

int main()
{
    BinarySearch binary;

    binary.input();
    binary.sort();
    binary.getValue();
    cout<<"You searched value is at position: "<<binary.binary_search()<<endl;;
    binary.output();

    return 0;
}