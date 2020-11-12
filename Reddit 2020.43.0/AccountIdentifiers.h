//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditCore/NSURLRequestProcessor-Protocol.h>

@class NSString, NSUUID;

@interface AccountIdentifiers : NSObject <NSURLRequestProcessor>
{
    _Bool _isAnonymousBrowsing;
    NSUUID *_anonymousDeviceId;
}

+ (id)anonymousIdentifiersWithDeviceId:(id)arg1;
+ (id)standardIdentifiers;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *anonymousDeviceId; // @synthesize anonymousDeviceId=_anonymousDeviceId;
@property(readonly, nonatomic) _Bool isAnonymousBrowsing; // @synthesize isAnonymousBrowsing=_isAnonymousBrowsing;
- (void)processRequest:(id)arg1;
@property(readonly, nonatomic) NSString *idfa;
@property(readonly, nonatomic) NSString *deviceId;
- (id)initWithIsAnonymousBrowsing:(_Bool)arg1 anonymousDeviceId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
