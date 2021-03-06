//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, SMASKAdNetwork;

@interface SMAResponseCacheUnit : NSObject
{
    NSString *_adspaceId;
    NSString *_sessionId;
    double _ttl;
    NSString *_publisherId;
    NSString *_sci;
    unsigned long long _adFormat;
    NSData *_adData;
    double _requestTime;
    CDUnknownBlockType _reportError;
    SMASKAdNetwork *_skAdNetwork;
    double _expiredTime;
}

@property(nonatomic) double expiredTime; // @synthesize expiredTime=_expiredTime;
@property(copy, nonatomic) SMASKAdNetwork *skAdNetwork; // @synthesize skAdNetwork=_skAdNetwork;
@property(copy, nonatomic) CDUnknownBlockType reportError; // @synthesize reportError=_reportError;
@property(nonatomic) double requestTime; // @synthesize requestTime=_requestTime;
@property(retain, nonatomic) NSData *adData; // @synthesize adData=_adData;
@property(nonatomic) unsigned long long adFormat; // @synthesize adFormat=_adFormat;
@property(copy, nonatomic) NSString *sci; // @synthesize sci=_sci;
@property(copy, nonatomic) NSString *publisherId; // @synthesize publisherId=_publisherId;
@property(nonatomic) double ttl; // @synthesize ttl=_ttl;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *adspaceId; // @synthesize adspaceId=_adspaceId;
- (void).cxx_destruct;
- (_Bool)isExpired;
- (id)initWithAdSpace:(id)arg1 sessionId:(id)arg2;

@end

