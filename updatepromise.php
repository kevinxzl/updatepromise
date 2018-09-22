
<?php

function majorityGate($a, $b, $c, $d) {
	$inputArray = array($a, $b, $c, $d);
	$count = 0;
	foreach ($inputArray as $value) {
		if( $value === true){
			$count += 1;
		}
	}
	 
	if ( $count > 2 ) {
		return true;
	}else {
		return false;
       }
}

function firstDuplicate($arr) {
	$len = count($arr);
	for( $i = 0; $i < $len-1; $i++) {
		for($j = $i+1; $j < $len; $j++) {
			if( $arr[$i] == $arr[$j] ) {
				return $j;
			}
		}
	}
	return -1;
}
    
function frenchWeeks($weeks) {
	if( $weeks <= 0 ) {
		return 0;
	}
	$rate = (7 * 24 * 60 * 60) / (10 * 10 * 100 * 100);
	return ($rate * $weeks);
}


echo "No1: Test Case for majorityGate <br/>";
$a = true;
$b = true;
$c = true;
$d = false;
if( majorityGate($a, $b, $c, $d) === true ) {
	echo "TRUE";
}else {
	echo "FALSE";
}
echo "<br/>";
echo "No2: Test Case for firstDuplicate <br/>";
$arr = array(0, 1, 2, 3, 4, 2, 6);
$index = firstDuplicate($arr);
echo $index;
echo "<br/>";

echo "No3: Test Case for frenchWeeks <br/>";
$weeks =  10.89;
$fweeks = frenchWeeks($weeks);
echo "frenchWeeks=" . $fweeks . "<br/>";
?>
