/*
Автор ответа: Fatalre
Задание:
По введенному символу определите, является ли он цифрой.

Входные данные

Вводится единственый символ.

Выходные данные

Выведите "yes", если символ является цифрой и "no" в противном случае. Обратите внимание, что слова нужно выводить маленькими буквами.

Sample Input 1:
1
Sample Output 1:
yes

Sample Input 2:
a
Sample Output 2:
no

*/

#include <iostream>

using namespace std;

int main() {
    char c;

    cin >> c;

    if (isdigit(c)) {
        cout << "yes";
    }
    else {
        cout << "no";
    }

    return 0;
}
/*
Автор ответа: Fatalre
Задание:
Переведите символ в верхний регистр.

Входные данные

Вводится единственый символ.

Выходные данные

Если введеный символ является строчной буквой латинского алфавита, то выведите такую же заглавную букву.
В противном случае выведите тот же символ, который был введен.

Sample Input:
b
Sample Output:
B

*/

#include <iostream>

using namespace std;

int main() {
    char c;

    cin >> c;

    if (islower(c)) {
        c = toupper(c);
    }

    cout << c;

    return 0;
}
/*
Автор ответа: Fatalre
Задание:
Вводится один символ, измените его регистр.
То есть, если была введена прописная буква - сделайте ее заглавной и наоборот.
Символы, не являющиеся латинской буквой, нужно выводить без изменений.

Входные данные

Вводится единственый символ.

Выходные данные

Выведите ответ на задачу.

Sample Input:
b
Sample Output:
B

*/

#include <iostream>

using namespace std;

int main() {
    char c;

    cin >> c;

    if (isalpha(c)) {
        if (islower(c)) {
            c = toupper(c);
        }
        else {
            c = tolower(c);
        }
    }

    cout << c;

    return 0;
}
/*
Автор ответа: Fatalre
Задание:
Дана строка, содержащая пробелы. Найдите, сколько в ней слов
(слово – это последовательность непробельных символов,
слова разделены одним пробелом, первый и последний символ строки – не пробел).

Входные данные

На вход подается несколько строк.
Выходные данные

Необходимо вывести количество слов в первой из введенных строк.
Примечание
?В этой задаче может быть полезен метод find с двумя параметрами.
Первый из них - искомая подстрока, второй - позиция, начиная с которой нужно искать первое вхождение.

Sample Input:
In the town where I was born

Sample Output:
7

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int pos = 0;
    int cnt = 1;

    getline(cin, s);

    while ((pos = s.find(" ", pos)) != string::npos) {
        ++cnt;
        ++pos;
    }

    cout << cnt;

    return 0;
}
/*
Автор ответа: Fatalre
Задание:
По данной строке определите, является ли она палиндромом
(то есть, читается одинаково как слева-направо, так и справа-налево).
Входные данные

На вход подается 1 строка без пробелов.
Выходные данные

Необходимо вывести yes, если строка является палиндромом, и no в противном случае.

Sample Input:
kayak
Sample Output:
yes

*/

#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(const char *first, const char *last) {
    if (first < last) {
        if (*first != *last) {
            return false;
        }
        return is_palindrome(first + 1, last - 1);
    }

    return true;
}

int main() {
    string s;

    cin >> s;

    if (is_palindrome(&s[0], &s[s.size() - 1])) {
        cout << "yes";
    }
    else {
        cout << "no";
    }

    return 0;
}
/*
Автор ответа: Fatalre
Задание:
Найдите в этой строке самое длинное слово и выведите его.

Входные данные

Вводится одна строка. Слова в ней отделены одним пробелом.

Выходные данные

Выведите самое длинное слово. Если таких слов несколько,
то выводить нужно, которое встречается раньше.

Sample Input:
Everyone of us has all we need

Sample Output:
Everyone

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    string longest_word;

    while (cin >> word) {
        if (longest_word.empty() || word.size() > longest_word.size()) {
            longest_word = word;
        }
    }

    cout << longest_word;

    return 0;
}
/*
Автор ответа: Fatalre
Задание:
В сети интернет каждому компьютеру присваивается четырехбайтовый код,
который принято записывать в виде четырех чисел, каждое из которых может принимать
значения от 0 до 255, разделенных точками. Вот примеры правильных IP-адресов:
127.0.0.0
192.168.0.1
255.0.255.255
Напишите программу, которая определяет, является ли заданная строка правильным IP-адресом.

Входные данные

Программа получает на вход строку из произвольных символов.
Выходные данные

Если эта строка является корректной записью IP-адреса, выведите YES, иначе выведите NO.
Примечание

Для перевода из строки в число удобно пользоваться функцией stoi,
которая принимает на вход строку, а возвращает число.
Sample Input:
127.0.0.1
Sample Output:
YES

*/

#include <iostream>
#include <string>

using namespace std;

// checks that ip number is in the proper format
bool check_num_ip(const string& num) {
    const char zero_sym = '0';
    int n = 0;

    if (!num.size()) {
        return false;
    }

    for (string::const_iterator it = num.cbegin(); it != num.cend(); ++it) {
        if (!isdigit(*it)) {
            return false;
        }

        // if something like 01 or 001 was passed
        if (it == num.cbegin() && *it == zero_sym && it + 1 != num.cend()) {
            return false;
        }

        n *= 10;
        n += *it - zero_sym;
    }

    bool in_limit = n >= 0 && n <= 255;

    return in_limit;
}

bool is_ipaddr(const string& ip) {
    int pos = 0;
    int prev_pos = 0;
    int cnt = 0;

    // count dots and check numbers between them
    while ((pos = ip.find('.', prev_pos)) != string::npos) {
        string s = ip.substr(prev_pos, pos - prev_pos);

        ++cnt;

        if (!check_num_ip(s)) {
            return false;
        }

        prev_pos = pos + 1;
    }

    // get the number after the last dot
    string s = ip.substr(prev_pos, ip.size() - prev_pos);

    if (!check_num_ip(s)) {
        return false;
    }

    return (cnt == 3) ? true : false;
}

int main() {
    string inp;

    cin >> inp;

    if (is_ipaddr(inp)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
