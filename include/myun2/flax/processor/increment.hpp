#ifndef __github_com_myun2__flax__processor__increment_HPP__
#define __github_com_myun2__flax__processor__increment_HPP__

namespace myun2
{
	namespace flax
	{
		namespace proc
		{
			template <typename Type>
			class increment
			{
			private:
				Type& value;
			public:
				increment(Type& v) : value(v) {}
				Type exec() const { return ++value; }
			};

			template <typename Type>
			class constant_increment
			{
			private:
				Type value;
			public:
				constant_increment(const Type& v) : value(v) {}
				Type exec() const { return ++value; }
			};
		}
	}
}

#endif//__github_com_myun2__flax__processor__increment_HPP__
