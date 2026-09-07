from .dark_spellbook import dark_spell_allowed_ingredients


def validate_ingredients(ingredients: str) -> str:
    allow = dark_spell_allowed_ingredients()
    insensitive = ingredients.lower()
    if any(item in insensitive for item in allow):
        return f"{ingredients} - VALID"
    return f"{ingredients} - INVALID"
