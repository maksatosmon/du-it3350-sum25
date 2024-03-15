<script>
	var conversionMap = new Array();
	// Web resources may change/disappear. Substitute as needed.
	// https://github.com/fawazahmed0/exchange-api?tab=readme-ov-file
	// discovered via https://publicapis.dev/category/currency-exchange
	getResponse('https://cdn.jsdelivr.net/npm/@fawazahmed0/currency-api@latest/v1/currencies/usd.json', (response) => {
		for (const [key, value] of Object.entries(response.usd)) {
			conversionMap[key] = value;
		}
	});

	function doComputation() {
		var result = $('#usdValue').val() * conversionMap[$('#currency').val()];
		$('#endValue').val(result.toFixed(2));
	}
</script>
<form style='text-align:center;'>
	<p><B>Currency Converter</B></p>
	<input type='text' id='usdValue' style='width:60px;'
		onkeyup="doComputation();" />
		<span style='font-size:22px;'> USD</span>
	<br/><span style='font-size:48px;'>=</span>
	<br/>
	<input type='text' id='endValue' style='width:60px;'> 
	<SELECT id='currency' onchange="doComputation();">
		<OPTION value='eur'>EUR</OPTION>
		<OPTION value='gbp'>GBP</OPTION>
		<OPTION value='chf'>CHF</OPTION>
	</SELECT>
</form>

