#pragma once
#ifndef TV_H_
#define TV_H_

class Remote;

class Tv {
friend class Remote;
private:
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;
public:
	enum { Off, On };
	enum { MinVal, MaxVal = 20 };
	enum { Antenna, Cable };
	enum { TV, DVD };

	Tv(int s = Off, int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) { }
	void onoff() { state = (state == On) ? Off : On; }
	bool ison() const { return state == On; }
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
	void set_input() { input = (input == TV) ? DVD : TV; }
	void settings() const;
	void set_mode2(Remote & r);
};

class Remote {
friend class Tv;
private:
	int mode;
	int mode2;
public:
	enum {Normal, Conversation};
	Remote(int m = Tv::TV, int m2 = Normal) : mode(m), mode2(m2) { }
	bool volup(Tv & t) { return t.volup(); }
	bool voldown(Tv & t) { return t.voldown(); }
	void onoff(Tv & t) { t.onoff(); }
	void chanup(Tv & t) { t.chanup(); }
	void chandown(Tv & t) { t.chandown(); }
	void set_chan(Tv & t, int c) { t.channel = c; }
	void set_mode(Tv & t) { t.set_mode(); }
	void set_input(Tv & t) { t.set_input(); }
	void show_mode2();
};

inline void Tv::set_mode2(Remote & r)
{
	if (state == On) r.mode2 = (r.mode2 == Remote::Normal) ? Remote::Conversation : Remote::Normal;
}
#endif // !TV_H_


