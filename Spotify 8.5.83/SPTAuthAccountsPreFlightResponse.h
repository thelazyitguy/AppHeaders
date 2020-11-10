//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface SPTAuthAccountsPreFlightResponse : NSObject
{
    long long _status;
    NSURL *_redirectURL;
}

+ (id)getErrorParam:(id)arg1;
+ (id)getQueryParamValue:(id)arg1 forComponents:(id)arg2;
+ (id)doAuthResponse;
+ (id)parseRedirectURL:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
- (id)initStatus:(long long)arg1 withRedirectURL:(id)arg2;

@end

