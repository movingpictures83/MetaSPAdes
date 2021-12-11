# MetaSPAdes
# Language: C++
# Input: TXT
# Output: DIR
# Tested with: PluMA 1.1, GCC 4.8.4
# Dependency: SPAdes 3.12

Generate assembly using MetaSPAdes (Nurk et al, 2017)

The plugin accepts as input a TXT file of tab-delimited keyword-value pairs:
forward: FASTQ file for forward sequences
reverse: FASTQ file for reverse sequences

Output assembly data will be sent to the specified output directory
