// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
vector<vector<string> > Anagrams(vector<string>& string_list) ;
void sortString(string &str)
{
    sort(str.begin(), str.end());
}
vector<vector<string> > Anagrams(vector<string>& string_list)
{
    // Your Code Here
    vector<string> original=string_list;
    unordered_map<string, int> umap;
    int n=string_list.size();
    for (int i = 0; i < n; ++i) {
        sortString(string_list[i]);
        umap[string_list[i]]=i;
        if(umap.count(string_list[i])>1){
            //means key exists  to be continued
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i];
        vector<vector<string> > result = Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
// } Driver Code Ends