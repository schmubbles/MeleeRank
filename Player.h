
#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
  std::string name;
  int wins;
  int losses;
  double ratio;
  int rank;

 public:
  Player(std::string);
  ~Player();

  std::string getName();
  int getWins();
  void addWin();
  int getLosses();
  void addLoss();
  double getRatio();
  void setRatio();
  int getRank();
  void setRank(int);
};

#endif
