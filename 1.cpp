#include <iostream>
#include <string>
#include <chrono>
using namespace std;

int main(){
    auto start = std::chrono::high_resolution_clock::now();
    int x = 999;
    
    int n3 = x/3;
    int a3 = 3;
    int d3 = 3;
    int l3 = n3 * d3;
    int sum3 = (n3/2.0)*(a3 + l3);
    
    int n5 = int(x/5);
    int a5 = 5;
    int d5 = 5;
    int l5 = n5 * d5;
    int sum5 = (n5/2.0)*(a5 + l5);

    int n15 = int(x/15);
    int a15 = 15;
    int d15 = 15;
    int l15 = n15 * d15;
    int sum15 = (n15/2.0)*(a15 + l15);

    cout << (sum3 + sum5 - sum15) << endl;

    auto end = std::chrono::high_resolution_clock::now();

    // Calculate duration
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    // Output the duration
    std::cout << "Execution time: " << duration.count() << " milliseconds" << std::endl;
    return 0;
}