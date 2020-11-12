#include "../../include/easy/290wordPattern.hpp"

bool WordPattern::Solution::wordPattern(string pattern, string s)
{
  istringstream iss(s);
  vector<string> words = {
    istream_iterator<string>(iss),
    istream_iterator<string>()
  };

  if(pattern.size() != words.size())
  {
    return false;
  }
  
  vector<pair<string, char>> v_word_to_char(min(words.size(), pattern.size()));  
  vector<pair<char, string>> v_char_to_word(min(words.size(), pattern.size()));  

  transform(words.begin(), words.end(), pattern.begin(), v_word_to_char.begin(), 
      make_pair<string&, char&>);

  transform(pattern.begin(), pattern.end(), words.begin(), v_char_to_word.begin(), 
      make_pair<char&, string&>);

  unordered_map<string, char> m_word_to_char(
      v_word_to_char.begin(), v_word_to_char.end());

  unordered_map<char, string> m_char_to_word(
      v_char_to_word.begin(), v_char_to_word.end());


  vector<string>::iterator word = words.begin();
  string::iterator token = pattern.begin();
  for(; word != words.end() && token != pattern.end(); word++, token++)
  {
    if(m_char_to_word.count(*token) == 0 || m_word_to_char.count(*word)  == 0 ||
        m_char_to_word[*token] != *word || m_word_to_char[*word] != *token)
    {
      return false;
    }
  }

  return true;
}


