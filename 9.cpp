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
//--------------------------
//micro
//---------------------
//global variable
//-------------------
int main(int argc, char** argv)
{

//Declar number of array
int n;

//Loop for get array
while (n > 10)
{
   
cout<<"Enter number of array (Maximum number of array 10) =";
cin>>n;

}


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


//Declar Maximum number
int max = a[0];
//Find maximum of number

for (int j = 1; j < n; j++)
{

if (max < a[j])
max = a[j];

}

//Seperator

cout<<endl<<endl<<"------------------------"<<endl<<endl;


//out put
cout<<"Maximum of array = ";
for(int k = 0; k<n; k++)
{
    if (max == a[k])
    cout<<"a["<<k<<"] = "<<a[k];
}








getch();
}
//function variable
//--------------------------
//functions