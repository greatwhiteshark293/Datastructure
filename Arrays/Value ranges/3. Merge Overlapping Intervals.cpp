// 3. Merge Overlapping Intervals

// Asked In:
// Google
// Amazon
// Directi
// more
// Given a collection of intervals, merge all overlapping intervals.

// For example:

// Given [1,3],[2,6],[8,10],[15,18],

// return [1,6],[8,10],[15,18].

// Make sure the returned intervals are sorted.

// /**
//  * Definition for an interval.
//  * struct Interval {
//  *     int start;
//  *     int end;
//  *     Interval() : start(0), end(0) {}
//  *     Interval(int s, int e) : start(s), end(e) {}
//  * };
//  */
// O(n) Time Complexity
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<Interval> result;
    
    map<int,int> m;
    for(auto a : A){
        m[a.start]++;
        m[a.end]--;
    }
    int sum =0;
    int prev =0;
    for(auto a : m){
        if(!prev){
            prev = a.first;
        }
        sum += a.second;
        if(sum ==0){
            result.push_back(Interval(prev,a.first));
            prev =0;
        }
    }
    return result;
}
