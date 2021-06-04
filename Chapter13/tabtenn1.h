#pragma once
#ifndef TABTENN1_H_
#define TABTENN1_H_
#include <string>
using std::string;

class TableTennisPlayer
{
private:
	string firstname;
	string lastname;
	bool hasTable;
public:
	TableTennisPlayer(const string & fn = "none", const string & ln = "none", bool ht = false);
	virtual void Name() const;
	bool HasTable() const { return hasTable; };
	void RestTable(bool v) { hasTable = v; };
	string Getfirstname() const { return firstname; };
	string Getlastname() const { return lastname; };
};

class RatedPlayer : public TableTennisPlayer {
private:
	unsigned int rating;
public:
	RatedPlayer(unsigned int r = 0, const string & fn = "none", const string & ln = "none", bool ht = false);
	RatedPlayer(unsigned int r, const TableTennisPlayer & tp);

	void Name() const;
	unsigned int Rating() { return rating; };
	void ResetRating(unsigned int r) { rating = r; }
};




#endif // !TABTENN1_H_

