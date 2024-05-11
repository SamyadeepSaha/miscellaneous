#!/usr/bin/perl
use strict;
use warnings;

open(my $input, "<", "rhyme.txt") or die "Couldn't open rhyme.txt: $!";

while (<$input>) {
    print "Line: $_";
}

