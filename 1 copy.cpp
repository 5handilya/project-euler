#include <iostream>
#include <string>
#include <chrono>
using namespace std;

//boneheaded method

int main(){
    auto start = std::chrono::high_resolution_clock::now();
    int sum3, sum5 = 0;
    for (int i = 1; i < 1000; i++){
        if (i%3==0){
            sum3 += i;
        }
        if (i%5 == 0){
            sum5 += i;
        }
    }
    cout << (sum3 + sum5) << endl;
    auto end = std::chrono::high_resolution_clock::now();

    // Calculate duration
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    // Output the duration
    std::cout << "Execution time: " << duration.count() << " milliseconds" << std::endl;
    return 0;
}