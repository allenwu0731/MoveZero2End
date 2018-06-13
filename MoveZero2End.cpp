#include <iostream>
#include <vector>
using namespace std;

void reorder(vector<int> &a)
{	
	int cnt=0;
	for(int i=0; i<a.size(); i++)
		if(a[i]!=0)
			a[cnt++]=a[i];
	
	while(cnt<a.size())
		a[cnt++]=0;

}

int main()
{
	
	int aa[]= {1,0,3,0,12};
	//vector<int> arr(aa, 5);
	vector<int> arr (aa, aa + 5 );
	
	/*
	arr.push_back(1);
	arr.push_back(0);
	arr.push_back(3);
	arr.push_back(0);
	arr.push_back(12);
	*/
			
	for(int i=0; i<arr.size(); i++)
		cout << arr[i] << " ";
	
	cout << endl;
	
	reorder(arr);
	
	
	
	for(int i=0; i<arr.size(); i++)
		cout << arr[i] << " ";
	
	system("pause");
	return 0;
}

