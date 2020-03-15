<#------------------------------------------------------ 
	PowerShell Script
	update: 7-Mrz-20
	(c) 2020 Jan Unger 
  * Suchen und Ersetzen 
------------------------------------------------------#>
Clear-Host # cls

#----------------------------------------------
# anpassen:
#*.cc
#*.cpp 
#----------------------------------------------

# suchen und ersetzen 
## Funktionsaufruf: suchenErsetzen
function suchenErsetzen{
  [array]$array = ls "*.cc"
  # array auslesen
  for($n=0; $n -lt $array.length; $n++){   # kleiner
    $name = "$($array[$n])"              # file.cc
    #$basename = "$($array.BaseName[$n])" # file
    #"$n - $name"
		# Kommentar entfernen
		# //
		$suchen = "//" # regulaerer Ausdruck
		$ersetzen = ""
		# regulaerer Ausdruck
		(Get-Content $name) | Foreach-Object {$_ -replace "$suchen", "$ersetzen"} | Set-Content $name
	}
}

# Funktionsaufruf
suchenErsetzen

"Suchen und Ersetzen: fertig"