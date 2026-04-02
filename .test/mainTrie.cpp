#include "Trie.hpp"
#include <iostream>
#include <vector>
#include <string>

int main(void) {
    std::vector<std::string> v {
        "compute", "computer", "computers", "computing", "computation", 
        "international", "internet", "internal", "interval", "into"
    };

    
    Trie trie(v);
    std::cout << "Empty: " << trie.empty() << std::endl;

    for (const auto& s : v) {
        std::cout << "Longest: " << trie.longestWord() << std::endl;
        std::cout << "Count: " << trie.countWords() << std::endl;
        trie.print();
        std::cout << "-----------------\n";
        std::cout << "Deleting '" << s << "'\n";
        trie.remove(s);
    }
    
    std::cout << "Empty: " << trie.empty() << std::endl;
    

    return 0;
}
