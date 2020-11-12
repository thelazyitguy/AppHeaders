//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOGRTCRtpSender-Protocol.h"

@class GOOGRTCMediaStreamTrack, GOOGRTCPeerConnectionFactory, GOOGRTCRtpParameters, NSArray, NSString;
@protocol GOOGRTCDtmfSender;

@interface GOOGRTCRtpSender : NSObject <GOOGRTCRtpSender>
{
    GOOGRTCPeerConnectionFactory *_factory;
    scoped_refptr_3635276f _nativeRtpSender;
    id <GOOGRTCDtmfSender> _dtmfSender;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <GOOGRTCDtmfSender> dtmfSender; // @synthesize dtmfSender=_dtmfSender;
- (id)initWithFactory:(id)arg1 nativeRtpSender:(scoped_refptr_3635276f)arg2;
@property(readonly, nonatomic) scoped_refptr_3635276f nativeRtpSender;
- (void)setFrameEncryptor:(scoped_refptr_01237151)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSArray *streamIds;
@property(copy, nonatomic) GOOGRTCMediaStreamTrack *track;
@property(copy, nonatomic) GOOGRTCRtpParameters *parameters;
@property(readonly, nonatomic) NSString *senderId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
