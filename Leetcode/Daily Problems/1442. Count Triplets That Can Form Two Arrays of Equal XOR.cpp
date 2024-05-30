// 1442. Count Triplets That Can Form Two Arrays of Equal XOR

// Given an array of integers arr.

// We want to select three indices i, j and k where (0 <= i < j <= k < arr.length).

// Let's define a and b as follows:

// a = arr[i] ^ arr[i + 1] ^ ... ^ arr[j - 1]
// b = arr[j] ^ arr[j + 1] ^ ... ^ arr[k]
// Note that ^ denotes the bitwise-xor operation.

// Return the number of triplets (i, j and k) Where a == b.

// Example 1:

// Input: arr = [2,3,1,6,7]
// Output: 4
// Explanation: The triplets are (0,1,2), (0,2,2), (2,3,4) and (2,4,4)
// Example 2:

// Input: arr = [1,1,1,1,1]
// Output: 10

// Constraints:

// 1 <= arr.length <= 300
// 1 <= arr[i] <= 1e8

class Solution
{
public:
  int countTriplets(vector<int> &arr)
  {
    int n = arr.size(), cnt = 0;
    vector<int> prefix(n, arr[0]);
    for (int k = 1; k < n; k++)
    {
      prefix[k] = arr[k] ^ prefix[k - 1];
      if (!prefix[k])
        cnt += k;
      for (int i = 0; i < k; i++)
      {
        if ((prefix[i] ^ prefix[k]) == 0)
        {
          cnt += k - i - 1;
          cout << i << " " << k << endl;
        }
      }
    }
    return cnt;
  }
};