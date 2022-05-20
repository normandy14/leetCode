class Solution {
public:
    int lengthOfLastWord(string s);
};

int Solution::lengthOfLastWord(string s) {
  int lengthOfWord;
  // cout << s << endl;
  // cout << s[s.size()-1] << endl;
  if (s[s.size() - 1] == ' ') { // if last char is an empty-space
    int i = s.size() - 1; // "hello world  "
    while (s[i] == ' ') {
      i -= 1;
    }
    s = s.substr(0, i + 1);
  }
  // cout << "new string is " << s << endl;
  for (int i=s.size() - 1; i >= 0; i--) {
    // cout << s[i] << endl;
    if (s[i] == ' ') {
      return lengthOfWord;
    }
    lengthOfWord += 1;
    // cout << lengthOfWord << endl;
  }
  return 0;
}

int main() {
  Solution s;
  int len;
  len = s.lengthOfLastWord("Hello World");
  cout << len << endl;
  len = s.lengthOfLastWord("   fly me   to   the moon  ");
  cout << len << endl;
  len = s.lengthOfLastWord("luffy is still joyboy");
  cout << len << endl;
  return 0;
}