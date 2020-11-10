//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SPTVoiceLibraryLogger <NSObject>
- (void)logVoiceAudioInputWithUtteranceId:(NSString *)arg1 audioPort:(NSString *)arg2 audioPortOrientation:(NSString *)arg3;
- (void)logVoiceStatusWithUtteranceId:(NSString *)arg1 micPermissionGranted:(_Bool)arg2 isOffline:(_Bool)arg3 connectivityType:(NSString *)arg4;
- (void)logVoiceResultWithUtteranceId:(NSString *)arg1;
- (void)logVoiceErrorWithUtteranceId:(NSString *)arg1 errorDomain:(NSString *)arg2 errorType:(NSString *)arg3 errorDescription:(NSString *)arg4;
@end

