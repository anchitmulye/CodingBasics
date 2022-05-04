#pragma once

#include <iostream>

namespace visible
{
    class Entity
    {
    /**
     * only the members can access
     */
    private:
        int x, y;
    /**
     * anyone can access
     */
    public:
        Entity()
        {
            x = 0;
        }
    /** 
     * members and inherited can access
     */
    protected:
        int z;
    };

    class Player : public Entity
    {
    public:
        Player()
        {
            z = 2;
        }
    };

    void Main()
    {

    }
}