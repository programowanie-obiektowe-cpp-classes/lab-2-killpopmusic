#pragma once

#include "Resource.hpp"

class ResourceManager
{
    
    public:
        ResourceManager(): res(new Resource){};

        ResourceManager(const ResourceManager& resM) : res(new Resource(*resM.res)) {};

    
        ResourceManager& operator=(const ResourceManager& resM)
        {
            if(this!=&resM){
                delete res;
                res = new Resource(*resM.res);
            }
            return *this;

        };
        ~ResourceManager(){
            delete res;
        };

        double get() const {
            return res->get();
        }
    private:
        Resource* res;

};
