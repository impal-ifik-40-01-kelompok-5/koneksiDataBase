<?php
 $koneksi = mysqli_connect("localhost","root","","jasa titip");
 
// Check connection
if (mysqli_connect_errno()){
	echo "Koneksi database gagal : " . mysqli_connect_error();
}
header('lccation:Untitled-4.html');
?>