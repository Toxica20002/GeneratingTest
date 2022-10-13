#!/bin/bash
for i in {0..50..1}; do
    echo "Doing $i";
    ./squ_data_generator.exe $i >data/test$i.in;
    time ./sol.exe <./data/test$i.in >./data/test$i.ans;
done