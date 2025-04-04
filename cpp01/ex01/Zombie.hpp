#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie
{
private :
    std::string _name;
public:
    Zombie( void );
    ~Zombie( void );
    void name_zombie( std::string name );
    void announce( void ) const;
};

Zombie* zombieHorde( int N, std::string name );
void killHorde( Zombie *horde );

#endif