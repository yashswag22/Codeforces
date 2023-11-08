#include <bits/stdc++.h>
using namespace std;



// Driver code 
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	vector<int>v;
    	set<int>sett;
    	for(int i=0;i<n;i++){
    		int temp;
    		cin>>temp;
    		v.push_back(temp);
    		sett.insert(temp);
    	}
    	bool check = false;
    	// if(v.size() == sett.size() || (sett.size() <= 2 && v.size()<=3) || sett.size()<2)
    	// 	cout<<-1<<"\n";
    	// if( sett.size() >= 2 && v.size() >= 4 && sett.size()< v.size() && (v.size()-sett.size()>=2))
    	//{
    	   int ans[n];
    		for(int i =0;i<n;i++)
    			ans[i]=1;

    		int cnt =0;
    		for(int i=0;i<n-1;i++)
    		{   
    			 if(cnt>1) break;
    			int temp2 = v[i];
    			if(v[i]!=-1){

    			for(int j=i+1;j<n;j++)
    			{

    				if(v[j]!=-1){

    				if(temp2 == v[j] && cnt ==0)
    				{
    					ans[i]=2;
    					cnt++;
    					for(int k=j;k<n;k++)
    					{
    						if(v[k]== temp2)
    							v[k]=-1;
    					}
    					break;
    				}
    				else if( temp2 == v[j] && cnt ==1)
    				{
    					ans[i]=3;
    					cnt++;
    					check = true;
    					for(int k=j;k<n;k++)
    					{
    						if(v[k]== temp2)
    							v[k]=-1;
    					}
    					break;
    				}

    			  }
    			}
    		  }
    		}
    		if(check == true){
    		for(int i=0;i<n;i++)
    			cout<<ans[i]<<" ";
    		cout<<endl;
    	   }
    	//}
    	else
    		cout<<-1<<endl;

    }
} 

