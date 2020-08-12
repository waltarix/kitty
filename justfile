app:
	make app

wcwidth9:
	curl --progress-bar \
		https://github.com/waltarix/localedata/releases/download/13.0.0-r1/wcwidth9.h \
		> kitty/wcwidth9.h

generate-wcwidth: wcwidth9
	python3 gen-wcwidth.py
