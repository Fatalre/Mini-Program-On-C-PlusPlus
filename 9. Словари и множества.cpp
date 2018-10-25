/*
Автор ответа: Fatalre
Задание:
Дан список целых чисел, который может содержать до 100000 чисел.
Определите, сколько в нем встречается различных чисел.

Входные данные

Вводится число N - количество элементов списка, а затем N чисел.

Выходные данные

Выведите ответ на задачу.

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
Автор ответа: Fatalre
Задание:
Во входной строке записана последовательность чисел через пробел.
Для каждого числа выведите слово YES (в отдельной строке),
если это число ранее встречалось в последовательности или NO, если не встречалось.

Входные данные

Вводится число N - количество элементов списка, а затем N чисел.

Выходные данные

Выведите ответ на задачу.

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
Автор ответа: Fatalre
Задание:
?Даны два списка чисел, которые могут содержать до 100000 чисел каждый.
Посчитайте, сколько чисел содержится одновременно как в первом списке, так и во втором.

Входные данные

Вводится число N - количество элементов первого списка, а затем N чисел первого списка.

Затем вводится число M - количество элементов второго списка, а затем M чисел второго списка.

Выходные данные

Выведите ответ на задачу.

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
Автор ответа: Fatalre
Задание:
Даны два списка чисел, которые могут содержать до 100000 чисел каждый.
Выведите все числа, которые входят как в первый, так и во второй список в порядке возрастания.

Входные данные

Вводится число N - количество элементов первого списка, а затем N чисел первого списка.

Затем вводится число M - количество элементов второго списка, а затем M чисел второго списка.

Выходные данные

Выведите ответ на задачу.

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
Автор ответа: Fatalre
Задание:
Вам дан словарь, состоящий из пар слов. Каждое слово является синонимом к
парному ему слову. Все слова в словаре различны.
Для одного данного слова определите его синоним.

Входные данные
Программа получает на вход количество пар синонимов N.
Далее следует N строк, каждая строка содержит ровно два слова-синонима.
После этого следует одно слово.

Выходные данные
Программа должна вывести синоним к данному слову.

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
Автор ответа: Fatalre
Задание:
Однажды, разбирая старые книги на чердаке, школьник Вася нашёл англо-латинский словарь.
Английский он к тому времени знал в совершенстве, и его мечтой было изучить латынь.
Поэтому попавшийся словарь был как раз кстати.
К сожалению, для полноценного изучения языка недостаточно только одного словаря:
кроме англо-латинского необходим латинско-английский.
За неимением лучшего он решил сделать второй словарь из первого.

Как известно, словарь состоит из переводимых слов, к каждому из которых приводится несколько слов-переводов.
Для каждого латинского слова, встречающегося где-либо в словаре, Вася
предлагает найти все его переводы (то есть все английские слова, для которых наше латинское встречалось в его списке переводов),
и считать их и только их переводами этого латинского слова.

Помогите Васе выполнить работу по созданию латинско-английского словаря из англо-латинского.

Входные данные

В первой строке содержится единственное целое число N — количество английских слов в словаре.
Далее следует N описаний. Каждое описание содержится в отдельной строке,
в которой записано сначала английское слово, затем отделённый пробелами дефис (символ номер 45),
затем разделённые запятыми с пробелами переводы этого английского слова на латинский. Переводы отсортированы
в лексикографическом порядке. Порядок следования английских слов в словаре также лексикографический.

Все слова состоят только из маленьких латинских букв, длина каждого слова не превосходит 15 символов.
Общее количество слов на входе не превышает 100000.

Выходные данные

Выведите соответствующий данному латинско-английский словарь, в точности соблюдая формат входных данных.
В частности, первым должен идти перевод лексикографически минимального латинского слова,
далее — второго в этом порядке и т.д. Внутри перевода английские слова должны быть также отсортированы лексикографически.

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
Автор ответа: Fatalre
Задание:
Учительница задала Пете домашнее задание — в заданном тексте расставить ударения в словах,
после чего поручила Васе проверить это домашнее задание. Вася очень плохо знаком с данной темой,
поэтому он нашел словарь, в котором указано, как ставятся ударения в словах. К сожалению,
в этом словаре присутствуют не все слова. Вася решил, что в словах, которых нет в словаре,
он будет считать, что Петя поставил ударения правильно, если в этом слове Петей поставлено ровно одно ударение.

Оказалось, что в некоторых словах ударение может быть поставлено больше, чем одним способом.
Вася решил, что в этом случае если то, как Петя поставил ударение, соответствует одному из
приведенных в словаре вариантов, он будет засчитывать это как правильную расстановку ударения,
а если не соответствует, то как ошибку.

Вам дан словарь, которым пользовался Вася и домашнее задание, сданное Петей. Ваша задача —
определить количество ошибок, которое в этом задании насчитает Вася.

Входные данные

Вводится сначала число N — количество слов в словаре (0 ? N ? 20000).

Далее идет N строк со словами из словаря. Каждое слово состоит не более чем из 30 символов.
Все слова состоят из маленьких и заглавных латинских букв. В каждом слове заглавная ровно одна буква —
та, на которую попадает ударение. Слова в словаре расположены в алфавитном порядке.
Если есть несколько возможностей расстановки ударения в одном и том же слове, то эти варианты в словаре идут в произвольном порядке.

Далее идет упражнение, выполненное Петей. Упражнение представляет собой строку текста,
суммарным объемом не более 300000 символов. Строка состоит из слов, которые разделяются между
собой ровно одним пробелом. Длина каждого слова не превышает 30 символов. Все слова состоят из
маленьких и заглавных латинских букв (заглавными обозначены те буквы, над которыми Петя поставил ударение).
Петя мог по ошибке в каком-то слове поставить более одного ударения или не поставить ударения вовсе.

Выходные данные

Выведите количество ошибок в Петином тексте, которые найдет Вася.
Примечание к примеру

1. В слове cannot, согласно словарю возможно два варианта расстановки ударения.
Эти варианты в словаре могут быть перечислены в любом порядке (т.е. как сначала cAnnot, а потом cannOt, так и наоборот).
Две ошибки, совершенные Петей — это слова be (ударение вообще не поставлено) и fouNd
(ударение поставлено неверно). Слово thE отсутствует в словаре, но поскольку в нем Петя поставил ровно одно ударение, признается верным.

2. Неверно расставлены ударения во всех словах, кроме The
(оно отсутствует в словаре, в нем поставлено ровно одно ударение).
В остальных словах либо ударные все буквы (в слове PAGE), либо не поставлено ни одного ударения.

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
