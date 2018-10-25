/*
����� ������: Fatalre
�������:
��� ������ ����� �����, ������� ����� ��������� �� 100000 �����.
����������, ������� � ��� ����������� ��������� �����.

������� ������

�������� ����� N - ���������� ��������� ������, � ����� N �����.

�������� ������

�������� ����� �� ������.

Sample Input:
5
1 2 3 2 1
Sample Output:
3

*/

#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s;
    int n;

    cin >> n;

    while (cin >> n) {
        s.insert(n);
    }

    cout << s.size();

    return 0;
}
/*
����� ������: Fatalre
�������:
�� ������� ������ �������� ������������������ ����� ����� ������.
��� ������� ����� �������� ����� YES (� ��������� ������),
���� ��� ����� ����� ����������� � ������������������ ��� NO, ���� �� �����������.

������� ������

�������� ����� N - ���������� ��������� ������, � ����� N �����.

�������� ������

�������� ����� �� ������.

Sample Input:
6
1 2 3 2 3 4
Sample Output:
NO
NO
NO
YES
YES
NO

*/

#include <iostream>
#include <set>

using namespace std;

int main() {
    multiset<int> s;
    int n;

    cin >> n;

    while (cin >> n) {
        if (s.find(n) == s.end()) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
        s.insert(n);
    }

    return 0;
}
/*
����� ������: Fatalre
�������:
?���� ��� ������ �����, ������� ����� ��������� �� 100000 ����� ������.
����������, ������� ����� ���������� ������������ ��� � ������ ������, ��� � �� ������.

������� ������

�������� ����� N - ���������� ��������� ������� ������, � ����� N ����� ������� ������.

����� �������� ����� M - ���������� ��������� ������� ������, � ����� M ����� ������� ������.

�������� ������

�������� ����� �� ������.

Sample Input:
3
1 3 2
3
4 3 2
Sample Output:
2

*/

#include <iostream>
#include <set>

using namespace std;

set<int>& fill_set(set<int>& s, int n) {
    int num;
    for (; n > 0; --n) {
        cin >> num;
        s.insert(num);
    }

    return s;
}

set<int> intersection(const set<int>& s1, const set<int>& s2) {
    set<int> new_s;
    set<int>::const_iterator it1 = s1.begin();
    set<int>::const_iterator it2 = s2.begin();

    while (it1 != s1.end() && it2 != s2.end()) {
        if (*it1 < *it2) {
            ++it1;
        }
        else if (*it1 > *it2) {
            ++it2;
        }
        else {
            new_s.insert(*it1);
            ++it1;
            ++it2;
        }
    }

    return new_s;
}

int main() {
    set<int> s1, s2;
    int n;

    cin >> n;
    s1 = fill_set(s1, n);
    cin >> n;
    s2 = fill_set(s2, n);

    set<int> s = intersection(s1, s2);

    cout << s.size();

    return 0;
}
/*
����� ������: Fatalre
�������:
���� ��� ������ �����, ������� ����� ��������� �� 100000 ����� ������.
�������� ��� �����, ������� ������ ��� � ������, ��� � �� ������ ������ � ������� �����������.

������� ������

�������� ����� N - ���������� ��������� ������� ������, � ����� N ����� ������� ������.

����� �������� ����� M - ���������� ��������� ������� ������, � ����� M ����� ������� ������.

�������� ������

�������� ����� �� ������.

Sample Input:
3
1 3 2
3
4 3 2
Sample Output:
2 3
*/

#include <iostream>
#include <set>

using namespace std;

set<int>& fill_set(set<int>& s, int n) {
    int num;
    for (; n > 0; --n) {
        cin >> num;
        s.insert(num);
    }

    return s;
}

set<int> intersection(const set<int>& s1, const set<int>& s2) {
    set<int> new_s;
    set<int>::const_iterator it1 = s1.begin();
    set<int>::const_iterator it2 = s2.begin();

    while (it1 != s1.end() && it2 != s2.end()) {
        if (*it1 < *it2) {
            ++it1;
        }
        else if (*it1 > *it2) {
            ++it2;
        }
        else {
            new_s.insert(*it1);
            ++it1;
            ++it2;
        }
    }

    return new_s;
}

int main() {
    set<int> s1, s2;
    int n;

    cin >> n;
    s1 = fill_set(s1, n);
    cin >> n;
    s2 = fill_set(s2, n);

    set<int> s = intersection(s1, s2);

    for (set<int>::const_iterator it = s.begin(); it != s.end(); ++it) {
        cout << *it << ' ';
    }

    return 0;
}
/*
����� ������: Fatalre
�������:
��� ��� �������, ��������� �� ��� ����. ������ ����� �������� ��������� �
������� ��� �����. ��� ����� � ������� ��������.
��� ������ ������� ����� ���������� ��� �������.

������� ������
��������� �������� �� ���� ���������� ��� ��������� N.
����� ������� N �����, ������ ������ �������� ����� ��� �����-��������.
����� ����� ������� ���� �����.

�������� ������
��������� ������ ������� ������� � ������� �����.

Sample Input:
3
Hello Hi
Bye Goodbye
List Array
Goodbye
Sample Output:
Bye

*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, string> syn;
    int n;
    string s_word;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        string first, second;

        cin >> first >> second;
        syn[first] = second;
        syn[second] = first;
    }

    cin >> s_word;

    cout << syn[s_word];

    return 0;
}
/*
����� ������: Fatalre
�������:
�������, �������� ������ ����� �� �������, �������� ���� ����� �����-��������� �������.
���������� �� � ���� ������� ���� � ������������, � ��� ������ ���� ������� ������.
������� ���������� ������� ��� ��� ��� ������.
� ���������, ��� ������������ �������� ����� ������������ ������ ������ �������:
����� �����-���������� ��������� ��������-����������.
�� ��������� ������� �� ����� ������� ������ ������� �� �������.

��� ��������, ������� ������� �� ����������� ����, � ������� �� ������� ���������� ��������� ����-���������.
��� ������� ���������� �����, �������������� ���-���� � �������, ����
���������� ����� ��� ��� �������� (�� ���� ��� ���������� �����, ��� ������� ���� ��������� ����������� � ��� ������ ���������),
� ������� �� � ������ �� ���������� ����� ���������� �����.

�������� ���� ��������� ������ �� �������� ��������-����������� ������� �� �����-����������.

������� ������

� ������ ������ ���������� ������������ ����� ����� N � ���������� ���������� ���� � �������.
����� ������� N ��������. ������ �������� ���������� � ��������� ������,
� ������� �������� ������� ���������� �����, ����� ��������� ��������� ����� (������ ����� 45),
����� ���������� �������� � ��������� �������� ����� ����������� ����� �� ���������. �������� �������������
� ������������������ �������. ������� ���������� ���������� ���� � ������� ����� ������������������.

��� ����� ������� ������ �� ��������� ��������� ����, ����� ������� ����� �� ����������� 15 ��������.
����� ���������� ���� �� ����� �� ��������� 100000.

�������� ������

�������� ��������������� ������� ��������-���������� �������, � �������� �������� ������ ������� ������.
� ���������, ������ ������ ���� ������� ����������������� ������������ ���������� �����,
����� � ������� � ���� ������� � �.�. ������ �������� ���������� ����� ������ ���� ����� ������������� �����������������.

Sample Input:
3
apple - malum, pomum, popula
fruit - baca, bacca, popum
punishment - malum, multa
Sample Output:
7
baca - fruit
bacca - fruit
malum - apple, punishment
multa - punishment
pomum - apple
popula - apple
popum - fruit
*/

#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

vector<string> get_translate() {
    const char delim = ',';
    vector<string> v;
    string tr;
    int prev_pos = 0, pos = 0;

    getline(cin, tr);
    while ((pos = tr.find(delim, prev_pos)) != string::npos) {
        v.push_back(tr.substr(prev_pos, pos - prev_pos));
        prev_pos = pos + 2;
    }

    v.push_back(tr.substr(prev_pos, tr.size() - prev_pos));

    return v;
}

map<string, vector<string>>& fill_map(map<string, vector<string>>& m, int n) {
    string s;
    char delim;

    for (int i = 0; i < n; ++i) {
        cin >> s >> delim;
        cin.get(); // remove space after delimiter
        m[s] = get_translate();
    }

    return m;
}

map<string, vector<string>> eng_to_lat(const map<string, vector<string>>& m) {
    map<string, vector<string>> tmp;

    for (map<string, vector<string>>::const_iterator it = m.begin(); it != m.end(); ++it) {
        for (int i = 0; i < it->second.size(); ++i) {
            tmp[it->second[i]].push_back(it->first);
        }
    }

    return tmp;
}

int main() {
    int n;
    map<string, vector<string>> eng_lat;
    map<string, vector<string>> lat_eng;

    cin >> n;
    eng_lat = fill_map(eng_lat, n);
    lat_eng = eng_to_lat(eng_lat);

    cout << lat_eng.size() << endl;
    for (map<string, vector<string>>::const_iterator it = lat_eng.begin(); it != lat_eng.end(); ++it) {
        cout << it->first << " - ";
        for (int i = 0; i < it->second.size(); ++i) {
            cout << it->second[i];
            if (i + 1 < it->second.size()) {
                cout << ", ";
            }
        }
        cout << endl;
    }

    return 0;
}
/*
����� ������: Fatalre
�������:
����������� ������ ���� �������� ������� � � �������� ������ ���������� �������� � ������,
����� ���� �������� ���� ��������� ��� �������� �������. ���� ����� ����� ������ � ������ �����,
������� �� ����� �������, � ������� �������, ��� �������� �������� � ������. � ���������,
� ���� ������� ������������ �� ��� �����. ���� �����, ��� � ������, ������� ��� � �������,
�� ����� �������, ��� ���� �������� �������� ���������, ���� � ���� ����� ����� ���������� ����� ���� ��������.

���������, ��� � ��������� ������ �������� ����� ���� ���������� ������, ��� ����� ��������.
���� �����, ��� � ���� ������ ���� ��, ��� ���� �������� ��������, ������������� ������ ��
����������� � ������� ���������, �� ����� ����������� ��� ��� ���������� ����������� ��������,
� ���� �� �������������, �� ��� ������.

��� ��� �������, ������� ����������� ���� � �������� �������, ������� �����. ���� ������ �
���������� ���������� ������, ������� � ���� ������� ��������� ����.

������� ������

�������� ������� ����� N � ���������� ���� � ������� (0 ? N ? 20000).

����� ���� N ����� �� ������� �� �������. ������ ����� ������� �� ����� ��� �� 30 ��������.
��� ����� ������� �� ��������� � ��������� ��������� ����. � ������ ����� ��������� ����� ���� ����� �
��, �� ������� �������� ��������. ����� � ������� ����������� � ���������� �������.
���� ���� ��������� ������������ ����������� �������� � ����� � ��� �� �����, �� ��� �������� � ������� ���� � ������������ �������.

����� ���� ����������, ����������� �����. ���������� ������������ ����� ������ ������,
��������� ������� �� ����� 300000 ��������. ������ ������� �� ����, ������� ����������� �����
����� ����� ����� ��������. ����� ������� ����� �� ��������� 30 ��������. ��� ����� ������� ��
��������� � ��������� ��������� ���� (���������� ���������� �� �����, ��� �������� ���� �������� ��������).
���� ��� �� ������ � �����-�� ����� ��������� ����� ������ �������� ��� �� ��������� �������� �����.

�������� ������

�������� ���������� ������ � ������� ������, ������� ������ ����.
���������� � �������

1. � ����� cannot, �������� ������� �������� ��� �������� ����������� ��������.
��� �������� � ������� ����� ���� ����������� � ����� ������� (�.�. ��� ������� cAnnot, � ����� cannOt, ��� � ��������).
��� ������, ����������� ����� � ��� ����� be (�������� ������ �� ����������) � fouNd
(�������� ���������� �������). ����� thE ����������� � �������, �� ��������� � ��� ���� �������� ����� ���� ��������, ���������� ������.

2. ������� ����������� �������� �� ���� ������, ����� The
(��� ����������� � �������, � ��� ���������� ����� ���� ��������).
� ��������� ������ ���� ������� ��� ����� (� ����� PAGE), ���� �� ���������� �� ������ ��������.

Sample Input:
4
cAnnot
cannOt
fOund
pAge
thE pAge cAnnot be found
Sample Output:
2

*/

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

// put a string to lower case for our dictionary
// we can use it as a tag
string to_lower_case(const string& s) {
    string tmp;

    for (int i = 0; i < s.size(); ++i) {
        char ch = s[i];
        if (isupper(ch)) {
            ch = tolower(ch);
        }

        tmp.push_back(ch);
    }

    return tmp;
}

// filling new dictionary
map<string, vector<string>>& fill_dict(map<string, vector<string>>& d, int n) {
    string word;
    string bookmark;

    for (int i = 0; i < n; ++i) {
        cin >> word;
        bookmark = to_lower_case(word);
        d[bookmark].push_back(word);
    }

    return d;
}

void print_dict(const map<string, vector<string>>& dict) {
    for (auto it = dict.begin(); it != dict.end(); ++it) {
        cout << it->first << ": ";
        for (auto&i : it->second) {
            cout << i << ' ';
        }
        cout << endl;
    }
}

// check if a word is in a dictionary
bool in_dict(const vector<string>& dict, const string &word) {
    for (int i = 0; i < dict.size(); ++i) {
        if (word == dict[i]) {
            return true;
        }
    }

    return false;
}

// count accents in a word which are dedicated by upper letters
int count_upper(const string &s) {
    int cnt = 0;

    for (int i = 0; i < s.size(); ++i) {
        if (isupper(s[i])) {
            ++cnt;
        }
    }

    return cnt;
}

// check essay for right accents in words with using a dictionary
int check_work(const map<string, vector<string>>& dict) {
    int mistakes = 0;
    string word;

    while (cin >> word) {
        if (count_upper(word) != 1) {
            ++mistakes;
        }
        else {
            string low_case_word = to_lower_case(word);
            auto it = dict.find(low_case_word);

            if (it != dict.end() && !in_dict(it->second, word)) {
                ++mistakes;
            }
        }
    }

    return mistakes;
}

int main() {
    map<string, vector<string>> dict;
    int n;

    cin >> n;
    dict = fill_dict(dict, n);
    cout << check_work(dict);

    return 0;
}
