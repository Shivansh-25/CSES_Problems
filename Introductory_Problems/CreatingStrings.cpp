// We can also use the next_permutation function but I wanted to raw dog the solution 
// I need to revise the recursion logic my brain is not braining
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

set<string> permutations;

void permute(string &s, int l, int r) {
    if (l == r) {
        permutations.insert(s);
        return;
    }
// merge conflict
// hello there first edit
// tera nhi lunga is baar

    for (int i = l; i <= r; i++) {
        swap(s[l], s[i]);
        permute(s, l + 1, r);
        swap(s[l], s[i]);
    }
}

int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    permute(s, 0, s.size() - 1);
    cout << permutations.size() << endl;
    for (string perm : permutations) {
        cout << perm << endl;
    }
    
    return 0;
}
