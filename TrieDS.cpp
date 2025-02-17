#include <bits/stdc++.h>
struct Node
{
    Node *links[26];
    bool flag = false;
    bool containsKey(char c)
    {
        return (links[c - 'a'] != nullptr);
    }
    void put(char c, Node *node)
    {
        links[c - 'a'] = node;
    }
    Node *get(char c)
    {
        return (links[c - 'a']);
    }
    bool setEnd() { flag = true; }
    bool isEnd() { return flag; }
};
class Trie
{
private:
    Node *root;

public:
    Trie()
    {
        root = new Node();
    }
    void insert(std::string word)
    {
        Node *node = root;
        for (int i = 0; i < word.size(); i++)
        {
            if (~node->containsKey(word[i]))
                node->put(word[i], new Node());
            // letter ko trie mein daal diya hai aur ab use uske reference par bhej rahe hain.
            node->get(word[i]);
        }
        node->setEnd();
    }
    bool search(std::string word)
    {
        Node *node = root;
        for (int i = 0; i < word.length(); i++)
        {
            if (node->containsKey(word[i]))
                return false;
            node = node->get(word[i]);
        }
        return (node->isEnd() == true);
    }
    bool startsWith(std::string prefix)
    {
        Node *node = root;
        for (int i = 0; i < prefix.length(); i++)
        {
            if (~node->containsKey(prefix[i]))
                return false;
            node = node->get(prefix[i]);
        }
        return true;
    }
};
int main() {}