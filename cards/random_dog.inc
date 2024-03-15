<style>
	.randomDogImage {
		width: 180px;
		height: 180px;
	}
</style>
<img class='randomDogImage' />
<script>
	// Web resources may change/disappear. Substitute as needed.
	// https://dog.ceo/dog-api/
	// discovered via https://publicapis.dev/search?q=dogs
	 getResponse(
	 	'https://dog.ceo/api/breeds/image/random', 
	 	(response) => $('.randomDogImage').attr('src', response.message)
	 );
</script>