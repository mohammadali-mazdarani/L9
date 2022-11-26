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

void Nuarray();

//void readarray(int c[],int &m);

//int findmax(int a[] , int x);

//void outfind(int b[], int y, int max);

//--------------------------
//micro
//---------------------
//global variable
//-------------------
int main(int argc, char** argv)
{

//Get number of array
Nuarray();

//Seperator

cout<<endl<<endl<<"------------------------"<<endl<<endl;
/*
int a[n];

//Get array

readarray(a , n);

//Find maximum of number
int max = findmax(a,n);


//Seperator

cout<<endl<<endl<<"------------------------"<<endl<<endl;


//out put

outfind(a, n, max);

*/

getch();
}



//function variable

//--------------------------
//functions


//Get Number of array

void Nuarray()
{

//Declar number of array
int n;

//Loop for get array
while (n > 10)
{
   
cout<<"Enter number of array (Maximum number of array 10) =";
cin>>n;

}



}

//--------------------------------------------------
/*

//Read array

void readarray(int c[],int &m)
{
    

//Get array number

for (int i = 0; i < m; i++)
{
   cout<<"a["<<i<<"] = ";
   cin>>c[i];
   if(c[i] == 0)
break;
   cout<<endl;
}
}
//Get Array



//--------------------------------------------------
//find max
int findmax(int a[] , int x)
{

int max = a[0];
for (int j = 1; j < x; j++)
{

if (max < a[j])
max = a[j];

}

return max;
}

//------------------------------------------------------
//Show max
void outfind(int b[], int y, int max)
{

    cout<<"Maximum of array = ";
for(int k = 0; k<y; k++)
{
    if (max == b[k])
    cout<<"a["<<k<<"] = "<<b[k];
}

}
*/