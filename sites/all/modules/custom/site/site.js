(function ($) {
    $(document).ready(function () {

        $("#subscriptions-ui-node-form #edit-footer").remove();
        $("#subscriptions-ui-node-form .form-submit").remove();

        $("#subscriptions-ui-node-form input.form-checkbox").change(function () {
            $("#subscriptions-ui-node-form").submit();
        });

        $('.form-item .description').each(function () {
            var desc = $(this);
            var label = desc.siblings('label:first');
            var multTable;
            if (label.length && !desc.parents('.field-multiple-table').length) {
                desc.insertAfter(label);
            } else if ((multTable = desc.siblings('.field-multiple-table')) && multTable.length) {
                desc.insertAfter(multTable.find('label:first'));
            }
        });
        $('.text-format-wrapper .description').each(function () {
            var desc = $(this);
            var label = desc.siblings('.form-item').find('label:first');
            if (label.length) {
                desc.insertAfter(label);
            }
        });
        $(".collapsible").click(function () {
            $header = $(this);
            $content = $header.next();
            $content.slideToggle(500, function () {
                $header.hasClass('uncollapsed') ? $header.removeClass('uncollapsed') : $header.addClass('uncollapsed');
            });
        });

        $(".field-name-field-status-update .view-all").click(function () {
            $header = $(this);
            $content = $(".field-name-field-status-update .collapsible-updates");
            $content.slideToggle(500, function () {
                $header.hasClass('uncollapsed') ? $header.removeClass('uncollapsed') : $header.addClass('uncollapsed');
            });
        });


        // Challenge vertical tabs.
        $('#challenge-stages .tabs').show();
        $('#challenge-stages .container').width('72%');

        // Set active tab based on challenge phase only if there is no hash.
        if (typeof($(this).tabs) == 'function' && typeof Drupal.settings.challenges.stage != 'undefined') {
            if (window.location.hash) {
                $('#challenge-stages').tabs(
                    {
                        select: function (event, ui) {
                            var scrollTop = $(window).scrollTop(); // save current scroll position
                            window.location.hash = ui.tab.hash;
                            $(window).scrollTop(scrollTop);
                        }
                    }).addClass('ui-tabs-vertical');
            } else {

                $('#challenge-stages').tabs(

                    {
                        selected: Drupal.settings.challenges.stage,
                        select: function (event, ui) {
                            var scrollTop = $(window).scrollTop(); // save current scroll position
                            window.location.hash = ui.tab.hash;
                            $(window).scrollTop(scrollTop);
                        }
                    }
                ).addClass('ui-tabs-vertical');
            }
        }

    });
})(jQuery);
