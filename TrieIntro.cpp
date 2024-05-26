#include<iostream>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode* children[26];
    bool isTrieNode;

    TrieNode(char ch)
    {
        data = ch;
        for(int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTrieNode = false;
    }
};

class Trie
{
public:
    TrieNode* root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertWordUtil(TrieNode* root, string word)
    {
        // base case
        if(word.length() == 0)
        {
            root->isTrieNode = true;
            return;
        }

        // assumption
        int index = word[0] - 'a';
        TrieNode* child;

        // present
        if(root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // recursion
        insertWordUtil(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertWordUtil(root, word);
    }

    bool searchUtil(TrieNode* root, string word)
    {
        // base case
        if(word.length() == 0)
        {
            return root->isTrieNode;
        }

        int index = word[0] - 'a';
        TrieNode* child;

        // present
        if(root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }

        // recursion
        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word)
    {
        return searchUtil(root, word);
    }

    bool deleteWordUtil(TrieNode* root, string word, int depth)
    {
        // base case
        if (depth == word.length()) {
            if (!root->isTrieNode) {
                return false; // Word not found
            }
            root->isTrieNode = false;

            // If the current node has no children, it can be deleted
            return allChildrenNull(root);
        }

        // recursion
        int index = word[depth] - 'a';
        TrieNode* child = root->children[index];
        if (child == NULL) {
            return false; // Word not found
        }

        bool shouldDeleteCurrentNode = deleteWordUtil(child, word, depth + 1);

        if (shouldDeleteCurrentNode) {
            delete child;
            root->children[index] = NULL;
            return allChildrenNull(root);
        }

        return false;
    }

    bool deleteWord(string word)
    {
        return deleteWordUtil(root, word, 0);
    }

    // Helper function to check if all children of a TrieNode are NULL
    bool allChildrenNull(TrieNode* node)
    {
        for (int i = 0; i < 26; i++) {
            if (node->children[i] != NULL) {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Trie* t = new Trie();
    t->insertWord("abcd");

    cout << "Present or Not: " << t->searchWord("abcd") << endl;

    t->deleteWord("abcd");

    cout << "Present or Not after deletion: " << t->searchWord("abcd") << endl;

    return 0;
}
