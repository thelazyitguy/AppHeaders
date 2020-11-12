//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/NSObject-Protocol.h>

@class NSArray, NSError, NSString;
@protocol ASMOptions;

@protocol ASMEventLogger <NSObject>
- (void)logUploadingProfilePhotoSucceededFromScreen:(int)arg1 withOptions:(id <ASMOptions>)arg2 rpcIdentifier:(NSString *)arg3 enableSingleAppSignOut:(_Bool)arg4;
- (void)logUploadingProfilePhotoFailedFromScreen:(int)arg1 withOptions:(id <ASMOptions>)arg2 rpcIdentifier:(NSString *)arg3 error:(NSError *)arg4 enableSingleAppSignOut:(_Bool)arg5;
- (void)logRpcSucceededForScreen:(int)arg1 rpcName:(NSString *)arg2 APIVersion:(NSString *)arg3 hostname:(NSString *)arg4 latencyMS:(int)arg5 withOptions:(id <ASMOptions>)arg6;
- (void)logRpcFailedForScreen:(int)arg1 rpcName:(NSString *)arg2 APIVersion:(NSString *)arg3 error:(NSError *)arg4 hostname:(NSString *)arg5 latencyMS:(int)arg6 withOptions:(id <ASMOptions>)arg7;
- (void)logHeartbeatForScreen:(int)arg1 currentHeartbeatTime:(int)arg2 nextHeartbeatTime:(int)arg3 allHeartbeatTimes:(NSArray *)arg4 options:(id <ASMOptions>)arg5;
- (void)logTapEventOnScreen:(int)arg1 withTarget:(int)arg2 navigationOrigin:(unsigned long long)arg3 options:(id <ASMOptions>)arg4 enableSingleAppSignOut:(_Bool)arg5;
- (void)logReturnFromOutboundNavigationToScreen:(int)arg1 withOptions:(id <ASMOptions>)arg2 enableSingleAppSignOut:(_Bool)arg3;
- (void)logOutboundNavigationFromScreen:(int)arg1 toDestination:(int)arg2 withOptions:(id <ASMOptions>)arg3 enableSingleAppSignOut:(_Bool)arg4;
- (void)logViewEvent:(int)arg1 previousScreen:(int)arg2 withOptions:(id <ASMOptions>)arg3;
- (void)logNavigationFromScreen:(int)arg1 toScreen:(int)arg2 withNavigationOrigin:(unsigned long long)arg3 options:(id <ASMOptions>)arg4 enableSingleAppSignOut:(_Bool)arg5;
- (void)logLaunchedWithTarget:(int)arg1 fromClient:(NSString *)arg2 withOptions:(id <ASMOptions>)arg3 enableSingleAppSignOut:(_Bool)arg4 utmCampaign:(NSString *)arg5 utmMedium:(NSString *)arg6 utmSource:(NSString *)arg7;
@end
