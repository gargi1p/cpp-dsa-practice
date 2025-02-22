#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        cout << hash[number] << endl;
    }
    return 0;
}


//Character Hashing (string contains only lowercase)
#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        cout << hash[c - 'a'] << endl;
    }
    return 0;
}


//Character Hashing (string contains both lowercase and uppercase)
#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i]]++;
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        cout << hash[c] << endl;
    }
    return 0;
}



// Map and Unordered_Map
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    // iterate over the map:
    /* for(auto it : mp){
            cout << it.first << "->" << it.second << endl;
        }
    */

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        cout << mp[number] << endl;
    }
    return 0;
}