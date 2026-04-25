#include<iostream>
using namespace std;
// int main(){
//     int a,b=1;
//     a=10;
//     if (++a){
//         cout<<a;
//     }
//     else{
//         cout<<++b;
//     }
// }
int update(int a){
    a -= 5;
    return a;
}

int main() {
    int a = 15;
    update(a);         // The returned value is ignored
    cout << a << endl; // Still prints 15
}
