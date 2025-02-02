#pragma once

#include <iostream>
#include <fstream>

class ScoreManager {
private:
    static int highScore;
    int score;
    int speed;

    void updateHighScore();

public:
    ScoreManager();
    ~ScoreManager();

    void loadScoreFromFile();
    void saveScoreInFile();

    int getHighScore();

    int getScore();
    void increaseScore(int score);

    int getSpeed();
    void increaseSpeed();
};