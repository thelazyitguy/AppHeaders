//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC5Slack14AppPermissions : NSObject
{
    // Error parsing type: , name: dependencies
    // Error parsing type: , name: usersDataProvider
    // Error parsing type: , name: conversationsDataProvider
}

- (void).cxx_destruct;
- (id)init;
- (id)confirmRemovingAppId:(id)arg1 fromChannelId:(id)arg2;
- (void)processMSEvent:(id)arg1 payload:(id)arg2;
- (void)presentAppPermissionRequestWithAppId:(id)arg1 channelId:(id)arg2;
- (id)initWithDependencies:(id)arg1;

@end
