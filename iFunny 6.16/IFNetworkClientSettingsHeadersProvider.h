//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFNetworkClientSettingsHeadersProviding-Protocol.h>

@class NSString;

@interface IFNetworkClientSettingsHeadersProvider : NSObject <IFNetworkClientSettingsHeadersProviding>
{
    NSString *_authorizationHeader;
    NSString *_projectId;
    NSString *_campaignKey;
    unsigned long long _applicationState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long applicationState; // @synthesize applicationState=_applicationState;
@property(copy, nonatomic) NSString *campaignKey; // @synthesize campaignKey=_campaignKey;
@property(copy, nonatomic) NSString *projectId; // @synthesize projectId=_projectId;
@property(readonly, copy, nonatomic) NSString *authorizationHeader; // @synthesize authorizationHeader=_authorizationHeader;
- (unsigned long long)networkClientApplicationStateFromApplicationState:(long long)arg1;
- (id)additionalHeaders;
- (id)initWithAuthorizationHeader:(id)arg1 projectId:(id)arg2 campaignKey:(id)arg3 applicationState:(long long)arg4;

@end
