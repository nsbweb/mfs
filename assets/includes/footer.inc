<!-- START : FOOTER -->
<div class="footer">
    <div class="container">
        <div class="row">
            <div class="col-xl-3">
                <h5 class="text-uppercase">Email</h5>

                <p class="MFS_footer_link">
                    <a href="mailto:hello@themodernfamilyshow.com">hello@themodernfamilyshow.com</a>
                </p>
                <div>
                    <button class="subscribe_now_btn">SUBSCRIBE NOW</button>
                </div>

                <br>
                <br>

                <ul class="nav">
                    <li class="nav-item">
                        <a class="social-icon-footer nav-link active" aria-current="page" href="https://www.facebook.com/TheModernFamilyShow/"><i class="fa-brands fa-facebook"></i></a>
                    </li>
                    <li class="nav-item">
                        <a class="social-icon-footer nav-link" href="https://www.instagram.com/themodernfamilyshow"><i class="fa-brands fa-instagram"></i></a>
                    </li>
                    <li class="nav-item">
                        <a class="social-icon-footer nav-link" href="https://twitter.com/TheModernFamil1"><i class="fa-brands fa-twitter"></i></a>
                    </li>
                    <li class="nav-item">
                        <a class="social-icon-footer nav-link" href="https://www.linkedin.com/company/64725406"><i class="fa-brands fa-linkedin"></i></a>
                        </li>
                </ul>
            </div>

            <div class="col-xl-3">
                <h5 class="text-uppercase">Links</h5>
                <ul class="footer_links">
                    <li><a href="index.shtml">Home</a></li>
                    <li><a href="about.shtml">About</a></li>
                    <li><a href="blog.shtml">Blog</a></li>
                    <li><a href="contact.shtml">Contact Us</a></li>
                    <li><a href="images/mfs-events-ltd-data-privacy-policy.pdf">Privacy Policy</a></li>
                </ul>
            </div>

            <div class="col-xl-3">
                <h5 class="text-uppercase">Past Events</h5>
                <ul>
                    <li><a href="#">London 22</a></li>
                </ul>
            </div>

            <div class="col-xl-3">
                <h5 class="text-uppercase">Contact Us</h5>
                <form class="contact_form" id="contact_form">
                    <br>
                    <input type="text" class="form-control" placeholder="YOUR NAME">
                    <br>
                    <input type="email" class="form-control" placeholder="YOUR EMAIL">
                    <br>
                    <textarea class="form-control" id="contact_message" name="contact_message"></textarea>
                    <br>
                    <input type="submit" value="Submit" class="Submit_btn" />
                </form>
            </div>
        </div>
    </div>
</div>
<!-- END : FOOTER -->
    
<script src="assets/js/jquery-3.6.4.slim.min.js"></script>
<script src="assets/js/bootstrap.bundle.min.js"></script>
<script>
    var activeurl = window.location;
    $('a[href="'+activeurl+'"]').parent('li').addClass('active');
</script>