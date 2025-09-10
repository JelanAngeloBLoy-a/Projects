#include <iostream>
using namespace std;

class Node{
    public:
    char c;
    Node* next;
    
    //Needs constructor when we straight ahead put a Node* name1 = new Node('J'); instead of nam1->c='J'
    Node(char value){
        c=value;
        next=NULL;
    }
};

int linearLS(Node* name1, char target, int N){
    int count;
    for(int i=0;i<N;i++){
        name1->c;
        if(name1->c==target){
            
        return 1;    
        }
        else{
        name1=name1->next;
        }
     }
    return -1;
}

int main(){
 
int N=5; //size or how many elements
char target;
cout<<"'J' 'e' 'l' 'a' 'n'"<<endl;
Node* name1 = new Node('J');
Node* name2 = new Node('e');
Node* name3 = new Node('l');
Node* name4 = new Node('a');
Node* name5 = new Node('n');
  
name1->next = name2;
name2->next = name3;
name3->next = name4;
name4->next = name5;
name5->next = NULL;
  
 cout<<"Input target:"<<endl;
cin>>target;    
    
    
int result=linearLS(name1, target, N);
 
 if(result==-1){
     
     cout<<"Searching is Unsuccesful";
 }
 else{
     
     cout<<"Searching is Succesful";
 }
    return 0;
}
