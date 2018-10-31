# Research
Adder Code

Changes made to blif code: 
-added space in front of .names
-removed .names from beginning section to not confuse mapper looking for the values

Test on hmetis:
Works for 8 partition
output file lists the partition number that the vertice is directed to

To add:
-functionality for more than 3 inputs
-no need to change blif file with spaces and extra .names
-output directly to a file(ofstream) use v1.2

Meeting:
-Want to weight to the inputs so that it prioritizes keeping the inputs separtated if possible
-70% for inputs, 20% outputs, 10% everything else
-this is done with possible FixFile, but that is extreme
- instead weighting is done with (fmt) added to hypergraph file and to the executable call in terminal


Need to think about which nodes are part of which clusters and prioritze keeping those together NOT just the inputs to the entire thing. 
run recursively with different numbers gf partitions
