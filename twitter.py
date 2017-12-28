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
    consumer_key	   =   ''
    consumer_secret	   =   ''
    access_token	   =   ''
    access_token_secret   =   ''
    message = "LOL..! OK!"
    try:
        api = login_to_twitter(consumer_key, consumer_secret, access_token, access_token_secret )
        ret = api.update_status(status=message)
    except:
        print('Login error')
if __name__ == '__main__':
    try:
        post_tweets()
        print("Tweet Successful...!")
    except:
        print('Tweet error')
