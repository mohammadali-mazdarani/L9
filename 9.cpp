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

int Nuarray();

int findmax(int a[] , int x);

void outfind(int b[], int y, int max);

//--------------------------
//micro
//---------------------
//global variable
//-------------------
int main(int argc, char** argv)
{

//Get number of array
int n = Nuarray();

//Seperator

cout<<endl<<endl<<"------------------------"<<endl<<endl;


//Declar array
int a[n];

//Get array number

for (int i = 0; i < n; i++)
{
   cout<<"a["<<i<<"] = ";
   cin>>a[i];
   if(a[i] == 0)
break;
   cout<<endl;
}





//Find maximum of number
int max = findmax(a,n);


//Seperator

cout<<endl<<endl<<"------------------------"<<endl<<endl;


//out put

outfind(a, n, max);



getch();
}



//function variable

//--------------------------
//functions


//Get Number of array

int Nuarray()
{

//Declar number of array
int n;

//Loop for get array
while (n > 10)
{
   
cout<<"Enter number of array (Maximum number of array 10) =";
cin>>n;

}

return n;

}

//--------------------------------------------------

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