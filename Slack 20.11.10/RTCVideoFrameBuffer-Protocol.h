//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AmazonChimeSDKMedia/NSObject-Protocol.h>

@protocol RTCI420Buffer;

@protocol RTCVideoFrameBuffer <NSObject>
@property(readonly, nonatomic) int height;
@property(readonly, nonatomic) int width;
- (id <RTCI420Buffer>)toI420;
@end
