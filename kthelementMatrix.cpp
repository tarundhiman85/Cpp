// { Driver Code Starts
// kth largest element in a 2d array sorted row-wise and column-wise
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);
// driver program to test above function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        int r;
        cin>>r;
        cout<<kthSmallest(mat,n,r)<<endl;
    }
    return 0;
}

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    //Your code here
    priority_queue<int> pq;
    //pq.push(mat[0][0]);
    int x=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            if(x<k){
               pq.push(mat[i][j]);
               x++;
            }
            else if(pq.top()>mat[i][j]){
                pq.pop();
                pq.push(mat[i][j]);
            }
        }
    }
return pq.top();
}
