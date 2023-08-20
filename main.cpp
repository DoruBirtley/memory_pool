#include <memory>

#include "allocator.h"

int main() {
    KD::Allocator::SharedPtr<double> p_1 = KD::Allocator::SharedAllocate<double>(sizeof(double) * 1024);
    KD::Allocator::UniquePtr<double> p_3 = KD::Allocator::UniqueAllocate<double>(sizeof(double) * 1024);

    KD::Allocator::SharedPtr<double> p_2 = KD::Allocator::SharedConstruct<double>(8);
    KD::Allocator::UniquePtr<double> p_4 = KD::Allocator::UniqueConstruct<double>(8);
    KD::Allocator::UniquePtr<double> p_5(std::move(p_4));
    return 0;
}