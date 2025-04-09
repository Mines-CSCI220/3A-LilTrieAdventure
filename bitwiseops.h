  // bit is 0 to 31, returns true if bit in mask is "on"
  static inline bool bit_on( unsigned mask, unsigned bit ) 
  { return mask & (1<<bit); }    

  // bit is 0 to 31, sets the bit to "on"
  static inline void set_bit_on( unsigned & mask, unsigned bit ) 
  { mask |= (1<<bit); }    

  // bit is 0 to 31, sets the bit to "off"
  static inline void set_bit_off( unsigned& mask, unsigned bit ) 
  { mask &= (1<<bit); }    
