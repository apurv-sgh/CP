#include <bits/stdc++.h>
using namespace std;
#define ll long long

int findSquareSide(const vector<pair<int, int>>& rectangles){
    ll totalArea=0;
    for(const auto& rect : rectangles){
        totalArea += 1LL*rect.first*rect.second;
    }
    int side = sqrt(totalArea);
    return (1LL*side*side==totalArea)?side:0;
}

bool canFormSquare(const vector<pair<int, int>>& rects, int side){
    int w1=rects[0].first,h1=rects[0].second;
    int w2=rects[1].first,h2=rects[1].second;
    int w3=rects[2].first, h3=rects[2].second;

    if (h1==side&&h2==side&& h3==side&&(w1+w2+w3==side)) return true;
    if (w1==side&&w2==side&& w3==side&&(h1+h2+h3==side)) return true;
    if (w1==side&&h1+h2 ==side&& h1+h3==side&&(w2 +w3==side)) return true;
    if (h1==side&&w1+w2==side&&w1+w3==side && (h2+h3==side)) return true;

    return false;
}

int main(){
    int t;
    cin>>t;
    while (t--){
        vector<pair<int,int>> rects(3);
        for (auto& rect:rects){
            cin >>rect.first>>rect.second;
        }

        int squareSide=findSquareSide(rects);
        bool isPossible=false;

        if (squareSide){
            sort(rects.begin(),rects.end());
            do {
                if (canFormSquare(rects, squareSide)) {
                    isPossible = true;
                    break;
                }
            } while (next_permutation(rects.begin(), rects.end()));
        }

        cout << (isPossible ? "YES\n" : "NO\n");
    }

    return 0;
}
