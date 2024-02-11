#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

// Utillity Functions
void print_array(vector<int> &A, int start, int end)
{
  for (int i = start; i <= end; i++)
  {
    cout << A[i] << " ";
  }
  cout << '\n';
}

void swap(vector<int> &A, int i, int j)
{
  int temp = A[i];
  A[i] = A[j];
  A[j] = temp;
}

// 0 - Selection Sort
void selection_sort(vector<int> &A)
{
  // n rounds
  for (int i = 0; i < A.size(); i++)
  {
    // finding minimum in the rest of the array
    int minimum_index, minimum = INT_MAX;
    for (int j = i; j < A.size(); j++)
    {
      if (A[j] < minimum)
      {
        minimum = A[j];
        minimum_index = j;
      }
    }

    // placing the correct value in index i
    A[minimum_index] = A[i];
    A[i] = minimum;
  }
}

// 1 - Insertion Sort
void insertion_sort(vector<int> &A)
{
  // i - element to be inserted in sorted part of the array
  for (int i = 1; i < A.size(); i++)
  {
    // extracted element
    int key = A[i], j = i - 1;
    // comparing it to previous elements till another smaller or equal value
    // is found (or the beginning of the array is reached)
    while (j >= 0 && A[j] > key)
    {
      A[j + 1] = A[j];
      j--;
    }
    // j here points to the smaller or equal element (or -1 if at the beginning of the array)
    A[j + 1] = key;
  }
}

// 2 - Merge Sort
void merge(vector<int> &A, int start, int middle, int end)
{
  int n1 = middle - start + 1, n2 = end - middle;
  vector<int> L(n1 + 1), R(n2 + 1);
  // copying left and right partitions to external vectors
  for (int i = 0; i < n1; i++)
  {
    L[i] = A[start + i];
  }
  L[n1] = INT_MAX;
  for (int i = 0; i < n2; i++)
  {
    R[i] = A[middle + 1 + i];
  }
  R[n2] = INT_MAX;
  int i = 0, j = 0;
  // merging the two sorted vectors in θ(n)
  for (int k = start; k <= end; k++)
  {
    // higher priority for L at equality ensuring stable sorting
    if (L[i] <= R[j])
    {
      A[k] = L[i++];
    }
    else
    {
      A[k] = R[j++];
    }
  }
}

void merge_sort(vector<int> &A, int start, int end)
{
  if (start < end)
  {
    int middle = (start + end) / 2;
    merge_sort(A, start, middle);
    merge_sort(A, middle + 1, end);
    merge(A, start, middle, end);
  }
}

// 3 - Quick Sort
int partition(vector<int> &A, int start, int end)
{
  int pivot = A[end], i = start - 1;

  for (int j = start; j < end; j++)
  {
    if (A[j] <= pivot)
    {
      i++;
      swap(A, i, j);
    }
  }
  swap(A, i + 1, end);
  return i + 1;
}

void quick_sort(vector<int> &A, int start, int end)
{
  if (start < end)
  {
    int divider = partition(A, start, end);
    quick_sort(A, start, divider - 1);
    quick_sort(A, divider + 1, end);
  }
}

// 4 - Hybrid Sort
void reverse_insertion_sort(vector<int> &A, int start, int end)
{
  // i - element to be inserted in sorted part of the array
  for (int i = end; i >= start; i--)
  {
    // extracted element
    int key = A[i], j = i + 1;
    // comparing it to previous elements till another smaller or equal value
    // is found (or the beginning of the array is reached)
    while (j <= end && A[j] > key)
    {
      A[j - 1] = A[j];
      j++;
    }
    // j here points to the smaller or equal element (or -1 if at the beginning of the array)
    A[j - 1] = key;
  }
}

void reverse_array(vector<int> &A, int start, int end)
{
  int i = start, j = end;
  while (j > i)
  {
    swap(A, i, j);
    i++;
    j--;
  }
}

void ranged_insertion_sort(vector<int> &A, int start, int end)
{
  // i - element to be inserted in sorted part of the array
  for (int i = start + 1; i <= end; i++)
  {
    // extracted element
    int key = A[i], j = i - 1;
    // comparing it to previous elements till another smaller or equal value
    // is found (or the beginning of the array is reached)
    while (j >= start && A[j] > key)
    {
      A[j + 1] = A[j];
      j--;
    }
    // j here points to the smaller or equal element (or -1 if at the beginning of the array)
    A[j + 1] = key;
  }
}

// Median of Three Strategy
void choose_pivot(vector<int> &A, int start, int end)
{
  int mid = (start + end) / 2;
  int larger = (A[start] > A[mid]) ? start : mid;
  if (A[larger] < A[end])
    swap(A, larger, end);
}

// Approach 1
void improved_quick_sort_v1(vector<int> &A, int start, int end)
{
  if (start < end)
  {
    choose_pivot(A, start, end);
    int divider = partition(A, start, end);
    improved_quick_sort_v1(A, start, divider - 1);
    improved_quick_sort_v1(A, divider + 1, end);
  }
}

// Approach 1
void hybrid_sort_v1(vector<int> &A)
{
  // skimming data to get a sense of its arrangement
  int out_of_order = 0;
  for (int i = 1; i < A.size(); i++)
  {
    if (A[i] < A[i - 1])
    {
      out_of_order++;
    }
  }

  // if the data is almost sorted in some way, it would be efficient to place the few remaining elements
  // in their correct positions
  if (out_of_order >= 0.9 * A.size())
  {
    reverse_insertion_sort(A, 0, A.size() - 1);
    reverse_array(A, 0, A.size() - 1);
  }
  else if (out_of_order <= 0.1 * A.size())
  {
    ranged_insertion_sort(A, 0, A.size() - 1);
  }
  else
  {
    improved_quick_sort_v1(A, 0, A.size() - 1);
  }
}

// Approach 2
void quick_merge(vector<int> &A, int start, int end)
{
  if (start < end)
  {
    choose_pivot(A, start, end);
    int mid = start + (end - start) / 2, divider = partition(A, start, end);

    // if the list is not divided evenly as expected, use merge sort for this level
    if (abs(divider - mid) > 0.15 * (end - start))
    {
      quick_merge(A, start, mid);
      quick_merge(A, mid + 1, end);
      merge(A, start, mid, end);
    }
    else
    {
      quick_merge(A, start, divider - 1);
      quick_merge(A, divider + 1, end);
    }
  }
}

// Approach 2
void hybrid_sort_v2(vector<int> &A)
{
  // skimming data to get a sense of its arrangement
  int out_of_order = 0;
  for (int i = 1; i < A.size(); i++)
  {
    if (A[i] < A[i - 1])
    {
      out_of_order++;
    }
  }

  // if the data is almost sorted in some way, it would be efficient to place the few remaining elements
  // in their correct positions
  if (out_of_order >= 0.9 * A.size())
  {
    reverse_insertion_sort(A, 0, A.size() - 1);
    reverse_array(A, 0, A.size() - 1);
  }
  else if (out_of_order <= 0.1 * A.size())
  {
    ranged_insertion_sort(A, 0, A.size() - 1);
  }
  else
  {
    quick_merge(A, 0, A.size() - 1);
  }
}

// Approach 3
int improved_partition(vector<int> &A, int start, int end, int &out_of_order_A, int &out_of_order_B)
{
  int pivot = A[end], i = start - 1;

  for (int j = start; j < end; j++)
  {
    if (A[j] <= pivot)
    {
      i++;
      swap(A, i, j);
      if (A[i] > A[min(i - 1, start)])
        out_of_order_A++;
    }
  }
  swap(A, i + 1, end);
  for (int j = i + 3; j < end; j++)
  {
    out_of_order_B += (A[j] > A[j - 1]);
  }
  return i + 1;
}

// Approach 3
void hybrid_sort_v3(vector<int> &A, int start, int end)
{
  int out_of_order_A = 0, out_of_order_B = 0;
  if (start < end)
  {
    choose_pivot(A, start, end);
    int divider = improved_partition(A, start, end, out_of_order_A, out_of_order_B);

    int size_A = (divider - start);
    if (out_of_order_A >= 0.9 * size_A && size_A <= 1000)
    {
      reverse_insertion_sort(A, start, divider - 1);
      reverse_array(A, start, divider - 1);
    }
    else if (out_of_order_A <= 0.1 * size_A && size_A <= 1000)
    {
      ranged_insertion_sort(A, start, divider - 1);
    }
    else
      hybrid_sort_v3(A, start, divider - 1);

    int size_B = (end - divider);
    if (out_of_order_B >= 0.9 * size_B && size_B <= 1000)
    {
      reverse_insertion_sort(A, divider + 1, end);
      reverse_array(A, divider + 1, end);
    }
    else if (out_of_order_B <= 0.1 * size_B && size_B <= 1000)
    {
      ranged_insertion_sort(A, divider + 1, end);
    }
    else
      hybrid_sort_v3(A, divider + 1, end);
  }
}

int main(int argc, char *argv[])
{
  int algorithm_number = stoi(argv[1]);
  string input_path = argv[2], output_path = argv[3], analysis_path = argv[4];
  freopen(input_path.c_str(), "r", stdin);
  vector<int> A;
  int number;
  while (cin >> number)
  {
    A.push_back(number);
  }
  fclose(stdin);
  auto begin = high_resolution_clock::now();
  switch (algorithm_number)
  {
  case 0:
    selection_sort(A);
    break;
  case 1:
    insertion_sort(A);
    break;
  case 2:
    merge_sort(A, 0, A.size() - 1);
    break;
  case 3:
    quick_sort(A, 0, A.size() - 1);
    break;
  case 4:
    hybrid_sort_v1(A);
    // hybrid_sort_v2(A);
    // hybrid_sort_v3(A, 0, A.size() - 1);
    break;
  default:
    cout << "Wrong Algorithm Option";
    return 0;
  }
  auto end = high_resolution_clock::now();
  auto duration = duration_cast<milliseconds>(end - begin);
  freopen(output_path.c_str(), "w", stdout);
  for (int x : A)
  {
    cout << x << '\n';
  }
  freopen(analysis_path.c_str(), "w", stdout);
  cout << duration.count();
  fclose(stdout);
  return 0;
}