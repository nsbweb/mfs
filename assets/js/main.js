var activeurl = getLastUrlSegment(window.location.href);
function getLastUrlSegment(url) {
    return new URL(url).pathname.split('/').filter(Boolean).pop();
}
$('a[href="'+activeurl+'"]').parent('li').addClass('active');


// When the user scrolls the page, execute scrollFunc
window.onscroll = function() {scrollFunc()};

// Get the header
var header = document.querySelector(".header");
var bodyElem = document.querySelector("body");

// Get the offset position of the navbar
var sticky = header.offsetTop;

// Add the sticky class to the header when you reach its scroll position. Remove "sticky" when you leave the scroll position
function scrollFunc() {
    if (window.pageYOffset > sticky) {
        header.classList.add("sticky");
        bodyElem.classList.add("sticky");
    } else {
        header.classList.remove("sticky");
        bodyElem.classList.remove("sticky");
    }
}
// When the user scrolls the page, execute scrollFunc

// Slider function
$('.owl-carousel').owlCarousel({
    loop:false,
    margin:0,
    nav:true,
    dots:false,
    responsive:{
        0:{
            items:2
        },
        600:{
            items:3
        },
        1000:{
            items:4
        }
    }
});
// Slider function

$(function () {
    $('.popup-modal').magnificPopup({
        type: 'inline',
        modal: true,
        midClick: true,
    });
    $(document).on('click', '.popup-modal-dismiss', function (e) {
        e.preventDefault();
        $.magnificPopup.close();
    });
});

/* Open */
function openNav() {
    document.getElementById("myNav").style.height = "100%";
  }
  
  /* Close */
  function closeNav() {
    document.getElementById("myNav").style.height = "0%";
  }