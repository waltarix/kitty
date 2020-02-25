app:
	make app

wcwidth9:
	curl --progress-bar \
		https://github.com/waltarix/neovim/releases/download/unicode%2F13.0.0/wcwidth9.h \
		> kitty/wcwidth9.h

generate-wcwidth: wcwidth9
	python3 gen-wcwidth.py
