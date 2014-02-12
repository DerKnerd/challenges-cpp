$.fn.makeHtml = function (options) {
    var converter = new Showdown.converter({ extensions: ['github', 'prettify', 'table'] });
    var html = converter.makeHtml($(this).text());
    if (options && options.output) {
        $(options.output).html(html);
    } else {
        $(this).html(html);
    }
}
$(document).ready(function () {
    $('*[data-markdown=true]').each(function () {
        var options = {};
        if ($(this).data('target')) {
            options.output = '#' + $(this).data('target');
        }
        $(this).makeHtml(options);
    });
});