// Maximize difference between the Sum of the two halves of the Array 
// after removal of N elements


// Given an integer N and array arr[] consisting of 3 * N integers, the task is to find the maximum difference between first half and second half of the array after the removal of exactly N elements from the array.

// Examples:

// Input: N = 2, arr[] = {3, 1, 4, 1, 5, 9}
// Output: 1
// Explanation:
// Removal of arr[1] and arr[5] from the array maximizes the difference = (3 + 4) – (1 + 5) = 7 – 6 = 1.

// Input: N = 1, arr[] = {1, 2, 3}
// Output: -1


#include <bits/stdc++.h>
using namespace std;

// Function to print the maximum difference
// possible between the two halves of the array
long long FindMaxDif(vector<long long> a, int m)
{
	int n = m / 3;

	vector<long long> l(m + 5), r(m + 5);

	// Stores n maximum values from the start
	multiset<long long> s;

	for (int i = 1; i <= m; i++) {

		// Insert first n elements
		if (i <= n) {

			// Update sum of largest n
			// elements from left
			l[i] = a[i - 1] + l[i - 1];
			s.insert(a[i - 1]);
		}

		// For the remaining elements
		else {
			l[i] = l[i - 1];

			// Obtain minimum value
			// in the set
			long long d = *s.begin();

			// Insert only if it is greater
			// than minimum value
			if (a[i - 1] > d) {

				// Update sum from left
				l[i] -= d;
				l[i] += a[i - 1];

				// Remove the minimum
				s.erase(s.find(d));

				// Insert the current element
				s.insert(a[i - 1]);
			}
		}
	}

	// Clear the set
	s.clear();

	// Store n minimum elements from the end
	for (int i = m; i >= 1; i--) {

		// Insert the last n elements
		if (i >= m - n + 1) {

			// Update sum of smallest n
			// elements from right
			r[i] = a[i - 1] + r[i + 1];
			s.insert(a[i - 1]);
		}

		// For the remaining elements
		else {

			r[i] = r[i + 1];

			// Obtain the minimum
			long long d = *s.rbegin();

			// Insert only if it is smaller
			// than maximum value
			if (a[i - 1] < d) {

				// Update sum from right
				r[i] -= d;
				r[i] += a[i - 1];

				// Remove the minimum
				s.erase(s.find(d));

				// Insert the new element
				s.insert(a[i - 1]);
			}
		}
	}

	long long ans = -9e18L;

	for (int i = n; i <= m - n; i++) {

		// Compare the difference and
		// store the maximum
		ans = max(ans, l[i] - r[i + 1]);
	}

	// Return the maximum
	// possible difference
	return ans;
}

// Driver Code
int main()
{

	vector<long long> vtr = { 3, 1, 4, 1, 5, 9 };
	int n = vtr.size();

	cout << FindMaxDif(vtr, n);

	return 0;
}
