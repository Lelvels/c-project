#include<iostream>
#include <sstream>
using namespace std;

int computeGcd(int a, int b) {
    int arr[32];
    arr[0] = b;
    int i = 1;
    while (arr[i - 1] != 0) {
        arr[i] = a % b;
        a = arr[i - 1];
        b = arr[i];
        i++;
    }
    return arr[i - 2];
}


string toiGianPhanso(int a, int b) {
    string result = "";
    int BCNN = computeGcd(a, b);
    int tuSo = a / BCNN;
    int mauSo = b / BCNN;
    if (mauSo < 0) {
        mauSo = -(mauSo);
        tuSo = -(tuSo);
        result = result + std::to_string(tuSo) + "/" +std::to_string(mauSo);
        return result;
    }
    else if (mauSo == 1) {
        result = result + std::to_string(tuSo);
        return result;
    }
    else if (tuSo < 0 && mauSo < 0) {
        mauSo = -(mauSo);
        tuSo = -(tuSo);
        result = result + std::to_string(tuSo) + "/" + std::to_string(mauSo);
        return result;
    }
    else {
        result = result + std::to_string(tuSo) + "/" + std::to_string(mauSo);
        return result;
    }
}

int main() {
    int a, b;
	cin >> a;
	cin >> b;
    cout << toiGianPhanso(a, b);
}