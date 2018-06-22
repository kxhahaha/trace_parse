#include "cmd-parse.h"
#include "data-type.h"
#include<unistd.h>

using namespace trace;


//cmd_parse class package
cmd_parse::cmd_parse(int iargc, char* iargv[])
{
    this->argc = iargc;
    this->app_name = iargv[0];

    //system support s_uint_t arg
    for(s_uint_t i = 1; i < iargc; i++)
    {
        argv.push_back(iargv[i]);
    }
}

//~cmd_parse
cmd_parse::~cmd_parse()
{
    log.e("class cmd_parse destroy.");
}

