
#include <iostream>
using namespace std;


class fruit{
private:
int a, b, c, d, e;

public:

fruit(int x, int y ,string z){
    
    
    cout<<"instructor called"<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
}


};


int main()
{
    
  fruit objectlmao(12,13,"passlmao");  

    return 0;
}
