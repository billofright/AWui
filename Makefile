.PHONY: clean All

All:
	@echo "----------Building project:[ AWui - Debug ]----------"
	@cd "AWui" && "$(MAKE)" -f  "AWui.mk"
clean:
	@echo "----------Cleaning project:[ AWui - Debug ]----------"
	@cd "AWui" && "$(MAKE)" -f  "AWui.mk" clean
