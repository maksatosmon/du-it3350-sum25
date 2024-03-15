$(function () {
  var includes = $('[data-include]')
  $.each(includes, function () {
    var file = 'cards/' + $(this).data('include') + '.inc'
    $(this).load(file)
  })
})

function getResponse(url, callback, data) {
  return jQuery.get(url, data, callback);
}