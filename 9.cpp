#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system(
) or input loop */
/*branch name
*
*
*
*/
//prototype

void Nuarray(int &h);

void readarr(int b[],int k);

int max(int c[],int l);

int findindex(int d[],int u,int max);

//--------------------------
//micro
//---------------------
//global variable
//-------------------
int main(int argc, char** argv)
{

//Declare number of array

int n;

//Get number of array
Nuarray(n);

//Seperator

cout<<endl<<endl<<"------------------------"<<endl<<endl;

//Declar array
int a[n];

//Get array number
readarr(a,n);

//Seperator

cout<<endl<<endl<<"------------------------"<<endl<<endl;

//find max

int maxarr =0;

maxarr = max(a,n);
cout<<"max of array = "<<maxarr;

//Seperator

cout<<endl<<endl<<"------------------------"<<endl<<endl;

//find max

cout<<"index of array = "<<findindex(a,n,maxarr);

//----------------------------------------------
getch();
}



//function variable

//--------------------------
//functions


//Get Number of array

void Nuarray(int &h)
{



//Loop for get array
while (h > 10)
{
   
cout<<"Enter number of array (Maximum number of array 10) =";
cin>>h;

}

}

//--------------------------------------------------

//read array number 

void readarr(int b[],int k)
{
    for(int i =0; i<k; ++i)
    {
        cout<<i<<" = ";
        cin>>b[i];
        cout<<endl;
    }
}

int max(int c[],int l)
{

int max = c[0];

for(int j=1; j<l; ++j)
{
    if(c[j] > max)
    max = c[j];
}

return max;

}


//-------------------------

//find index of array
int findindex(int d[],int u,int max)
{
    for(int t=0; t<u; ++t)
    {
        if (max == d[t])
        return t;
    }
}