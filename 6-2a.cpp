#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

template <typename T>
class Node{
public:
 T data;
 Node<T>* next;
};

template <typename T>
Node<T> *new_node(T newData){
Node<T> *newNode = new Node<T>;
newNode->data = newData;
newNode->next = NULL;
return newNode;
}

void linearLS(Node<char> *name1, char letter){
    
    while(name1!=NULL){
        name1->data;
        if(name1->data==letter){
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
 
Node<char> *name1 = new_node('J');
Node<char> *name2 = new_node('e');
Node<char> *name3 = new_node('l');
Node<char> *name4 = new_node('a');
Node<char> *name5 = new_node('n');

name1->next = name2;
name2->next = name3;
name3->next = name4;
name4->next = name5;
name5->next = NULL;
 
linearLS(name1,'n');
   
    return 0;
}
