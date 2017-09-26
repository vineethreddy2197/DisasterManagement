import tweepy
 
def login_to_twitter(consumer_key, consumer_secret, access_token, access_token_secret):
 
    auth = tweepy.OAuthHandler(consumer_key,  consumer_secret)
    auth.set_access_token(access_token,       access_token_secret)
 
    api = tweepy.API(auth)
    ret = {}
    ret['api'] = api
    ret['auth'] = auth
    return  api
 
 
 
def post_tweets():
 
    consumer_key	   =   '4aHcHBGMhnLHIL0qb7JuCbriM'
    consumer_secret	   =   'MzAUvilX2VA5DKKdV9ZtP5j1D8vK3NkYbKomvsr3ikwPdYvaSD'
    access_token	   =   '3235188956-o95DXCGws2sinldAQxCcIBk25joU1oYix4xsA2L'
    access_token_secret   =   'ZRd0qy70vqvtXtv4TCnYWauspVP2GHd4nayhkAquzlvid'
 
    message = "LOL..! OK!"
 
    api = login_to_twitter(consumer_key, consumer_secret, access_token, access_token_secret )
 
    ret = api.update_status(status=message)
 
 
if __name__ == '__main__':
    post_tweets()
print("Tweet Successful...!")
