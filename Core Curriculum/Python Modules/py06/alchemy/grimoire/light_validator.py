from . import light_spellbook
# XXXXX: from alchemy.grimoire.light_spellbook import
# light_spell_allowed_ingredients
# ths will cause circular dependencies:
# solution: Import the Module, Not the Specific Attribute


def validate_ingredients(ingredients: str) -> str:
    allow = light_spellbook.light_spell_allowed_ingredients()
    insensitive = ingredients.lower()
    if any(item in insensitive for item in allow):
        return f"{ingredients} - VALID"
    return f"{ingredients} - INVALID"
