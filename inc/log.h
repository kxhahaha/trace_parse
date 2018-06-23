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
            uint8_t plevel; //record level
        public:
            log_base();
            void record(string str, ...);
    };

    class log : log_base
    {
        private:
            s_uint_t log_cunt;
        public:
            log();
            void e(string str, ...); //error
            void d(string str, ...); //debug
            void i(string str, ...); //info
            void w(string str, ...); //warning
            void s(string str, ...); //serious
        
    };
};





#endif //__LOG_H__