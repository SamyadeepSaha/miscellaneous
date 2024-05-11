#!/usr/bin/perl
use strict;
use warnings;

# Variables
my $name="Mati";
my @names=("Tintin", "Mati", "Bhutubabu");

print "Hello World\n";
#print $name;
#print "Hello, $name\n";
#print 'Hello, $name\n';
print "\n";

# foreach loop
foreach $name (@names) {
    print "Hello, $name\n";
}
print "\n";
foreach (@names) {
    print "Hello, $_\n";
}
