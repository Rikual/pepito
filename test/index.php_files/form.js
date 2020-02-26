
function addLink(tablename, prefix, label) {
	var newRow = document.getElementById(tablename).insertRow(-1);
	var newCell = newRow.insertCell(0);
	newCell.innerHTML = label + ' : ';
	newCell = newRow.insertCell(1);
	newCell.innerHTML = '<input type="text" name="' + prefix + '[]" />';
}
