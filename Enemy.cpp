#include"Enemy.h"



void Enemy::Approach() {
    std::cout << "敵が接近！" << std:: endl;
}

void Enemy::Attack() {
    std::cout << "敵が攻撃！" << std::endl;
}

void Enemy::Retreat() {
    std::cout << "敵が離脱" << std::endl;
}

void Enemy::Update() {

    // 関数テーブルから関数を実行
    (this->*table[index])();

    std::cout << "次の状態に移行 (0: はい、 他: いいえ)";
    int input;
    std::cin >> input;

    if (input == 0) {
        index = (index + 1) % 3;
    }
}

// メンバ関数ポインタテーブル
void (Enemy::* Enemy::table[])() = {
    &Enemy::Approach, // インデックス0
    &Enemy::Attack,   // インデックス1
    &Enemy::Retreat   // インデックス2
};