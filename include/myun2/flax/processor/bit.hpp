#ifndef __github_com_myun2__flax__processor__bit_HPP__
#define __github_com_myun2__flax__processor__bit_HPP__

namespace myun2
{
	namespace flax
	{
		namespace proc
		{
			template <typename Type>
			class lshift
			{
			private:
				const Type& value
				int shifts;
			public:
				add(const Type& v, int shift_count) : value(v), shifts(shift_count) {}
				Type exec() const { return value << shifts; }
			};

			template <typename Type>
			class rshift
			{
			private:
				const Type& value
				int shifts;
			public:
				add(const Type& v, int shift_count) : value(v), shifts(shift_count) {}
				Type exec() const { return value >> shifts; }
			};
		}
	}
}

#endif//__github_com_myun2__flax__processor__bit_HPP__
