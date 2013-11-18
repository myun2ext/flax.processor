#ifndef __github_com_myun2__flax__processor__string__strchr_HPP__
#define __github_com_myun2__flax__processor__string__strchr_HPP__

#include <string.h>

namespace myun2
{
	namespace flax
	{
		namespace proc
		{
			class strchr_
			{
			public:
				int exec(const char* s, char c) const
				{
					const char *p = ::strchr(s, c);
					if ( p == NULL )
						return -1;
					else
						return p - s;
				}
			};
		}
	}
}

#endif//__github_com_myun2__flax__processor__bit_HPP__
