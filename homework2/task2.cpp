#include <iostream>

int main(){
    int n;
    std::cout << "Input n:" << std::endl;
    std::cin >> n;
    int x = 1;
    for (int i=1; i <= n; i += 1){
        for (int q=1; q <= n-i; q+=1){
            std::cout << " ";
        }
        
        for (int q=1; q < x+1; q+=1){
            std::cout << "*";
        }
        x += 2;
    std::cout << std::endl;
    }
    return 0;
}