#include "log.h"
#include <iostream>
#include <string>
#include <stdarg.h>

using namespace trace
{
    using namespace std;

    log_base :: record(string str, ...)
    {
        va_list arg;
        va_start(arg, &str);
        cout << *str;
        while()
        va_arg(arg,int);
        va_end(arg);

    }

    log::d()
    {
        cout<<endl;
    }

    log::e()
    {
        cout<<endl;
    }














};