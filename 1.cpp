#include <chrono>
#include <iostream>
using namespace std;

int main() {
    auto start_time = std::chrono::steady_clock::now();

    unsigned n1 = 1;
    for(unsigned n2 = n1 + 1; n2 <= 97; n2++) {
        for(unsigned n3 = n2 + 1; n3 <= 98; n3++) {
            for(unsigned n4 = n3 + 1; n4 <= 99; n4++) {
                unsigned coins[] = {n1, n2, n3, n4};
                unsigned general_count = 0;
                for(unsigned cost = 1; cost <= 99; cost++) {
                    unsigned rest = cost;
                    unsigned count = 0;
                    for(int i = 3; i >= 0; i--) {
                        while(rest >= coins[i]) {
                            rest -= coins[i];
                            count++;
                        }
                    }
                    general_count += count;
                }
                if(general_count <= 415) {
                    cout << general_count << " " << coins[0] << " " << coins[1] << " " << coins[2] << " " << coins[3] << endl;
                }
            }
        }  
    }

    auto end_time = chrono::steady_clock::now();
    auto elapsed_ns = chrono::duration_cast<chrono::nanoseconds>(end_time - start_time);
    cout << (float)(elapsed_ns.count()) / 1000000000 << " sec\n";
}