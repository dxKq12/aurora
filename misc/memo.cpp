/*
あとで自動で弾幕出してくれるようにする
sampleのところにアイデアどんどん入れてく
極座標で書いたら直交座標にしてくれるとかないかな、、、そっちのほうが楽できる気がするｗ

なんとなくアイデア思いついたときに適当に実装したいな、、、
綺麗な関数あったらcommitお願い

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

std::string getRandomString(const std::vector<std::string>& strings) {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int numStrings = static_cast<int>(strings.size());
    int randomIndex = std::rand() % numStrings;
    return strings[randomIndex];
}

int main() {
    
    std::vector<std::string> strings = {
        "sample0",
        "sample1",
        "sample2",
        "sample3",
        "sample4",
        "sample5",
    };
    
    std::cout << getRandomString(strings) << std::endl;

    return 0;
}
*/
