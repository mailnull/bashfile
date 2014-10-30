from django.shortcuts import render_to_response
from django.http import HttpResponse
import datetime

def hello(request):
    return HttpResponse("Hello world")

def current_datetime(request):
    now = datetime.datetime.now()
    return render_to_response('current_datetime.html', {'current_date': now})
def cpu_temp(repuest):
    file = open("/sys/class/thermal/thermal_zone0/temp")
    temp = float(file.read())/1000
    file.close()
    ftemp = "%.2f" %temp
    return render_to_response('cpu_temp.html', {'cpu_temp': ftemp})
