#include <iostream>
#include <vector>
#include <string>
namespace trace
{
	using namespace std;
	
	class cmd_parse
	{
		private:
			int argc;
			string app_name;
			vector <string> argv;
		public:
			cmd_parse(int iargc, char* iargv[]);


			~cmd_parse();
	};
};
