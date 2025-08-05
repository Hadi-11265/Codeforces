#include<iostream>
#include<vector>
using namespace std;
int main() 
{
    int i,n,moves;
    cin>>n;

    vector<int>heights(n);
    for(i=0;i<n;i++)
    {
        cin>>heights[i];
    }

    int maxHeight = heights[0];
    int minHeight = heights[0];
    int maxIndex = 0;
    int minIndex = 0;

    for(i=0;i<n;i++) 
    {
        if (heights[i]>maxHeight)
        {
            maxHeight = heights[i];
            maxIndex = i;
        }
        if (heights[i]<=minHeight)
        {
            minHeight = heights[i];
            minIndex = i;
        }
    }

    moves = maxIndex + (n-1-minIndex);

     if (maxIndex > minIndex) {
        moves--;
    }

    cout <<moves<<endl;
    
}