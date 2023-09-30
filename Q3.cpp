/*Print the table of ‘n’. Here ‘n’ is an integer which
 the user will input.*/
 #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The Base Number ";
    cin>>n;
    int i;
    for(i=1;i<=10;i++)
    {
        cout<<i*n<<endl;
        
    }
}