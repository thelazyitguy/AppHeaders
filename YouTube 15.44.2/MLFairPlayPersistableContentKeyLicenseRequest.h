//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/MLFairPlayLicenseRequest.h>

@class AVPersistableContentKeyRequest;

@interface MLFairPlayPersistableContentKeyLicenseRequest : MLFairPlayLicenseRequest
{
}

- (void)createLicenseRequestDataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCancelled;
@property(readonly, nonatomic) AVPersistableContentKeyRequest *persistableContentKeyRequest;
- (id)initWithRequest:(id)arg1 fairPlayConfig:(id)arg2 requestType:(int)arg3 requiresKeyData:(_Bool)arg4 videoID:(id)arg5 DRMParams:(id)arg6 DRMSessionID:(id)arg7 CPN:(id)arg8;

@end
