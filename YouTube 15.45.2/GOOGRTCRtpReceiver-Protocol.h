//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class GOOGRTCMediaStreamTrack, GOOGRTCRtpParameters, NSString;
@protocol GOOGRTCRtpReceiverDelegate;

@protocol GOOGRTCRtpReceiver <NSObject>
@property(nonatomic) __weak id <GOOGRTCRtpReceiverDelegate> delegate;
@property(readonly, nonatomic) GOOGRTCMediaStreamTrack *track;
@property(readonly, nonatomic) GOOGRTCRtpParameters *parameters;
@property(readonly, nonatomic) NSString *receiverId;
@end
