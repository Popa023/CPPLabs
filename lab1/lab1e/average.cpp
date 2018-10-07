//
// Created by razvan on 07.10.2018.
//
#include <iostream>

using namespace std;

float average(int n, const int *v){
    float average = 0;
    for(int i = 0; i < n; i++){
        average += v[i];
    }
    return average/n;
}

int main(){
    int n;
    cout << "Cate numere doriti?" << endl;
    cin >> n;
    int *v = new int[n];
    for (int i = 0; i < n; ++i) {
        cout << "baga" << endl;
        cin >> v[i];
    }
    cout << average(n,v);
    return 0;
}
