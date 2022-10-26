// Simplify Directory Path

// Given a string A representing an absolute path for a file (Unix-style).

// Return the string A after simplifying the absolute path.

// Note:

// In Unix-style file system:

// A period '.' refers to the current directory.
// A double period '..' refers to the directory up a level.
// Any multiple consecutive slashes '//' are treated as a single slash '/'.
// In Simplified Absolute path:

// The path starts with a single slash '/'.
// Any two directories are separated by a single slash '/'.
// The path doesn't end with trailing slashes '/'.
// The path only contains the directories on the path from the root directory to the target file or directory (i.e., no period '.' or double period '..')
// Path will not have whitespace characters.



// Input Format

// The only argument given is string A.
// Output Format

// Return a string denoting the simplified absolue path for a file (Unix-style).
// For Example

// Input 1:
//     A = "/home/"
// Output 1:
//     "/home"

// Input 2:
//     A = "/a/./b/../../c/"
// Output 2:
//     "/c"

//O(n) Time
//O(n) Space

string Solution::simplifyPath(string A) {
    stringstream ss(A);
    string temp ="";
    vector<string> stk;
    while(getline(ss,temp,'/')){ 
        if(temp == ".."){
            if(!stk.empty()) stk.pop_back();
        }
        else if(temp !="." && temp !="/" && temp !="" ) {
            stk.push_back(temp);
        }
    }
    string res="";
    int i=0;
    while(i< stk.size()){
        res += "/" + stk[i++];
    }
    return res.size() == 0 ? "/" : res;
}
