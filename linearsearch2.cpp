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

void linearLS(Node* name1, char target){
    
    while(name1!=NULL){
        name1->c;
        if(name1->c==target){
             cout<<"Searching is Successful"<<endl;
	        break;
        }
        else{
        cout<<"Searching is Unsuccessful"<<endl;
        name1=name1->next;
        }
            
}
}

int main(){
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

linearLS(name1, 'n');
return 0;
}
