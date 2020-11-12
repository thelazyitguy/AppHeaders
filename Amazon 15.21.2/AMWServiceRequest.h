//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMWURLQueryItem, NSDictionary, NSMutableArray, NSMutableURLRequest, NSString;

@interface AMWServiceRequest : NSObject
{
    NSString *_sessionId;
    NSString *_marketplaceId;
    NSString *_directedId;
    NSString *_osVersion;
    NSString *_appName;
    NSString *_appVersion;
    NSString *_hostApp;
    NSString *_appId;
    NSDictionary *_clientAttributes;
    AMWURLQueryItem *_stageQueryItem;
}

@property(readonly, nonatomic) AMWURLQueryItem *stageQueryItem; // @synthesize stageQueryItem=_stageQueryItem;
@property(readonly, nonatomic) NSDictionary *clientAttributes; // @synthesize clientAttributes=_clientAttributes;
@property(readonly, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(readonly, nonatomic) NSString *hostApp; // @synthesize hostApp=_hostApp;
@property(readonly, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(readonly, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(readonly, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(readonly, nonatomic) NSString *directedId; // @synthesize directedId=_directedId;
@property(readonly, nonatomic) NSString *marketplaceId; // @synthesize marketplaceId=_marketplaceId;
@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableURLRequest *request;
@property(readonly, nonatomic) NSMutableArray *queryItems;
- (id)initWithClientAttributes:(id)arg1 sessionInfo:(id)arg2 customerInfo:(id)arg3;

@end
