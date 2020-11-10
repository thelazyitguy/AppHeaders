//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SecureStopEntry : NSObject
{
    NSString *_xid;
    NSString *_playbackId;
    NSString *_mediaSessionId;
    NSString *_releaseLicenseLink;
    NSString *_secureStopStatus;
    NSString *_secureStopStatusTimeStamps;
    NSString *_playbackInitiated;
    double _licenseAcquisitionTimestamp;
}

+ (id)secureStopStatusTimestampString:(id)arg1;
+ (id)mediaSessionId2PlaybackSessionId:(id)arg1;
+ (id)playbackSessionId2MediaSessionId:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) double licenseAcquisitionTimestamp; // @synthesize licenseAcquisitionTimestamp=_licenseAcquisitionTimestamp;
@property(readonly, copy, nonatomic) NSString *playbackInitiated; // @synthesize playbackInitiated=_playbackInitiated;
@property(readonly, copy, nonatomic) NSString *secureStopStatusTimeStamps; // @synthesize secureStopStatusTimeStamps=_secureStopStatusTimeStamps;
@property(readonly, copy, nonatomic) NSString *secureStopStatus; // @synthesize secureStopStatus=_secureStopStatus;
@property(readonly, copy, nonatomic) NSString *releaseLicenseLink; // @synthesize releaseLicenseLink=_releaseLicenseLink;
@property(readonly, copy, nonatomic) NSString *mediaSessionId; // @synthesize mediaSessionId=_mediaSessionId;
@property(readonly, copy, nonatomic) NSString *playbackId; // @synthesize playbackId=_playbackId;
@property(readonly, copy, nonatomic) NSString *xid; // @synthesize xid=_xid;
- (id)description;
- (id)asJSONString;
- (void)extractAndSetLicenseAcquisitionTimestamp;
- (_Bool)hasAcquiredSdl;
- (void)setPlaybackInitiated:(id)arg1;
- (void)setReleaseLicenseLink:(id)arg1;
- (void)setSecureStopStatusAndTimeStamps:(id)arg1;
- (id)initWithXid:(id)arg1 playbackId:(id)arg2 mediaSessionId:(id)arg3 releaseLicenseLink:(id)arg4 secureStopStatus:(id)arg5 playbackInitiated:(id)arg6;
- (id)initWithJSONString:(id)arg1;
- (id)initWithXid:(id)arg1 playbackId:(id)arg2 mediaSessionId:(id)arg3 releaseLicenseLink:(id)arg4 secureStopStatus:(id)arg5 playbackInitiated:(id)arg6 secureStopStatusTimeStamps:(id)arg7;

@end
