
from googleplaces import GooglePlaces, types, lang

YOUR_API_KEY = 'AIzaSyAkzkD5rxs4FnVXXVOWc6CFglnMBNdagZ8'

google_places = GooglePlaces(YOUR_API_KEY)
query_result = google_places.nearby_search(
        location='Hyderabad', keyword='hospital',
        radius=50, types=[types.TYPE_HOSPITAL])

if query_result.has_attributions:
    print (query_result.html_attributions)


for place in query_result.places:
    # Returned places from a query are place summaries.
    print (place.name)
