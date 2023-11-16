#pragma once

#include "Resource.hpp"

class ResourceManager
{
    
    public:
    ResourceManager(): res(new Resource){};

    ResourceManager(const ResourceManager& resM) : res(new Resource(*resM.res)) {};

    ~ResourceManager(){
        delete res;
    }
    private:
    Resource*res;

    


};
