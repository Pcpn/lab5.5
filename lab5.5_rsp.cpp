#include<iostream>
using namespace std;

int main()
{
    for(int i=0; i<5; i++)
    {
      //print gaps
        for(int j=i; j<5; j++)
        {
            cout << " ";   
        }
        //print stars
        for(int j=1; j<=5; j++)
        {
            cout << "*";   
        }
       cout <<endl;   
    }
    return 0;
}


