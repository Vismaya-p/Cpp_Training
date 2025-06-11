#include <iostream>
#include <queue>
#include <string>
using namespace std;
struct Job {
    string name;
    int pages;
};

void Queue(queue<Job>& printQueue) {
    while (!printQueue.empty()) {
        Job job = printQueue.front();
        printQueue.pop();

        int remainPages = job.pages;
        while (remainPages > 0) {
            int pagesToPrint = std::min(remainPages, 10);
            cout << "Printing " << pagesToPrint << " pages for user: " << job.name << endl;
            remainPages -= pagesToPrint;
        }
    }
}

int main() {
    std::queue<Job> printQueue;
    int numJobs;

    cout << "Enter number of print jobs: ";
    cin >> numJobs;

    for (int i = 0; i < numJobs; ++i) {
        Job job;
        cout << "Enter username and number of pages: ";
        std::cin >> job.name >> job.pages;
        printQueue.push(job);
    }

    Queue(printQueue);

    return 0;
}