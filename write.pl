

if($ARGV[3] eq "NGS")
{
open(OUT,">result")||die;
open(FH,"gene_miRNA_expression_ngs")||die;
while($line =<FH>)
{
chomp ($line);
@arr = ();
@arr = split("\t",$line);
if($arr[0] eq $ARGV[0] && $arr[1] eq $ARGV[2])
{
print OUT "$arr[0]\t$arr[1]\t$arr[2]\t";
last;
}

}

close (FH);

open(FH,"gene_TF_expression_ngs_top")||die;
while($line =<FH>)
{
chomp ($line);
if($line =~ /$ARGV[0]/)
{
while ($x = <FH>)
{
chomp ($x);
@arr1 = ();
@arr1 = split("\t",$x);
if($arr1[0] eq $ARGV[1])
{
print OUT "$arr1[0]\t$arr1[6]\t";
last;
}
}
last;
}

}
close (FH);


open(FH,"data_mirna_ngs")||die;
while($line =<FH>)
{
chomp ($line);
@arr2 = ();
@arr2 = split("\t",$line);
if($arr2[0] eq $ARGV[1] && $arr2[1] eq $ARGV[2])
{
print OUT "$arr2[0]\t$arr2[2]\t";
last;
}
}


close (FH);


open(FH,"miRNA_protein_expression_ngs")||die;
while($line =<FH>)
{
chomp ($line);
@arr3 = ();
@arr3 = split("\t",$line);
if($arr3[1] eq $ARGV[2])
{
print OUT "$arr3[0]\t$arr3[2]\n";
last;
}
}
close FH;
close OUT;
system("java -jar reg_network.jar result $ARGV[0]");
}






else
{
open(OUT,">result")||die;
open(FH,"gene_miRNA_expression_microarray")||die;
while($line =<FH>)
{
chomp ($line);
@arr = ();
@arr = split("\t",$line);
if($arr[0] eq $ARGV[0] && $arr[1] eq $ARGV[2])
{
print OUT "$arr[0]\t$arr[1]\t$arr[2]\t";
last;
}

}

close (FH);

open(FH,"gene_TF_expression_top_microarray")||die;
while($line =<FH>)
{
chomp ($line);
if($line =~ /$ARGV[0]/)
{
while ($x = <FH>)
{
chomp ($x);
@arr1 = ();
@arr1 = split("\t",$x);
if($arr1[0] eq $ARGV[1])
{
print OUT "$arr1[0]\t$arr1[6]\t";
last;
}

}
last;
}

}
close (FH);


open(FH,"data_mirna_microarray")||die;
while($line =<FH>)
{
chomp ($line);
@arr2 = ();
@arr2 = split("\t",$line);
if($arr2[0] eq $ARGV[1] && $arr2[1] eq $ARGV[2])
{
print OUT "$arr2[0]\t$arr2[2]\t";
last;
}
}


close (FH);


open(FH,"miRNA_protein_expression_microarray")||die;
while($line =<FH>)
{
chomp ($line);
@arr3 = ();
@arr3 = split("\t",$line);
if($arr3[1] eq $ARGV[2])
{
print OUT "$arr3[0]\t$arr3[2]\n";
last;
}
}
close FH;
close OUT;

system("java -jar reg_network.jar result $ARGV[0]");

}







