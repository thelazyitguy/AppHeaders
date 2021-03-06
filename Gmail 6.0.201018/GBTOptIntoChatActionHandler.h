//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTOptIntoChatActionHandler-Protocol.h"

@class NSString;
@protocol GBTHubOptInUIService, GBTSyncClientService, HUBAppAvailabilityService;

@interface GBTOptIntoChatActionHandler : NSObject <JBTOptIntoChatActionHandler>
{
    id <HUBAppAvailabilityService> _appAvailabilityService;
    id <GBTHubOptInUIService> _optInUIService;
    id <GBTSyncClientService> _syncClientService;
    NSString *_email;
}

- (void).cxx_destruct;
- (id)optIntoChat;
- (id)initWithAppAvailabilityService:(id)arg1 optInUIService:(id)arg2 syncClientService:(id)arg3 email:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

