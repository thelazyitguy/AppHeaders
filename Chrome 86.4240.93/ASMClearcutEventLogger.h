//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/ASMEventLogger-Protocol.h>

@class NSString;
@protocol CCTClearcutLogger;

@interface ASMClearcutEventLogger : NSObject <ASMEventLogger>
{
    id <CCTClearcutLogger> _clearcutLogger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <CCTClearcutLogger> clearcutLogger; // @synthesize clearcutLogger=_clearcutLogger;
- (id)utmParamsForCampaign:(id)arg1 medium:(id)arg2 source:(id)arg3;
- (int)logTypeForNavigationOrigin:(unsigned long long)arg1;
- (id)createClientVersion;
- (id)createClientCapabilitiesForOptions:(id)arg1 enableSingleAppSignOut:(_Bool)arg2;
- (id)createClientInfoForOptions:(id)arg1 enableSingleAppSignOut:(_Bool)arg2;
- (void)logMessage:(id)arg1 withOptions:(id)arg2;
- (id)createAccountSettings;
- (id)createUserInteractionWithMyGoogleEvent:(id)arg1 options:(id)arg2 enableSingleAppSignOut:(_Bool)arg3;
- (id)createMobileRPCForRPCName:(id)arg1 APIVersion:(id)arg2 errorCode:(id)arg3 hostName:(id)arg4 latencyMS:(int)arg5;
- (id)formatErrorCode:(id)arg1;
- (void)logUploadingProfilePhotoSucceededFromScreen:(int)arg1 withOptions:(id)arg2 rpcIdentifier:(id)arg3 enableSingleAppSignOut:(_Bool)arg4;
- (void)logUploadingProfilePhotoFailedFromScreen:(int)arg1 withOptions:(id)arg2 rpcIdentifier:(id)arg3 error:(id)arg4 enableSingleAppSignOut:(_Bool)arg5;
- (void)logRpcSucceededForScreen:(int)arg1 rpcName:(id)arg2 APIVersion:(id)arg3 hostname:(id)arg4 latencyMS:(int)arg5 withOptions:(id)arg6;
- (void)logRpcFailedForScreen:(int)arg1 rpcName:(id)arg2 APIVersion:(id)arg3 error:(id)arg4 hostname:(id)arg5 latencyMS:(int)arg6 withOptions:(id)arg7 clientInfo:(id)arg8;
- (void)logRpcFailedForScreen:(int)arg1 rpcName:(id)arg2 APIVersion:(id)arg3 error:(id)arg4 hostname:(id)arg5 latencyMS:(int)arg6 withOptions:(id)arg7;
- (void)logHeartbeatForScreen:(int)arg1 currentHeartbeatTime:(int)arg2 nextHeartbeatTime:(int)arg3 allHeartbeatTimes:(id)arg4 options:(id)arg5;
- (void)logTapEventOnScreen:(int)arg1 withTarget:(int)arg2 navigationOrigin:(unsigned long long)arg3 options:(id)arg4 enableSingleAppSignOut:(_Bool)arg5;
- (void)logReturnFromOutboundNavigationToScreen:(int)arg1 withOptions:(id)arg2 enableSingleAppSignOut:(_Bool)arg3;
- (void)logOutboundNavigationFromScreen:(int)arg1 toDestination:(int)arg2 withOptions:(id)arg3 enableSingleAppSignOut:(_Bool)arg4;
- (void)logViewEvent:(int)arg1 previousScreen:(int)arg2 withOptions:(id)arg3;
- (void)logNavigationFromScreen:(int)arg1 toScreen:(int)arg2 withNavigationOrigin:(unsigned long long)arg3 options:(id)arg4 enableSingleAppSignOut:(_Bool)arg5;
- (void)logLaunchedWithTarget:(int)arg1 fromClient:(id)arg2 withOptions:(id)arg3 enableSingleAppSignOut:(_Bool)arg4 utmCampaign:(id)arg5 utmMedium:(id)arg6 utmSource:(id)arg7;
- (id)initWithClearcutLoggerProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
