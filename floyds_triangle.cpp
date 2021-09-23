#include<iostream>
using namespace std;
int main()
{
    int num,i,j,k=1;
    cout<<"Enter the number:";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
        }
    cout<<endl;
    }
    return 0;
}