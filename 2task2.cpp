#include <iostream>
using namespace std;
int main()
{
    int n=0;
    
    cout<<"Input how many elements you want in the array:";
    cin>>n;
    int arr[n];
   cout<<"Enter values for an array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Input "<<i<<" index element: ";
        cin>>arr[i];
        
    }
    cout<<" "<<endl;
    cout<<"Your index:"<<endl;
     cout<<" "<<endl;
      cout<<" "<<endl;
    for(int j=0;j<n;j++){
        
        cout<<arr[j]<<" ";
        
    }
    
    int N = sizeof(arr) / sizeof(arr[0]);
	int I=0;
    int Item=0;
    
    while(true){
    cout<<" "<<endl;
	cout<<"Insert an item to find: ";
	cin>>Item;
	
	 if(Item==-1){ //remember it is always outside of that while(I<N) loop or else for some reason it wont read it
		 //avoid passive reading
		 //avoid passively reading the code pls for sake huhu
	        
	        break;
	    }
	while(I<N){
	    if(Item==arr[I]){
	        cout<<"Founded!"<<endl;
	        cout<<"The value is in the number "<<I+1<<" position "<<endl;
	        break;
	    }
	    
	    
	    else{
	        cout<<"Not found"<<endl;
	        
	    }
	    I++;
	}
    I=0;
    }
   cout<<"Goodbye"<<endl;
    return 0;
}
