#ifndef _PREFERENCE_H
#define _PREFERENCE_H

class Preference 
{
  private:
    Preference(){};
    virtual ~Preference(){};	
    static Preference* pref;
  public:	
    static Preference* getInstance(void){
      return pref;
    };
    float density;
    float extruded_width;
    float extruded_height;
    long counter;
};

#endif