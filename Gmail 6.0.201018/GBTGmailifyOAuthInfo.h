//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURLRequest;

@interface GBTGmailifyOAuthInfo : NSObject
{
    NSURLRequest *_request;
    NSString *_urlWhitelistRegex;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *urlWhitelistRegex; // @synthesize urlWhitelistRegex=_urlWhitelistRegex;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (id)initWithRequest:(id)arg1 urlWhitelistRegex:(id)arg2;

@end
