#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
    int no_of_balls,size;
    cin>>no_of_balls>>size;
    int Points = 0;
    while(no_of_balls--){
        int distX,distY,posX,posY;
        cin >>distX>> distY>>posX>>posY;
        bool check=(distX==distY);
        if(check){
            if((posX-posY)%size==0) {
                Points++;
            }
        } 
        else{
            if((posX+posY)%size==0) {
                Points++;
            }
        }
    }
    cout<<Points<<endl;
    }
    return 0;
}
