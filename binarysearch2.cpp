#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int Data[]= {12, 46, 16, 15, 18, 55, 20, 72, 13, 8, 23};
	int N = sizeof(Data) / sizeof(Data[0]);
	int low=0, up=N-1, target;
	cout<<"Insert number target here"<<endl;
	cin>> target;
    bool found = false;
    int j=0;
    int origindex=0;
    for(int i=0;i<N;i++){
        if(target==Data[i]){
            origindex=i;
            break;
        }
        
    }
    
    sort(Data, Data + N);

	while(low<=up) {
		int mid=(low+up)/2;

		if(target==Data[mid]) {

			cout<<"Search element is found!"<<endl;
			cout<<"It is at index"<<"["<<origindex<<"]"<<endl;
			break;
		}

		if(target<Data[mid]) {
			up=mid-1;

		}
		else {
			low=mid+1;
		}

	}
if (found=false) {
        cout << "Search element is not found" << endl;
    }

	return 0;
}
