#include <iostream>
using namespace std;
class reverse{

	public:
		int i,n,swap=0;
	void func()
	{
		cout<<"Enter the no of elments: ";
		cin>>n;
		int arr[n];
		cout<<"Enter the elements: ";
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for (i=0;i<(n
					/2)+1;i++)
		{
			swap=arr[n-i-1];
			arr[n-i-1]=arr[i];
			arr[i]=swap;

		}
		for(i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
};

int main()
{
	reverse r;
	r.func();
	return 0;
}
