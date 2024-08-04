#include <iostream>

#define MODE 1

#ifndef MODE
#error "You must define MODE before compiling this program"
#endif

#if MODE == 0
int main() {
    setlocale(LC_ALL, "Russian");
    std::cout << "������� � ������ ����������" << std::endl;
    return 0;
}
#elif MODE == 1
int add(int a, int b) {
    return a + b;
}

int main() {
    setlocale(LC_ALL, "Russian");

    std::cout << "������� � ������ ������" << std::endl;
    std::cout << "������� ����� 1: ";
    int num1;
    std::cin >> num1;
    std::cout << "������� ����� 2: ";
    int num2;
    std::cin >> num2;
    int result = add(num1, num2);
    std::cout << "��������� ��������: " << result << std::endl;
    return 0;
}
#else
int main() {
    std::cout << "����������� �����. ���������� ������" << std::endl;
    return 0;
}
#endif
