#ifndef  BITWISEOPS_H
#define  BITWISEOPS_H
  // bit is 0 to 31, returns true if bit in storage_uint is "on"
  static inline bool bit_on( unsigned storage, unsigned bit )
  { return storage & (1<<bit); }    

  // bit is indexed, starting with 0 at the least significant bit (LSB) 
  static inline void set_bit_on( unsigned& storage, unsigned bit )
  { storage |= (1<<bit); }    

  // bit is indexed, starting with 0 at the LSB
  static inline void set_bit_off( unsigned& storage, unsigned bit )
  { storage &= ~(1<<bit); }    

  // bit is indexed starting with 0 at the LSB, mask is the bitfield mask
  // sets the bitfield value to v 
  static inline void bitfield( unsigned& storage, unsigned v, unsigned mask, unsigned lsb )
  { storage = ( storage & ~mask ) | ((v<<lsb) & mask ); }    

  // bit is indexed starting with 0 at the LSB, mask is the bitfield mask
  // returns the bitfield value as an unsigned integer
  static inline unsigned bitfield( unsigned storage, unsigned mask, unsigned lsb )
  { return (storage >> lsb) & ( mask >> lsb ); }
#endif 
