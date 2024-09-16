#include <iostream>
using namespace std;
int main(){
    float x,y;
    //x sardor's, y mike's
    cin>>x>>y;
    if ((float(x)/30.48)<y) {
        cout<<1<<endl;
    } else {
        cout<<0<<endl;
    }
    return 0;
}
