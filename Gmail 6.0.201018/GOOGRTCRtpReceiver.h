//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOGRTCRtpReceiver-Protocol.h"

@class GOOGRTCMediaStreamTrack, GOOGRTCPeerConnectionFactory, GOOGRTCRtpParameters, NSString;
@protocol GOOGRTCRtpReceiverDelegate;

@interface GOOGRTCRtpReceiver : NSObject <GOOGRTCRtpReceiver>
{
    GOOGRTCPeerConnectionFactory *_factory;
    scoped_refptr_92bf499b _nativeRtpReceiver;
    struct unique_ptr<webrtc::RtpReceiverDelegateAdapter, std::__1::default_delete<webrtc::RtpReceiverDelegateAdapter>> _observer;
    id <GOOGRTCRtpReceiverDelegate> _delegate;
}

+ (id)stringForMediaType:(long long)arg1;
+ (int)nativeMediaTypeForMediaType:(long long)arg1;
+ (long long)mediaTypeForNativeMediaType:(int)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GOOGRTCRtpReceiverDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFactory:(id)arg1 nativeRtpReceiver:(scoped_refptr_92bf499b)arg2;
@property(readonly, nonatomic) scoped_refptr_92bf499b nativeRtpReceiver;
- (void)setFrameDecryptor:(scoped_refptr_976466dd)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) GOOGRTCMediaStreamTrack *track;
@property(readonly, nonatomic) GOOGRTCRtpParameters *parameters;
@property(readonly, nonatomic) NSString *receiverId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
