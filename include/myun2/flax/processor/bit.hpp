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
				lshift(const Type& v, int shift_count) : value(v), shifts(shift_count) {}
				Type exec() const { return value << shifts; }
			};

			template <typename Type>
			class rshift
			{
			private:
				const Type& value
				int shifts;
			public:
				rshift(const Type& v, int shift_count) : value(v), shifts(shift_count) {}
				Type exec() const { return value >> shifts; }
			};

			template <typename Type, typename MaskType=unsigned int>
			class bit_mask
			{
			private:
				const Type& value
				const MaskType& mask;
			public:
				bit_mask(const Type& v, const MaskType& mask_in) : value(v), mask(mask_in) {}
				Type exec() const { return value & mask; }
			};
		}
	}
}

#endif//__github_com_myun2__flax__processor__bit_HPP__
