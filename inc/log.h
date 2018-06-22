#ifndef __LOG_H__
#define __LOG_H__

#include <string>
#include <iostream>
#include "data-type.h"

namespace trace
{
    using namespace std;

    class log_base
    {
        private:
        public:
            log_base(string info, ...);
    };

    class log : log_base
    {
        private:
            s_uint_t log_cunt;
        public:
            log(string info, ...):log_base(info, ...);
            void e(); //error
            void d(); //debug
            void i(); //info
            void w(); //warning
            void s(); //serious
        
    };
};





#endif //__LOG_H__