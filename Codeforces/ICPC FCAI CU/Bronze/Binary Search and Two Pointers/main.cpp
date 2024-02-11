#include <bits/stdc++.h>
using namespace std;

///////////////////////////Two Pointers/////////////////////////////////
bool is_palindrome(string s){
    for(long long i = 0, j = s.size() -1; i < s.size()/2; ++i, j--){
        if(s[i] != s[j])
            return false;
    }
    return true;
}

// sliding window (tsheel mn el awel w tzawed mn el akher)
// da fixed - size window
// n = 4, k = 3 (7(i) 4 5(j) 3) -> (7 4(i) 5 3(j))
long long max_subarr(vector<long long> arr, long long k){
    long long ans = 0, sum = 0;
    for(long long i = 0; i < k; ++i){
        sum += arr[i];
    }
    ans = sum;
    for(long long i = k; i < arr.size(); ++i)
    {
        sum += arr[i];
        sum -= arr[i-k];
        ans = max(sum, ans);
    }
    return ans;
}

// da dynamic-size window
// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A
long long longest_subarr_of_sum_s(vector<long long> v, long long s){
    long long ans = 0, sum = 0;
    long long i = 0, j = 0;
    while(j < v.size()){
        sum += v[j];
        while( sum > s){
            sum -= v[i];
            i++;
        }
        ans = max(ans, j-i+1);
        j++;
    }
    return ans;
}


// find i & k for which a[l] + a[r] = s, l!=r
// use pairs to save indices of elements after sorting
pair<long long, long long> indices_of_elements_of_sum_s(vector<pair<long long, long long>> v, long long s){
    sort(v.begin(), v.end());
    long long l = 0, r = v.size()-1;
    while(l < r){
        if(v[l].first + v[r].first == s){
            return make_pair(v[l].second, v[r].second);
        }
        if(v[l].first + v[r].first > s)
            r--;
        else
            l++;
    }
    return make_pair(-1, -1);
}

////////////////////////////////Binary Search/////////////////////////////////

//works on monotonic examples (increasing or decreaseing - Sorted)
int binary_search(vector<int> v, int value)
{
    sort(v.begin(), v.end());
    int ans = -1, l = 0, r = v.size() - 0;
    while(l <= r){
        int mid = (l+r)/2;
        if(v[mid] > value){
            r = mid - 1;
        } else {
            ans = v[mid];
            l = mid + 1;
        }
    }
    return ans;
}


int find_element_index(vector<int> v, int value)
{
    sort(v.begin(), v.end());
    int ans = -1, l = 0, r = v.size() - 0;
    while(l <= r){
        int mid = (l+r)/2;
        if(v[mid] > value){
            r = mid - 1;
        } else if(v[mid] < value){
            l = mid + 1;
        } else if (v[mid] == value) {
            ans = mid;
            break;
        }
    }
    return ans;
}

//lower_bound() searching for the first greater than or equal element (2 4 6 7 9 12 13)  if target = 8 returns 9
// mid < x false, mid >= x true
//upper_bound() searching for the first greater than element (2 4 6 7 9 12 13)  if target = 8 returns 9
// mid <= x false, mid > x true

// https://codeforces.com/problemset/problem/371/C
void solve_ham(){
    string str;
    cin >> str;
    int b = 0, s = 0, c = 0, nb, ns, nc, pb, ps, pc;
    long long rubles, ans;
    cin >> nb >> ns >> nc >> pb >> ps >> pc >> rubles;
    for(auto x:str){
        if(x == 'B')
            b++;
        else if(x == 'S')
            s++;
        else
            c++;
    }
    long long l = 0, r = 1e13;
    while(l <= r){
        long long mid = (l+r)/2;
        long long need = 0;
        need += max(0LL, (mid*b - nb)*pb);
        need += max(0LL, (mid*s - ns)*ps);
        need += max(0LL, (mid*c - nc)*pc);
        if(need <= rubles){
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans;
}

//https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/B
void solve_rope(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    double l = 0, r = 1e8, ans = 0;

    // doubles are approximated
    // instead can loop for log2(1e8) + log2(1e6) or (100 for simplicity) to get precision of xxxxxxxx.xxxxxx
    while(r-l >= 1e-6){
        double mid = (l+r)/2;
        int cnt = 0;
        for(int i = 0; i < n; ++i){
            cnt += floor(v[i]/mid);
        }
        if(cnt >= k){
            ans = mid;
            l = mid;
        } else
            r = mid;
    }
    cout << setprecision(10) << ans << '\n';
}

//https://codeforces.com/group/u3Ii79X3NY/contest/272628/problem/C
// O(Tlog(n))
// long long -> 9 * 10^18
void solve_pharaohs(){
    long long n; cin >> n;
    long long l = 1, r = 2e9, ans;
    while(l <= r){
        long long mid = (l+r)/2;
        if(mid*(mid+1)/2 >= n){
            ans = mid;
            r = mid - 1;
        } else
            l = mid+1;
    }
    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve_pharaohs();
}
