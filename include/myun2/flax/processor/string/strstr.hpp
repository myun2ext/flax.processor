#ifndef __github_com_myun2__flax__processor__string__strstr_HPP__
#define __github_com_myun2__flax__processor__string__strstr_HPP__

#include <string.h>

namespace myun2
{
	namespace flax
	{
		namespace proc
		{
			class strstr_
			{
			public:
				int exec(const char* s, const char* search_str) const
				{
					const char *p = ::strstr(s, search_str);
					if ( p == NULL )
						return -1;
					else
						return p - s;
				}
			};
		}
	}
}

#endif//__github_com_myun2__flax__processor__string__strstr_HPP__
