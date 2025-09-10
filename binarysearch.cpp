#include <iostream>
using namespace std;
int main()
{
	int Data[]= {1, 3, 5, 7, 9};
	int N = sizeof(Data) / sizeof(Data[0]);
	int low=0, up=N-1, target;
	cout<<"Insert number target here"<<endl;
	cin>> target;
    bool found = true; 

	while(low<=up) {
		int mid=(low+up)/2;

		if(target==Data[mid]) {

			cout<<"Search element is found!"<<endl;
			break;
		}

		if(target<Data[mid]) {
			up=mid-1;

		}
		else {
			low=mid+1;
		}

	}
if (!found) {
        cout << "Search element is not found" << endl;
    }

	return 0;
}
