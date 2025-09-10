#include <iostream>
using namespace std;

int main()
{
	int Data[]= {12, 46, 16, 15, 18, 55, 20, 72, 13, 8, 23};
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
	        
	    }
	    I++;
	}
	return 0;
}
