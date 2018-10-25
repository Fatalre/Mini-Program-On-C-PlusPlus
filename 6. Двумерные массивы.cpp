/*
����� ������: Fatalre
�������:
������� ������� ������� ��������� ������������� ��������.

������ ������� ������
��������� �������� �� ���� ������� ������� n � m, ����� n ����� �� m ����� � ������. n � m �� ��������� 100.

������ �������� ������
�������� ��� �����: ����� ������ � ����� �������, � ������� �����
���������� ������� � ��������� �������. ���� ����� ��������� ���������,
�� ��������� ���, � �������� ������ ����� ������, � ���� ������ �����
����� �� ���, � �������� ������ ����� �������.

Sample Input:
3 4
0 3 2 4
2 3 5 5
5 1 2 3
Sample Output:
1 2

*/

#include <iostream>

using namespace std;

int main() {
    const int size = 100;
    int n, m;
    int arr[size][size];

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    int max = arr[0][0];
    int max_i = 0, max_j = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (max < arr[i][j]) {
                max = arr[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }

    cout << max_i << ' ' << max_j;

    return 0;
}
/*
����� ������: Fatalre
�������:
���� �������� ����� n, �� ������������� 15.
�������� ��������� ������ �� n?n ���������, �������� ��� ��������� "."
(������ ������� ������� �������� ������� �� ������ �������).
����� ��������� ��������� "*" ������� ������ �������, ������� ������� �������, ������� ���������
� �������� ���������. � ���������� ������� � ������� ������ ������������ ����������� ���������.
�������� ���������� ������ �� �����, �������� �������� ������� ���������.

Sample Input:
5
Sample Output:
* . * . *
. * * * .
* * * * *
. * * * .
* . * . *

*/

#include <iostream>

using namespace std;

int main() {
    const int size = 15;
    char arr[size][size];
    int n;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = '.';
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j || i == n / 2 || j == n / 2 || i == n - j - 1 || j == n - i - 1) {
                arr[i][j] = '*';
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << arr[i][j];
            if (j != n - 1) {
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}
/*
����� ������: Fatalre
�������:
���� ����� n, �� ����������� 100. �������� ������ �������� n?n � ��������� ��� �� ���������� �������.
�� ������� ��������� ������ ���� �������� ����� 0. �� ���� ����������, ����������� � �������, ����� 1.
�� ��������� ���� ���������� ����� 2, � �.�.

Sample Input:
5
Sample Output:
0 1 2 3 4
1 0 1 2 3
2 1 0 1 2
3 2 1 0 1
4 3 2 1 0

*/

#include <iostream>

using namespace std;

int main() {
    const int size = 100;
    int arr[size][size];
    int n;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) {
                arr[i][j] = 0;
            }
            else if (i < j) {
                arr[i][j] = j - i;
            }
            else {
                arr[i][j] = i - j;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << arr[i][j];
            if (j != n - 1) {
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}
/*
����� ������: Fatalre
�������:
��� ��������� ������ � ��� �����: i � j. ��������� � ������� ������� � �������� i � j

������ ������� ������
��������� �������� �� ���� ������� ������� n � m,
�� ������������� 100, ����� �������� �������, ����� ����� i � j.

������ �������� ������
�������� ���������.

Sample Input:
3 4
11 12 13 14
21 22 23 24
31 32 33 34
0 1
Sample Output:
12 11 13 14
22 21 23 24
32 31 33 34

*/

#include <iostream>

using namespace std;

int main() {
    const int size = 100;
    int arr[size][size];
    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    int i_s, j_s;

    cin >> i_s >> j_s;

    for (int i = 0; i < n; ++i) {
        swap(arr[i][i_s], arr[i][j_s]);
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j];
            if (j != m - 1) {
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}
/*
����� ������: Fatalre
�������:
���� ����� n, �� ������������� 10, � ������ �������� n ? n.
���������, �������� �� ���� ������ ������������ ������������ ������� ���������.
�������� ����� �YES�, ���� ������ ������������, � ����� �NO� � ��������� ������.
Sample Input:
3
0 1 2
1 2 3
2 3 4
Sample Output:
YES

*/

#include <iostream>

using namespace std;

int main() {
    const int size = 10;
    int arr[size][size];
    int n;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    bool sym = true;

    for (int i = 0; i < n && sym; ++i) {
        for (int j = 1; j < n && sym; ++j) {
            if (arr[i][j] != arr[j][i]) {
                sym = false;
            }
        }
    }

    if (sym) {
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
��� ���������� ��������� ������ �������� n ? n � ����� k.
�������� �������� k-� �� ����� ��������� ���� ������� ���������
(�.�. ���� k = 1, �� ����� ������� �������� ������ ���������,
������� ���� �������, ���� k = 2, �� ������ ��������� � �.�.).

�������� k ����� ���� �������������, ��������, ���� k = ?1, �� �����
������� �������� ������ ��������� ������� ���� �������. ���� k = 0, �� ����� ������� �������� ������� ���������.

��������� �������� �� ���� ����� n, �� ������������� 10, ����� ������ �������� n ? n, ����� ����� k.

Sample Input 1:
4
1 2 3 4
5 6 7 8
0 1 2 3
4 5 6 7
1
Sample Output 1:
5 1 6

Sample Input 2:
4
1 2 3 4
5 6 7 8
0 1 2 3
4 5 6 7
-2
Sample Output 2:
3 8

*/

#include <iostream>

using namespace std;

int main() {
    const int size = 100;
    int arr[size][size];
    int n, k;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    cin >> k;

    int i_k = 0, j_k = 0;

    if (k > 0) {
        // shift down
        i_k += k;
    }
    else if (k < 0) {
        // shift to the right 0 - (-k) = k
        j_k -= k;
    }

    for (int i = i_k, j = j_k; i < n && j < n; ++i, ++j) {
        cout << arr[i][j] << ' ';
    }

    return 0;
}

/*
����� ������: Fatalre
�������:
��� ��������� ������ �������� n?m (n � m �� ����������� 1000).
������������ ��� ������������ ������� ��������� ������ ���������� ����������������� � �������.
�� ����� ������� m?n: ������ ��������� ������� ���������� ��������� ������������������,
������� ��������� ������� ���������� �������� ������������������.

��� ������� ������� ��������� ����������������� ������ � �������� ��� �� �����.

Sample Input:
3 4
11 12 13 14
21 22 23 24
31 32 33 34
Sample Output:
11 21 31
12 22 32
13 23 33
14 24 34

*/

#include <iostream>

using namespace std;

int main() {
    const int size = 1000;
    int n, m;
    int arr[size][size];
    int t_arr[size][size];

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            t_arr[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << t_arr[i][j];
            if (j != n - 1) {
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}
/*
����� ������: Fatalre
�������:
� ���������� n ����� �� m ���� � ������ (n � m �� ����������� 20).
� ��������� ������� �������� ���������� � ��������� �������, �����
1 ��������, ��� ����� �� ������ ����� ��� �������, ����� 0 ��������, ��� ����� ��������.
�������� ������ �� ������� k ������� �� �������� ����� � ����� ����.
����������, ����� �� ��������� ����� ������.

������ ������� ������
��������� �������� �� ���� ����� n � m.
����� ���� n �����, ���������� m ����� (0 ��� 1), ����������� ���������. ����� ���� ����� k.

������ �������� ������
��������� ������ ������� ����� ����, � ������� ���� k ������ ������ ��������� ����.
���� ����� ����� ���������, �� �������� ����� ����������� ����������� ����. ���� ����������� ���� ���, �������� ����� 0.

Sample Input:
3 4
0 1 0 1
1 0 0 1
1 1 1 1
2
Sample Output:
2

*/

#include <iostream>

using namespace std;

int main() {
    const int size = 20;
    int n, m;
    int arr[size][size];

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    int k;

    cin >> k;

    int cnt = 0;
    int row = 0;

    bool query = false;

    for (int i = 0; i < n && !query; ++i) {
        for (int j = 0; j < m && !query; ++j) {
            if (arr[i][j] == 0) {
                ++cnt;
            }
            else {
                cnt = 0;
            }

            if (cnt == k) {
                query = true;
                row = i + 1;
            }
        }

        cnt = 0;
    }

    cout << row;

    return 0;
}
/*
����� ������: Fatalre
�������:
��� ������������� ������ �������� n?m.
��������� ��� �� 90 �������� �� ������� �������, ������� ��������� � ����� ������ �������� m?n.

������ ������� ������
�������� ��� ����� n � m, �� ������������� 100, ����� ������ �������� n?m.

������ �������� ������
�������� ������������ ������. ����� ��� ������ ���������� ����� ��������.

Sample Input:
3 4
11 12 13 14
21 22 23 24
31 32 33 34
Sample Output:
31 21 11
32 22 12
33 23 13
34 24 14

*/

#include <iostream>

using namespace std;

int main() {
    const int size = 100;
    int arr[size][size];
    int r_arr[size][size];
    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = n - 1; i >= 0; --i) {
        for (int j = 0; j < m; ++j) {
            r_arr[j][n - 1 - i] = arr[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << r_arr[i][j];
            if (j != n - 1) {
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}
/*
����� ������: Fatalre
�������:
�� ������ ������ n � m ��������� ��������� ������ �������� n?m ������� �� 1 �� n?m ��������, ��� �������� � �������.
������ ������� ������
�������� ��� ����� n � m, ������ �� ������� �� ��������� 20.
������ �������� ������
�������� ���������� ������, ������ �� ����� ������� �������� ����� 4 �������.
Sample Input:
3 5
Sample Output:
1   2   3   4   5
10   9   8   7   6
11  12  13  14  15

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int size = 20;
    int arr[size][size];
    int n, m;

    cin >> n >> m;

    int num = 1;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; ++j) {
                arr[i][j] = num++;
            }
        }
        else {
            for (int j = m - 1; j >= 0; --j) {
                arr[i][j] = num++;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}
/*
����� ������: Fatalre
�������:
�� ������ ������ n � m ��������� ��������� ������
�������� n?m ������� �� 1 �� n?m ������������, ��� �������� � �������.

������ ������� ������
�������� ��� ����� n � m, �� ����������� 100.

������ �������� ������
�������� ���������� ������, ������ �� ����� ������� �������� ����� 4 �������.

Sample Input:
3 5
Sample Output:
1   2   4   7  10
3   5   8  11  13
6   9  12  14  15

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int size = 100;
    int arr[size][size];
    int n, m;

    cin >> n >> m;

    int num = 1;

    for (int i = 0; i < m; ++i) {
        for (int j = i, k = 0; j >= 0 && k < n; --j, ++k) {
            arr[k][j] = num++;
        }
    }

    for (int i = 1; i < n; ++i) {
        for (int j = m - 1, k = i; j >= 0 && k < n; --j, ++k) {
            arr[k][j] = num++;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}
/*
����� ������: Fatalre
�������:
���� ����� n � m. ��������� ������ �������� n ? m � ��������� �������:
������ ������ ����� ��������� ������, � ������� ����� - ��������� �������
������������ ���� ������ ����, ����� �������. � ����� ������� ���� �������� ����� 1.

������ ������� ������
�������� ��� ����� n � m, �� ����������� 100.

������ �������� ������
�������� ���������� ������, ������ �� ����� ������� �������� ����� 4 �������.
Sample Input:
3 5
Sample Output:
1   0   2   0   3
0   4   0   5   0
6   0   7   0   8

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int size = 100;
    int arr[size][size];
    int n, m;

    cin >> n >> m;

    int num = 1;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if ((i + j) % 2 == 0) {
                arr[i][j] = num++;
            }
            else {
                arr[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}

/*
����� ������: Fatalre
�������:
�� ������ ������ n � m ��������� ��������� ������ �������� n?m ������� ��
1 �� n?m �� �������, ��������� �� ������ �������� ���� �
����������� �� ������� �������, ��� �������� � �������.

������ ������� ������
�������� ��� ����� n � m, �� ����������� 100.

������ �������� ������
�������� ���������� ������, ������ �� ����� ������� �������� ����� 4 �������.

Sample Input:
4 5
Sample Output:
1   2   3   4   5
14  15  16  17   6
13  20  19  18   7
12  11  10   9   8

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int size = 100;
    int arr[size][size];
    int n, m;

    cin >> n >> m;

    int num = 1;
    int k = 0;
    int numbers = n * m;
    int x_max = m, y_max = n;
    int x_min = 0, y_min = 0;
    int x = 0, y = 0;

    // go through array while we do not fill all elements
    while (k < numbers) {
        // go right up to the right border
        for (; x < x_max && k < numbers; ++x, ++k) {
            arr[y][x] = num++;
        }
        // back x one position back
        // and y one position down
        --x;
        ++y;
        // decrease the right border
        --x_max;

        // go down up to the bottom boder
        for (; y < y_max && k < numbers; ++y, ++k) {
            arr[y][x] = num++;
        }

        // back y one position up
        // and x one position left
        --y;
        --x;
        // increase the top border
        ++y_min;

        // go left up to the left border
        for (; x >= x_min && k < numbers; --x, ++k) {
            arr[y][x] = num++;
        }

        // back x one position back
        // and y one position top
        ++x;
        --y;
        // increase the left border
        ++x_min;

        // go up to the top border
        for (; y >= y_min && k < numbers; --y, ++k) {
            arr[y][x] = num++;
        }

        // back y one position back
        // and x one position right
        ++y;
        ++x;
        // decrease the bottom border
        --y_max;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}
