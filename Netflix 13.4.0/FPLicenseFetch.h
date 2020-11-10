//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol FPLicenseFetchDelegate;

@interface FPLicenseFetch : NSObject
{
    id <FPLicenseFetchDelegate> _fpLicenseFetchDelegate;
    NSString *_playbackId;
    NSString *_xid;
}

+ (void)setError:(id)arg1 forChallengeResponses:(id)arg2;
+ (id)errorForBase64DecodeFailure;
+ (id)errorForMissingChallengeResponse;
+ (id)createChallengeBodyMapForChallenges:(id)arg1;
+ (id)dictionaryFromBase64Json:(id)arg1 error:(id *)arg2;
+ (id)licenseArgumentsForChallenges:(id)arg1 withRefreshLinks:(id)arg2 withXID:(id)arg3;
+ (unsigned long long)payloadVersionForLicenseChallengeVersion:(unsigned long long)arg1;
+ (id)dataForChallenges:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *xid; // @synthesize xid=_xid;
@property(retain, nonatomic) NSString *playbackId; // @synthesize playbackId=_playbackId;
@property(nonatomic) __weak id <FPLicenseFetchDelegate> fpLicenseFetchDelegate; // @synthesize fpLicenseFetchDelegate=_fpLicenseFetchDelegate;
- (id)licenseArgumentsForChallenges:(id)arg1 withRefreshLinks:(id)arg2 withXID:(id)arg3;
- (void)_processResponse:(id)arg1 forLicenseChallenges:(id)arg2 ldl:(_Bool)arg3 withError:(id)arg4;
- (void)downloadLicenseForLicenseChallenges:(id)arg1 ldl:(_Bool)arg2 refreshLinks:(id)arg3;
- (void)downloadLDLForLicenseChallenges:(id)arg1;
- (void)downloadLicenseForLicenseChallenges:(id)arg1 withRefreshLinks:(id)arg2;
- (void)downloadLicenseForLicenseChallenges:(id)arg1;
- (id)initWithPlaybackId:(id)arg1 xid:(id)arg2;

@end
