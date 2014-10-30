from django.conf.urls import patterns, include, url
from django.contrib import admin
from mysite.views import hello,current_datetime,cpu_temp

urlpatterns = patterns('',
    # Examples:
    # url(r'^$', 'mysite.views.home', name='home'),
    # url(r'^blog/', include('blog.urls')),

    #url(r'^admin/', include(admin.site.urls)),
    (r'^$',hello ),
    (r'^hello/$',hello),
    ('^time/$',current_datetime),
    (r'^temp/$',cpu_temp ),
)