Core Insight

Without splitting, bacteria mass grows linearly (1g per hour per dish).

Splitting lets us fractionalize dishes, which after multiple hours of growth sum up to exactly X.

This is equivalent to representing X in binary.

Step-by-step Idea

Notice total growth comes from two parts:

Initial dish weights (fractions from splitting).

Hourly increments (+1g per dish each hour).

The minimum number of hours equals the number of bits in X (binary length) minus 1.

Why? Because each split effectively lets us build another power of 2 contribution.

The splitting strategy:

At each hour, split exactly one dish, corresponding to binary decomposition of X.

Count of splits per hour = number of 1’s in binary decomposition path.

Example

X = 10 → binary 1010.

Needs 4 bits → minimum 3 hours.

Each hour, split 1 dish.

Edge Cases

X = 1: Already satisfied at hour 0 → 0 hours.

X is a power of two → strategy aligns with binary directly.

Large X up to 10^9: Solution works since binary length ≤ 30.