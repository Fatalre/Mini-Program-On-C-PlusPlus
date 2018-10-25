/*
Автор ответа: Fatalre
Задание:
Отсортируйте массив.

Входные данные

Первая строка входных данных содержит количество элементов в массиве N ? 105.
Далее идет N целых чисел, не превосходящих по абсолютной величине 109.

Выходные данные

Выведите эти числа в порядке неубывания.
Sample Input:
5
5 4 3 2 1
Sample Output:
1 2 3 4 5

*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<int> v;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;

        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; ++i) {
        cout << v[i] << ' ';
    }

    return 0;
}
/*
Автор ответа: Fatalre
Задание:
В обувном магазине продается обувь разного размера. Известно, что
одну пару обуви можно надеть на другую, если она хотя бы на три размера больше.
В магазин пришел покупатель. Требуется определить, какое наибольшее количество
пар обуви сможет предложить ему продавец так, чтобы он смог надеть их все одновременно.

Входные данные

Сначала вводится размер ноги покупателя (обувь меньшего размера он надеть не сможет),
затем количество пар обуви в магазине и размер каждой пары.
Размер — натуральное число, не превосходящее 100, количество пар обуви в магазине не превосходит 1000.

Выходные данные

Выведите единственное число — максимальное количество пар обуви.
Sample Input:
26
5
30 35 40 41 42
Sample Output:
3

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void fill_vector(vector<int>& v, const int n) {
    for (int i = 0; i < n; ++i) {
        int boots_size;

        cin >> boots_size;
        v.push_back(boots_size);
    }
}

int pass_small_sizes(const vector<int>& v, const int cl_size) {
    int pos = 0;

    while (pos < v.size() && v[pos] < cl_size) {
        ++pos;
    }

    return pos;
}

int main() {
    constexpr int boot_size_step = 3;
    int client_size;
    int boots_num;
    vector<int> boots_sizes;
    int max_cnt = 0;

    cin >> client_size >> boots_num;
    fill_vector(boots_sizes, boots_num);
    sort(boots_sizes.begin(), boots_sizes.end());

    int start_boot = pass_small_sizes(boots_sizes, client_size);

    if (start_boot != boots_sizes.size()) {
        ++max_cnt;
        client_size = boots_sizes[start_boot];
        for (int i = start_boot + 1; i < boots_sizes.size(); ++i) {
            if (client_size + boot_size_step <= boots_sizes[i]) {
                ++max_cnt;
                client_size = boots_sizes[i];
            }
        }
    }

    cout << max_cnt;

    return 0;
}
/*
Автор ответа: Fatalre
Задание:
Во время проведения олимпиады каждый из участников получил свой идентификационный номер – натуральное число.
Необходимо отсортировать список участников олимпиады по количеству набранных ими баллов.

Входные данные

На первой строке дано число N (1 ? N ? 1000) – количество участников.
На каждой следующей строке даны идентификационный номер и набранное число баллов соответствующего участника.
Все числа во входном файле не превышают 105.

Выходные данные

В выходной файл выведите исходный список в порядке убывания баллов. Если у некоторых участников
одинаковые баллы, то их между собой нужно упорядочить в порядке возрастания идентификационного номера.
Sample Input 1:
3
101 80
305 90
200 14
Sample Output 1:
305 90
101 80
200 14

Sample Input 2:
3
20 80
30 90
25 90
Sample Output 2:
25 90
30 90
20 80

*/

#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

void fill_vector_pair(vector<pair<int, int>>& v, const int n) {
    for (int i = 0; i < n; ++i) {
        int id, pts;

        cin >> id >> pts;
        v.push_back(make_pair(id, pts));
    }
}

void print_vector_pair(const vector<pair<int, int>>& v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i].first << ' ' << v[i].second << endl;
    }
}

bool comp_pair(const pair<int, int> &f, const pair<int, int> &s) {
    bool first_gr_second = false;

    if (f.second != s.second) {
        first_gr_second = f.second > s.second;
    }
    else {
        first_gr_second = f.first < s.first;
    }

    return first_gr_second;
}

int main() {
    int n;
    vector<pair<int, int>> participant;

    cin >> n;
    fill_vector_pair(participant, n);
    sort(participant.begin(), participant.end(), comp_pair);
    print_vector_pair(participant);

    return 0;
}
/*
Автор ответа: Fatalre
Задание:
Выведите все исходные точки в порядке возрастания их расстояний от начала координат.

Входные данные

Программа получает на вход набор точек на плоскости. Сначала задано количество точек n,
затем идет последовательность из n строк, каждая из которых содержит два числа: координаты точки.
Величина n не превосходит 100, все исходные координаты – целые числа, не превосходящие 103.

Выходные данные

Необходимо вывести все исходные точки в порядке возрастания их расстояний от начала координат.

Sample Input:
2
1 2
2 3
Sample Output:
1 2
2 3

*/

#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <algorithm>

using namespace std;

double dist_calc(double x, double y) {
    return sqrt(x * x + y * y);
}

void fill_vector_pair(vector<pair<pair<double, double>, double>>& v, const int n) {
    for (int i = 0; i < n; ++i) {
        double x, y;

        cin >> x >> y;
        v.push_back(make_pair(make_pair(x, y), dist_calc(x, y)));
    }
}

bool cmp_dist(const pair<pair<double, double>, double> &f, const pair<pair<double, double>, double>& s) {
    return f.second < s.second;
}

void print_vector_pair(const vector<pair<pair<double, double>, double>>& v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i].first.first << ' ' << v[i].first.second << endl;
    }
}

int main() {
    int n;
    vector<pair<pair<double, double>, double>> v;

    cin >> n;
    fill_vector_pair(v, n);
    stable_sort(v.begin(), v.end(), cmp_dist);
    print_vector_pair(v);

    return 0;
}
/*
Автор ответа: Fatalre
Задание:
Выведите фамилии и имена учащихся в порядке убывания их среднего балла.
Входные данные

Заданы сначала количество учащихся n, затем n строк, каждая из которых
содержит фамилию, имя и три числа (оценки по трем предметам: математике, физике, информатике).
Данные в строке разделены одним пробелом. Оценки принимают значение от 1 до 5.

Выходные данные

Необходимо вывести пары фамилия-имя по одной на строке, разделяя фамилию и имя одним пробелом.
Выводить оценки не нужно. Если несколько учащихся имеют одинаковые средние баллы, то их нужно
выводить в порядке, заданном во входных данных.

Sample Input:
3
Markov Valeriy 5 5 5
Sergey Petrov 1 1 1
Petrov Petr 3 3 3
Sample Output:
Markov Valeriy
Petrov Petr
Sergey Petrov

*/

#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <numeric>
#include <algorithm>

using namespace std;

// As there are only three marks in input
// calculate average by 3
double calc_mean_pts() {
    constexpr int marks = 3;
    vector<int> m;
    double init = 0;

    for (int i = 0; i < marks; ++i) {
        int num;

        cin >> num;
        m.push_back(num);
    }

    return accumulate(m.begin(), m.end(), init) / marks;
}

// read name, surname and marks from input
void fill_vector_pair(vector<pair<pair<string, string>, double>>& v, const int n) {
    for (int i = 0; i < n; ++i) {
        string name, surname;
        double mean_pts;

        cin >> surname >> name;
        v.push_back(make_pair(make_pair(surname, name), calc_mean_pts()));
    }
}

// compare pairs in descending order
bool cmp_pts(const pair<pair<string, string>, double>& f, const pair<pair<string, string>, double>& s) {
    return f.second > s.second;
}

void print_vector_pair(const vector<pair<pair<string, string>, double>>& v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i].first.first << ' ' << v[i].first.second << endl;
    }
}

int main() {
    int n;
    vector<pair<pair<string, string>, double>> v;

    cin >> n;
    fill_vector_pair(v, n);
    stable_sort(v.begin(), v.end(), cmp_pts);
    print_vector_pair(v);

    return 0;
}
