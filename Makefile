.PHONY: clean All

All:
	@echo "----------Building project:[ Section8Challenge-Operators - Debug ]----------"
	@cd "Section8Challenge-Operators" && "$(MAKE)" -f  "Section8Challenge-Operators.mk"
clean:
	@echo "----------Cleaning project:[ Section8Challenge-Operators - Debug ]----------"
	@cd "Section8Challenge-Operators" && "$(MAKE)" -f  "Section8Challenge-Operators.mk" clean
