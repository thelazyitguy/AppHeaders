//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataMailconnectionOAuthLoginCommandProcessor, ComGoogleAppsBigtopDataMailconnectionParsedResponseExceptionHandler;
@protocol JBTDAuthfailedAuthenticationFailedHandler, JavaUtilConcurrentExecutor;

@interface ComGoogleAppsBigtopDataSmtpCommandsSmtpAuthCommandProcessor : NSObject
{
    ComGoogleAppsBigtopDataMailconnectionParsedResponseExceptionHandler *parsedResponseExceptionHandler_;
    ComGoogleAppsBigtopDataMailconnectionOAuthLoginCommandProcessor *oAuthLoginCommandProcessor_;
    id <JavaUtilConcurrentExecutor> smtpExecutor_;
    id <JBTDAuthfailedAuthenticationFailedHandler> authenticationFailedHandler_;
}

+ (void)initialize;
- (void)dealloc;
- (id)authWithLoginWithComGoogleAppsBigtopDataMailconnectionMailConnection:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3;
- (id)authWithPlainWithComGoogleAppsBigtopDataMailconnectionMailConnection:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3;
- (id)authWithOAuthWithComGoogleAppsBigtopDataMailconnectionMailConnection:(id)arg1 withNSString:(id)arg2 withComGoogleAppsXplatHttpOAuthTokenProducer:(id)arg3;

@end
