//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableURLRequest.h>

@class NSString, NSURL;
@protocol AMILocalization;

@interface EuMfaNotificationSuppressionRequest : NSMutableURLRequest
{
    id <AMILocalization> _localizationService;
    NSString *_type;
    NSString *_os;
    NSString *_osVersion;
    NSString *_appVersion;
    long long _timeStamp;
    NSString *_subType;
    NSURL *_pageUrl;
}

@property(readonly, nonatomic) NSURL *pageUrl; // @synthesize pageUrl=_pageUrl;
@property(readonly, nonatomic) NSString *subType; // @synthesize subType=_subType;
@property(readonly, nonatomic) long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(readonly, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(readonly, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(readonly, nonatomic) NSString *os; // @synthesize os=_os;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) id <AMILocalization> localizationService; // @synthesize localizationService=_localizationService;
- (void).cxx_destruct;
- (id)makeQueryString;
- (id)makeRequestUrl;
- (id)initWithPageUrl:(id)arg1;

@end
