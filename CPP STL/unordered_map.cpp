// 0. std::unordered_map is an associative container that contains key-value pairs with unique keys.
// 1. Search, insertion, and removal have average constant-time complexity.
// 2. Internally, the elements are organized into buckets.
// 3. It uses hashing to insert elements into buckets. 
// 4. This allows fast access to individual elements, because after computing the hash of the value it refers to 
//    the exact bucket the element is placed into.

// WHY UNORDERED_MAP
// 0. maintain a collection of uniqe {key:value} pairs with fast insertion and removal.

#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int,char> umap={{1,'a'},{2,'b'}};

    //Access
    cout<<umap[1]<<endl;
    cout<<umap[2]<<endl;
    cout<<endl;

    //Update
    umap[1]='c';

    //Print
    for(auto& elm: umap)
    {
        cout<<elm.first<<" "<<elm.second<<endl;
    }
    cout<<endl;

    //Find
    auto result=umap.find(2);
    if(result!=umap.end())
    {
        cout<<result->first<<" "<<result->second<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
    
    return 0;
}