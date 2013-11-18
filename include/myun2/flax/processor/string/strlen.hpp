#ifndef __github_com_myun2__flax__processor__string__strlen_HPP__
#define __github_com_myun2__flax__processor__string__strlen_HPP__

#include <string.h>

namespace myun2
{
	namespace flax
	{
		namespace proc
		{
			class strlen_
			{
			public:
				int exec(const char* s) const
				{
					return ::strlen(s);
				}
			};
		}
	}
}

#endif//__github_com_myun2__flax__processor__string__strlen_HPP__
