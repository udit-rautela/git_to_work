#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    int n;
    cin>>n;
    vector< pair<int,int> >vec_pair;
    for(int i=0; i<n; ++i)
    {
        int x,y;
        cin>>x>>y;
        vec_pair.push_back({x,y});
    }
    for(auto itr : vec_pair)
    {
        cout<<itr.first<<" "<<itr.second<<endl;
    }
    return 0;
}