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

//--------------------------
//micro
//---------------------
//global variable
//-------------------
int main(int argc, char** argv)
{

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

cout<<endl<<endl<<"------------------------"<<endl<<endl;ch();
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

void readarr(int b[],int k)
{
    for(int i =0; i<k; ++i)
    {
        cout<<i<<" = ";
        cin>>b[i];
        cout<<endl;
    }
}
