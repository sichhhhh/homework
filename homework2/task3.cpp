#include <iostream>

int main(){
    int n;
    std::cout << "Input n:" << std::endl;
    std::cin >> n;
    int x = 1;
    if (n % 2 == 0){
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
        x -= 2;
        int n = 0;
        while (x > 0){
            for (int i=0; i < n; i+=1){
                std::cout << " ";
            }
            n += 1;
            for (int i = 1; i <= x; i +=1){
                std::cout << "*";
            }
            x -= 2;
        std::cout << std::endl;
        }
    } else {
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
        x -= 4;
        int n = 0;
        while (x > 0){
            for (int i=0; i <= n; i+=1){
                std::cout << " ";
            }
            n += 1;
            for (int i = 1; i <= x; i +=1){
                std::cout << "*";
            }
            x -= 2;
        std::cout << std::endl;
        }
    }
    return 0;
}