
#include "Player.h"

using std::string;

Player::Player(string name){
  this->name = name;
  wins = 0;
  losses = 0;
  ratio = 0;
  rank = 0;
}

Player::~Player(){

}

string Player::getName(){
  return name;
}

int Player::getWins(){
  return wins;
}

void Player::addWin(){
  ++wins;
}

int Player::getLosses(){
  return losses;
}

void Player::addLoss(){
  ++losses;
}

double Player::getRatio(){
  return ratio;
}

void Player::setRatio(){
  if (losses == 0){
    ratio = 0;
  } else {
    ratio = (double)wins / (double)losses;
  }
}

int Player::getRank(){
  return rank;
}

void Player::setRank(int rank){
  this->rank = rank;
}
