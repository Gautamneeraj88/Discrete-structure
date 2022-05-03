/*

Write a Program to create a SET A and determine the cardinality of SET for an input array of 
elements (repetition allowed) and perform the following operations on the SET: 
a) ismember (a, A): check whether an element belongs to set or not and return value as 
true/false.
b) powerset(A): list all the elements of power set of A.

*/
#include<iostream>
#include<math.h>
using namespace std;

bool iSMember(char a, char A[], int n);
void powerSet(char A[], int n);

int main()
{
    int array, n=0;
    char A[50], a;
    cout<<"Enter the size: ";
    cin>>array;

    cout<<"Enter the char elements fot the set (press '*' to stop): "<<endl;

    int i = -1;

    do
    {
        i++;
        cout<<" ";
        cin>>A[i];
    }while(A[i] != '*' && (i<array));

    n = i;
    int j, k;
    for(i=0; i<n; i++)
    {
        for(j = i+1; j<n; j++)
        {
            for(k=j; k<n;  k++)
            {
                A[k] == A[k+1];
            }
            n--;
            j--;
        }
    }

    cout<<"The set is : {";
    for(i =0; i<n; i++)
    {
        cout<<A[i]<<" , ";
    }
    cout<<"\b\b}";
    cout<<"\n\nThe cardinality of set is: "<<n;
    cout<<"\nEnter an char element: ";
    cin>>a;
    if(iSMember(a, A, n)==true)
    {
        cout<<"\n"<<a<<" is present in the set."<<endl;
    }
    else
    {
        cout<<"\n"<<a<<" is not present in the set."<<endl;
    }
    cout<<"Power set of entered set is: ";
    powerSet(A, n);
    return 0;
}

bool iSMember(char a, char A[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(A[i]==a)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

void powerSet(char A[], int n)
{
    int size;
    size = pow(2, n);

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i & (i << j))
            {
                cout<<A[j]<<endl;
            }
        }
    }
}