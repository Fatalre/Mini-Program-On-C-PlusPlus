/*
����� ������: Fatalre
�������:
�������� ��� �������� ������� � ������� ��������� (�� ���� A[0], A[2], A[4], ...).

������ ������� ������
� ������ ������ �������� ���������� ��������� � �������. �� ������ ������ �������� �������� �������.

������ �������� ������
�������� ����� �� ������.

Sample Input:
5
1 2 3 4 5
Sample Output:
1 3 5

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int q;
    vector<int> st;

    cin >> q;

    for (int i = 0; i != q; ++i) {
        int tmp;

        cin >> tmp;
        st.push_back(tmp);
    }

    for (int i = 0; i < st.size(); ++i) {
        if (i % 2 == 0) {
            cout << st[i] << ' ';
        }
    }

    return 0;
}
/*
����� ������: Fatalre
�������:
�������� ��� ������ �������� �������.
������ ������� ������
� ������ ������ �������� ���������� ��������� � �������. �� ������ ������ �������� �������� �������.
������ �������� ������
�������� ����� �� ������.
Sample Input:
7
1 2 2 3 3 3 4
Sample Output:
2 2 4

*/

#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    int q;
    vector<int> st;

    cin >> q;

    for (int i = 0; i < q; ++i) {
        int tmp;

        cin >> tmp;

        if (tmp % 2 == 0) {
            st.push_back(tmp);
        }
    }

    copy(st.begin(), st.end(), ostream_iterator<int> {cout, " "});

    return 0;
}
/*
����� ������: Fatalre
�������:
������� ���������� ������������� ��������� � ������ �������.

������ ������� ������
� ������ ������ �������� ���������� ��������� � �������. �� ������ ������ �������� �������� �������.

������ �������� ������
�������� ����� �� ������.

Sample Input:
5
1 -2 3 -4 5
Sample Output:
3

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int q;
    vector<int> st;

    cin >> q;

    for (int i = 0; i < q; ++i) {
        int tmp;

        cin >> tmp;

        if (tmp > 0) {
            st.push_back(tmp);
        }
    }

    cout << st.size();

    return 0;
}
/*
����� ������: Fatalre
�������:
��� ������ �����. �������� ��� �������� �������, ������� ������ ����������� �������� .

������ ������� ������
� ������ ������ �������� ���������� ��������� � �������. �� ������ ������ �������� �������� �������.

������ �������� ������
�������� ����� �� ������.

Sample Input:
5
1 5 2 4 3
Sample Output:
5 4

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int q;
    vector<int> st;

    cin >> q;

    for (int i = 0; i < q; ++i) {
        int tmp;

        cin >> tmp;
        st.push_back(tmp);
    }

    for (int i = 1; i < st.size(); ++i) {
        if (st[i - 1] < st[i]) {
            cout << st[i] << ' ';
        }
    }

    return 0;
}
/*
����� ������: Fatalre
�������:
��� ������ �����. ���� � ��� ���� ��� �������� �������� ������ �����,
�������� ��� �����. ���� �������� ��������� ������
����� ��� - �� �������� ������. ���� ����� ��� ������� ��������� - �������� ������ ����.
������ ������� ������
� ������ ������ �������� ���������� ��������� � �������. �� ������ ������ �������� �������� �������.
������ �������� ������
�������� ����� �� ������.
Sample Input:
5
-1 2 3 -1 -2
Sample Output:
2 3

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int q;
    vector<int> st;

    cin >> q;

    for (int i = 0; i < q; ++i) {
        int tmp;

        cin >> tmp;
        st.push_back(tmp);
    }

    bool pair = false;

    for (int i = 1; i < st.size() && !pair; ++i) {
        if (st[i - 1] < 0 && st[i] < 0 || st[i - 1] > 0 && st[i] > 0) {
            cout << st[i - 1] << ' ' << st[i];
            pair = true;
        }
    }

    return 0;
}
/*
����� ������: Fatalre
�������:
�������� �������� ����������� �� ���� ������������� ��������� � �������.
��������, ��� � ������� ���� ���� �� ���� ������������� �������.

������ ������� ������
� ������ ������ �������� ���������� ��������� � �������. �� ������ ������ �������� �������� �������.

������ �������� ������
�������� ����� �� ������.

Sample Input:
5
5 -4 3 -2 1
Sample Output:
1

*/

#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    int q;
    vector<int> st;

    cin >> q;

    while (cin >> q) {
        st.push_back(q);
    }

    int min_pos = numeric_limits<int>::max();

    for (int i = 1; i < st.size(); ++i) {
        if (st[i] > 0 && st[i] < min_pos) {
            min_pos = st[i];
        }
    }

    cout << min_pos;

    return 0;
}
/*
����� ������: Fatalre
�������:
�������� �������� ����������� ��������� �������� ������, � ���� � ������ ��� �������� ��������� - �������� ����� 0.
������ ������� ������
� ������ ������ �������� ���������� ��������� � �������. �� ������ ������ �������� �������� �������.
������ �������� ������
�������� ����� �� ������.
Sample Input 1:
5
0 1 2 3 4
Sample Output 1:
1

Sample Input 2:
5
2 4 6 8 10
Sample Output 2:
0

*/

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int q;
    vector<int> st;

    cin >> q;

    while (cin >> q) {
        st.push_back(q);
    }

    int min_odd = 0;

    for (int i = 0; i < st.size(); ++i) {
        if (abs(st[i]) % 2 == 1) {
            if (min_odd == 0) {
                min_odd = st[i];
            }
            else {
                if (st[i] < min_odd) {
                    min_odd = st[i];
                }
            }
        }
    }

    cout << min_odd;

    return 0;
}

/*
����� ������: Fatalre
�������:
��� ������, ������������� �� ���������� ��������� � ���. ����������, ������� � ��� ��������� ���������.

������ ������� ������
� ������ ������ �������� ���������� ��������� � �������. �� ������ ������ �������� �������� �������.

������ �������� ������
�������� ����� �� ������.

Sample Input:
6
1 2 2 3 3 3
Sample Output:
3

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int q;
    vector<int> st;

    cin >> q;

    for (int i = 0; cin >> q; ++i) {
        st.push_back(q);
    }

    int cnt = 1;
    for (int i = 1; i < st.size(); ++i) {
        if (st[i - 1] != st[i]) {
            ++cnt;
        }
    }

    cout << cnt;

    return 0;
}
/*
����� ������: Fatalre
�������:
����������� �������� �������� ������� (A[0] c A[1], A[2] c A[3] � �.�.).
���� ��������� �������� �����, �� ��������� ������� �������� �� ����� �����.

������ ������� ������
� ������ ������ �������� ���������� ��������� � �������. �� ������ ������ �������� �������� �������.

������ �������� ������
�������� ����� �� ������.

Sample Input:
5
1 2 3 4 5
Sample Output:
2 1 4 3 5

*/

#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    int q;
    vector<int> v;

    cin >> q;

    while (cin >> q) {
        v.push_back(q);
    }

    for (int i = 1; i < v.size(); i += 2) {
        swap(v[i], v[i - 1]);
    }

    copy(v.begin(), v.end(), ostream_iterator<int> {cout, " "});

    return 0;
}
/*
����� ������: Fatalre
�������:
���������� �������� �������� ������ ������
(A[0] ��������� �� ����� A[1], A[1] �� ����� A[2], ..., ��������� ������� ��������� �� ����� A[0]).

������ ������� ������
� ������ ������ �������� ���������� ��������� � �������. �� ������ ������ �������� �������� �������.

������ �������� ������
�������� ����� �� ������.

Sample Input:
5
1 2 3 4 5
Sample Output:
5 1 2 3 4

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int q;
    vector<int> v;

    cin >> q;

    while (cin >> q) {
        v.push_back(q);
    }

    int last = v.size() - 1;
    int tmp = v[last];

    for (int i = last - 1; i >= 0; --i) {
        v[i + 1] = v[i];
    }

    v[0] = tmp;

    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << ' ';
    }

    return 0;
}
/*
����� ������: Fatalre
�������:
��� ������ �����. ����������, ������� � ��� ��� ���������, ������ ���� �����.
���������, ��� ����� ��� ��������, ������ ���� ����� �������� ���� ����, ������� ���������� ���������.

������ ������� ������
� ������ ������ �������� ���������� ��������� � �������. �� ������ ������ �������� �������� �������.

������ �������� ������
�������� ����� �� ������.

Sample Input 1:
5
1 2 3 2 3
Sample Output 1:
2

Sample Input 2:
5
1 1 1 1 1
Sample Output 2:
10

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int q;
    vector<int> v;

    cin >> q;

    while (cin >> q) {
        v.push_back(q);
    }

    int cnt = 0;

    for (int i = 0; i < v.size(); ++i) {
        for (int j = i + 1; j < v.size(); ++j) {
            if (v[i] == v[j]) {
                ++cnt;
            }
        }
    }

    cout << cnt;

    return 0;
}
/*
����� ������: Fatalre
�������:
��� ������. �������� �� ��� ��������, ������� ����������� � ������� ������ ���� ���.
�������� ����� �������� � ��� �������, � ������� ��� ����������� � ������.

������ ������� ������
� ������ ������ �������� ���������� ��������� � �������. �� ������ ������ �������� �������� �������.

������ �������� ������
�������� ����� �� ������.

Sample Input:
6
1 2 2 3 3 3
Sample Output:
1

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int q;
    vector<int> v;

    cin >> q;

    vector<int> uni(q);

    while (cin >> q) {
        v.push_back(q);
    }

    for (int i = 0; i < v.size(); ++i) {
        for (int j = i + 1; j < v.size(); ++j) {
            if (v[i] == v[j]) {
                ++uni[i];
                ++uni[j];
            }
        }
    }

    for (int i = 0; i < uni.size(); ++i) {
        if (uni[i] == 0) {
            cout << v[i] << ' ';
        }
    }

    return 0;
}
/*
����� ������: Fatalre
�������:
��������, ��� �� ����� 8?8 ����� ���������� 8 ������ ���, ����� ��� �� ���� ���� �����.
��� ���� ����������� 8 ������ �� �����, ����������, ���� �� ����� ��� ���� ������ ���� �����.

������ ������� ������
��������� �������� �� ���� ������ ��� �����, ������ ����� �� 1 �� 8 - ���������� 8 ������.

������ �������� ������
���� ����� �� ���� ���� �����, �������� ����� NO, ����� �������� YES.

Sample Input 1:
1 7
2 4
3 2
4 8
5 6
6 1
7 3
8 5
Sample Output 1:
NO

Sample Input 2:
1 8
2 7
3 6
4 5
5 4
6 3
7 2
8 1
Sample Output 2:
YES

*/

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int x, y;
    vector<int> v;

    while (cin >> x >> y) {
        v.push_back(x);
        v.push_back(y);
    }

    bool pair = false;

    for (int i = 0; i < v.size() && !pair; i += 2) {
        for (int j = i + 2; j < v.size() && !pair; j += 2) {
            if (v[i] == v[j] || v[i + 1] == v[j + 1] || abs(v[i] - v[j]) == abs(v[i + 1] - v[j + 1])) {
                pair = true;
            }
        }
    }

    if (pair) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}

/*
����� ������: Fatalre
�������:
N ������ ��������� � ���� ���, ����������� �� ����� ������� ������� �� 1 �� N.
����� �� ����� ���� ������� K �����, ��� ���� i-� ��� ���� ��� ����� � �������� ��
li �� ri ������������. ����������, ����� ����� �������� ������ �� �����.

������ ������� ������
��������� �������� �� ���� ���������� ������ N � ���������� ������� K.
����� ���� K ��� ����� li, ri, ��� ���� 1 ? li, ri ? N.

������ �������� ������
��������� ������ ������� ������������������ �� N ��������,
��� j-� ������ ���� �I�, ���� j-� ����� �������� ������, ��� �.�, ���� j-� ����� ���� �����.

Sample Input:
10 3
8 10
2 5
3 6
Sample Output:
I.....I...

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    vector<int> keg;
    vector<int> throws;

    cin >> n >> k;

    for (int i = 0; i < n; ++i) {
        keg.push_back(0);
    }

    for (int i = 0; i < k; ++i) {
        int f, l;

        cin >> f >> l;
        throws.push_back(f);
        throws.push_back(l);
    }

    for (int i = 0; i < throws.size(); i += 2) {
        for (int j = throws[i] - 1; j < throws[i + 1]; ++j) {
            keg[j] = 1;
        }
    }

    for (int i = 0; i < keg.size(); ++i) {
        if (!keg[i]) {
            cout << 'I';
        }
        else {
            cout << '.';
        }
    }

    return 0;
}
