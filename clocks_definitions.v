/*
We are given that the master clock is 100MHz, and that subsequent values in this file
are even (i.e. divisible by 2).
*/
parameter master_hz = 10000; // 100000000; // Will repeat this many times per second
parameter master_clock_regs = 32; // 2^32 > 100*1e6. Who cares if we use 1 extra reg
parameter sec_ctr = master_hz; // 1 Hz
parameter blink_ctr = sec_ctr; // 1 Hz
parameter display_ctr = blink_ctr / 100; // 100 Hz
parameter max_ctr = blink_ctr; // Biggest our register will ever get (set to 0 after)