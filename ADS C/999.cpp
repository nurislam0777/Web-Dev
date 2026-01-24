string s = "kbtu";

int a[3] = {4, 5, 2};
int a[3]

set<int> s;
s.insert(4);
s.erase(4);

stack<int> box;
box.push(3);
cout << box.top() << " ";
box.pop();

queue<int> box;
box.push(3);
cout << box.front() << " " << box.back() << endl;
box.pop();

deque<int> box;
box.push_front(3);
cout << box.front() << " " << box.back() << endl;
box.pop_front();


    map<string, int>::iterator it;
set<int>::iterator it;
    for(it = s.begin(); it != s.end(); it++)
        cout << *it << " "; 


for(int i = 0; i < s.size(); i++) {
    int code = (int)s[i];
    // cout << code << " ";
    if(code >= 48 && code <= 57)
        cout << s[i] << " ";
}

int nums[4];
int a[3] = {4, 5, 2};
// int a[3] = {4, 5, 2, 4}; // wrong array creation;
// float b1[]; // wrong array creation;
float b[] = {2.4, 3.8, 6.7};
bool ok[] = {true, false;}
char word[] = {'k', 'b', 't', 'u'};
string s = "kbtu";


reverse(s.begin(), s.end());