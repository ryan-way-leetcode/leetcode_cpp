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
  
  unordered_map<string, char> m_word_to_char(words.size());  
  unordered_map<char, string> m_char_to_word(words.size());  

  vector<string>::iterator word = words.begin();
  string::iterator token = pattern.begin();

  for(; word != words.end() && token != pattern.end(); word++, token++)
  {
    m_word_to_char.insert(make_pair(*word, *token));
    m_char_to_word.insert(make_pair(*token, *word));
  }

  word = words.begin();
  token = pattern.begin();
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


