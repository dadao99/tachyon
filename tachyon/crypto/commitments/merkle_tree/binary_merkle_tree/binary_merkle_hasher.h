// Use of this source code is governed by a Apache-2.0 style license that
// can be found in the LICENSE.lambdaworks.

#ifndef TACHYON_CRYPTO_COMMITMENTS_MERKLE_TREE_BINARY_MERKLE_TREE_BINARY_MERKLE_HASHER_H_
#define TACHYON_CRYPTO_COMMITMENTS_MERKLE_TREE_BINARY_MERKLE_TREE_BINARY_MERKLE_HASHER_H_

namespace tachyon::crypto {

template <typename LeafTy, typename HashTy>
class BinaryMerkleHasher {
 public:
  virtual ~BinaryMerkleHasher() = default;

  virtual HashTy ComputeLeafHash(const LeafTy& leaf) const = 0;

  virtual HashTy ComputeParentHash(const HashTy& left,
                                   const HashTy& right) const = 0;
};

}  // namespace tachyon::crypto

#endif  // TACHYON_CRYPTO_COMMITMENTS_MERKLE_TREE_BINARY_MERKLE_TREE_BINARY_MERKLE_HASHER_H_
