//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CDVPlugin.h"

@class CDVReachability, NSString;

@interface CDVConnection : CDVPlugin
{
    NSString *type;
    NSString *_callbackId;
    CDVReachability *internetReach;
    NSString *connectionType;
}

@property(retain) CDVReachability *internetReach; // @synthesize internetReach;
@property(copy) NSString *connectionType; // @synthesize connectionType;
- (void).cxx_destruct;
- (id)init;
- (void)onResume;
- (void)onPause;
- (void)updateConnectionType:(id)arg1;
- (void)updateReachability:(id)arg1;
- (_Bool)isCellularConnection:(id)arg1;
- (id)w3cConnectionTypeFor:(id)arg1;
- (void)sendPluginResult;
- (void)getConnectionInfo:(id)arg1;

@end
