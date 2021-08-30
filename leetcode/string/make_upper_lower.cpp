#include<bits/stdc++.h> 
using namespace std; 

int minOperations(string str, int n) 
{ 

	int i, lastUpper = -1, firstLower = -1; 

	for (i = n - 1; i >= 0; i--) 
	{ 
		if (isupper(str[i])) 
		{ 
			lastUpper = i; 
			break; 
		} 
	} 

	for (i = 0; i < n; i++) 
	{ 
		if (islower(str[i])) 
		{ 
			firstLower = i; 
			break; 
		} 
	} 

	if (lastUpper == -1 || firstLower == -1) 
		return 0; 

	int countUpper1 = 0; 
	for (i = firstLower; i < n; i++) 
	{ 
		if (isupper(str[i])) 
		{ 
			countUpper1++; 
		} 
	} 

	int countLower1 = 0; 
	for (i = 0; i < lastUpper; i++) 
	{ 
		if (islower(str[i])) 
		{ 
			countLower1++; 
		} 
	} 
    int ans1= min(countLower1, countUpper1); 
// --------------------------copy above
    int j, firstUpper = -1, lastLower = -1; 

	for (j = 0;j<n;j++) 
	{ 
		if (isupper(str[j])) 
		{ 
			firstUpper = j; 
			break; 
		} 
	} 

	for (j = n-1; j >=0; j--) 
	{ 
		if (islower(str[j])) 
		{ 
			lastLower = j; 
			break; 
		} 
	} 

	if (firstUpper == -1 || lastLower == -1) 
		return 0; 

	int countlower2 = 0; 
	for (j = firstUpper; j < n; j++) 
	{ 
		if (islower(str[j])) 
		{ 
			countlower2++; 
		} 
	} 

	int countUpper2 = 0; 
	for (j = 0; j < lastLower; j++) 
	{ 
		if (isupper(str[i])) 
		{ 
			countUpper2++; 
		} 
	} 

	int ans2= min(countlower2, countUpper2); 
    return min(ans1,ans2);
} 
int main() 
{ 
	string str = "SUNsunilfsdfdsfdsKUMARS"; 
	int n = str.length(); 
	cout << minOperations(str, n) << endl; 
} 

