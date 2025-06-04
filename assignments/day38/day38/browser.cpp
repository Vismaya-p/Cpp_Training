#include <iostream>
#include <deque>
#include <string>

int main() {
    std::deque<std::string> history;

    history.push_back("google.com");
    history.push_back("openai.com");
    history.push_back("github.com");

    std::cout << "Current Page: " << history.back() << "\n";

    history.pop_back();
    std::cout << "Back to: " << history.back() << "\n";

    history.push_back("cppreference.com");
    std::cout << "Visited new: " << history.back() << "\n";

    std::cout << "\nBrowsing History:\n";
    for (const auto& site : history)
        std::cout << "- " << site << "\n";

    return 0;
}