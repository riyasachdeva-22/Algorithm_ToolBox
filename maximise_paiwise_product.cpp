#include<iostream>
using namespace std;
#include <bits/stdc++.h>
int  main()
{
long long int n;
	cin>>n;
long long int a[n];
	for(long long int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	cout<<a[n-1]*a[n-2]<<endl;
	
}

