//Colin Oremland

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "dat.h"
using namespace std;

int main() {
bool reap = true;
char inpt;
string filebuffer;
ofstream fileout("word.txt",ios::out|ios::ate|ios::app);
  cout << "\nWelcome to the random word generator!" << endl;
  cout << "\nPress Any Key to create a random word." << endl;
  cin.get();

  while (reap == true) {
  // combining header test 1 // Ben Ogden
  srand (time(0));
  int rp = rand() % 31 - 1;
  int Preslt = rp;
  string prfx [30] = {"anti", "de", "dis", "dis", "en", "em", "fore", "in", "im", "in", "im", "il", "ir", "inter", "mid", "mis", "non", "over", "pre", "re", "semi", "sub", "super", "trans", "un", "under"};
  int rs = rand() % 34 - 1;
  int Sreslt = rp;
  string sffx [33] = {"able", "ible", "al", "ial", "ed", "en", "er", "er", "est", "ful", "ic", "ing", "ion", "tion", "ation", "ition", "ity", "ty", "ive", "ative", "itive", "less", "ly", "ment", "ment", "ness", "ness", "ous", "eous", "ious", "s", "es", "y"};
  int rr = rand() % 37 - 1;
  int Rreslt = rr;
  string Lroot [36] = {"ambi", "aqua", "aud", "bene", "cent", "circum", "contra", "counter", "dict", "duc", "duct", "fac", "form", "fort", "fract", "ject", "jud", "mal", "mater", "mit", "mort", "multi", "pater", "port", "rupt", "scrib", "scribe", "sect", "sec", "sent", "spect", "struct", "vid", "vis", "voc"};
  //string Groot [] = {};
  string defP [26] = {"against", "opposite", "not", "opposite of", "cause to", "cause to", "before", "in", "in", "not", "not", "not", "not", "between", "middle", "wrongly", "not", "over", "before", "again", "half", "under", "above", "across", "not", "under"};
  string defS [31] = {"can be done", "can be done", "having characteristics of", "having characteristics of", "past-tense", "made of", "comparative", "one who", "comparative", "full of", "having characteristics of", " verb form", "act", "process", "act", "process", "state of", "state of", "adjective", "adjective", "adjective", "without", "characteristics of", "action", "process", "state of", "condition of", "possessing the qualities of", "more than one", "more than one", "characterized by"};
  string defR [36] = {"both", "water", "to hear", "good", "one hundred", "around", "against", "against", "to say", "to lead", "to lead", "to do", "to make", "shape", "strength", "to break", "throw", "judge", "bad", "mother", "to send", "death", "many", "father", "to carry", "to break", "to write", "to write", "to cut", "to cut", "to feel; to send", "to look", "to build", "to see", "to see", "voice; to call"};
   
  if (reap == true) { // Ben Ogden
  cout << "\nRandom word: " << prfx[rp] << " - " << Lroot[rr] << " - " << sffx[rs];
  cout << "\n" << prfx[rp] << Lroot[rr] << sffx[rs];
  cout << "\nLiteral definition: " << defP[Preslt] << " - " << defR[Rreslt] << " - " << defS[Sreslt];
  //cout << "\nSmoothed out definition: " << ;
  }
  cout << "\nWould you like to save your entry (y/n): ";
  cin >> inpt;
  if (inpt == 'y') {
  filebuffer = prfx[rp] + Lroot[rr] + sffx[rs];
  fileout<<filebuffer<<endl;
  filebuffer = defP[Preslt] + " " + defR[Rreslt] + " " + defS[Sreslt];
  fileout<<filebuffer<<endl;
  cout<<"\nSaved to word.txt"<<endl;
  }
cout << "\nWould you like to play again?(y/n): "<<endl;
  cin >> inpt;
  if (inpt == 'y') {
    reap = true;
  }
  else if (inpt == 'n') {
    reap = false;
    fileout.close();
  }
}
  return 0;
}
