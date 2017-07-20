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
 
    consumer_key	   =   '..'
    consumer_secret	   =   '...'
    access_token	   =   '....'
    access_token_secret=   =   '.....'
 
    message = "Random whatever!!"
 
    api = login_to_twitter(consumer_key, consumer_secret, access_token, access_token_secret )
 
    ret = api.update_status(status=message)
 
 
if __name__ == '__main__':
    post_tweets()
print("Tweet Successful...!")
