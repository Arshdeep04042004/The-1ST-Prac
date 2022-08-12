#include <iostream>

//printer() function
using namespace std;

void printer(int arr[10][10])
{
	//printing array
  for(int i=0;i<10;i++)
  {
  	for(int j=0;j<10;j++)
  	{
      if (j==9){
       cout<<arr[i][j]<<"";
      } else {
        
     cout << array[i][j]<<" ";
      }
  	}

  	cout<<endl;
  }

}