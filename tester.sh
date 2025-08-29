#!/bin/bash

# Colors
RED="\033[0;31m"
GREEN="\033[0;32m"
NC="\033[0m" # No color



# Function to run a test
test_push_swap() { 
local input=$1 
local is_valid_test=$2 
local is_complex=$3 
local result 
expected_error=$(printf "Error\n") 

result=$(./push_swap $input) 

if [[ "$is_valid_test" == "v" && "$result" != "$expected_error" ]]; then
echo "${GREEN}Valid test passed for input: $input${NC}"
elif [[ "$is_valid_test" == "iv" && "$result" == "$expected_error" ]]; then
echo "${GREEN}Invalid test passed (expected error) for input: $input${NC}"
else
echo "${RED}Test failed for input: $input${NC}"
fi

if [[ "$is_complex" != "t" ]]; then 
echo "Output obtained: $result" 
fi 
echo "--------------------------------------"
}

# Valid tests
echo ""
echo "=====================================
echo "Valid Tests"
echo "=====================================
test_push_swap "1 3 5 +9 20 -4 50 60 04 08" "v"
test_push_swap "3 4 6 8 9 74 -56 +495" "v"
test_push_swap "2147483647 2 4 7" "v"
test_push_swap "-000042" "v"
test_push_swap "-0000" "v"
test_push_swap "-0000 1" "v"
test_push_swap "+00002" "v"
test_push_swap "+2 -00001" "v"
test_push_swap "99 -2147483648 23 545" "v"
test_push_swap "2147483647 843 56544 24394" "v"
test_push_swap "$(seq 79 100)" "v" # Test with a sequence from 1 to 100
test_push_swap "$(seq -100 -95)" "v" # Test with a sequence from -100 to 100

# Tests invalid
echo ""
echo "=====================================
echo "Invalid Tests"
echo "=====================================
test_push_swap "1 3 dog 35 80 -3" "iv"
test_push_swap "a" "iv"
test_push_swap "1 2 3 5 67b778 947" "iv"
test_push_swap "12 4 6 8 54fhd 4354" "iv"
test_push_swap "1 -- 45 32" "iv"
test_push_swap "1 3 58 9 3" "iv"
test_push_swap "3 03" "iv"
test_push_swap "49 128 50 38 49" "iv"
test_push_swap "54867543867438 3" "iv"
test_push_swap "-2147483647765 4 5" "iv"
test_push_swap "214748364748385 28 47 29" "iv"
test_push_swap "1 2 4 3 76 90 348 05 00-4" "iv"
test_push_swap "1 2 3 4 5 6 7 8 9 10 1" "iv" # Test with a duplicate
test_push_swap "2147483647 2147483648" "iv" # Test with a number greater than INT_MAX
test_push_swap "-2147483648 -2147483649" "iv" # Test with a number less than INT_MIN
test_push_swap "00000000+3" "iv"
test_push_swap "00000000-3" "iv"
test_push_swap "000000003+" "iv"
test_push_swap "000000003," "iv"
test_push_swap "1 000003-2" "iv"
test_push_swap "+0000000-3" "iv"
test_push_swap "+3-3" "iv"
test_push_swap "-100-1" "iv"
test_push_swap "-42+42" "iv"
test_push_swap "--42" "iv"
test_push_swap "0-42" "iv"
test_push_swap "0--42" "iv"
test_push_swap "0+42" "iv"
test_push_swap "0++42" "iv"
test_push_swap "-+42" "iv"
test_push_swap "+-42" "iv"
test_push_swap "-42 +00000-1" "iv"