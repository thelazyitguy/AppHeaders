//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVDIAnalyticsScribe/NSCoding-Protocol.h>
#import <TVDIAnalyticsScribe/TBase-Protocol.h>

@class NSString, TVDIAnalyticsScribeLiveEventIdentifier, TVDIAnalyticsScribeMediaIdentifier;

@interface TVDIAnalyticsScribeSessionState : NSObject <TBase, NSCoding>
{
    _Bool _sessionIdIsSet;
    _Bool _contentVideoIdentifierIsSet;
    _Bool _videoAdsPassthroughDataIsSet;
    _Bool _liveEventIdentifierIsSet;
    _Bool _tweetIdIsSet;
    NSString *_sessionId;
    TVDIAnalyticsScribeMediaIdentifier *_contentVideoIdentifier;
    NSString *_videoAdsPassthroughData;
    TVDIAnalyticsScribeLiveEventIdentifier *_liveEventIdentifier;
    long long _tweetId;
}

+ (id)instanceWithSessionId:(id)arg1 contentVideoIdentifier:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool tweetIdIsSet; // @synthesize tweetIdIsSet=_tweetIdIsSet;
@property(nonatomic) long long tweetId; // @synthesize tweetId=_tweetId;
@property(readonly, nonatomic) _Bool liveEventIdentifierIsSet; // @synthesize liveEventIdentifierIsSet=_liveEventIdentifierIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeLiveEventIdentifier *liveEventIdentifier; // @synthesize liveEventIdentifier=_liveEventIdentifier;
@property(readonly, nonatomic) _Bool videoAdsPassthroughDataIsSet; // @synthesize videoAdsPassthroughDataIsSet=_videoAdsPassthroughDataIsSet;
@property(copy, nonatomic) NSString *videoAdsPassthroughData; // @synthesize videoAdsPassthroughData=_videoAdsPassthroughData;
@property(readonly, nonatomic) _Bool contentVideoIdentifierIsSet; // @synthesize contentVideoIdentifierIsSet=_contentVideoIdentifierIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeMediaIdentifier *contentVideoIdentifier; // @synthesize contentVideoIdentifier=_contentVideoIdentifier;
@property(readonly, nonatomic) _Bool sessionIdIsSet; // @synthesize sessionIdIsSet=_sessionIdIsSet;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (id)validateNonOptionalFields;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionId:(id)arg1 contentVideoIdentifier:(id)arg2;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
