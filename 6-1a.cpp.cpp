#include <iostream>
using namespace std;

int main()
{
	int Data[]= {5, 3, 8, 4, 2};
	int Item;
	int N = sizeof(Data) / sizeof(Data[0]);
	int I=0;

	cout<<"Insert an item to find: ";
	cin>>Item;
	while(I<=N){
	    if(Item==Data[I]){
	        cout<<"Searching is Successful"<<endl;
	        break;
	    }
	    
	    else{
	        cout<<"Searching is Unsuccessful"<<endl;
			break;
	        
	    }
	    I++;
	}
	return 0;
}
