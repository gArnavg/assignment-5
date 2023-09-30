/*Display this AP - 4,7,10,13,16.. upto ‘n’ terms.*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number";
    cin>>n;
    int i;
    for(i=1;i<=n;i++)
    {
        cout<<((3*i)+1)<<endl;
        
    }
}