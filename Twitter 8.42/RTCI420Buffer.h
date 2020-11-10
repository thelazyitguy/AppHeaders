//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebRTC/RTCI420Buffer-Protocol.h>

@class NSString;

@interface RTCI420Buffer : NSObject <RTCI420Buffer>
{
    scoped_refptr_b674d2a6 _i420Buffer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (scoped_refptr_b674d2a6)nativeI420Buffer;
- (id)toI420;
@property(readonly, nonatomic) const char *dataV;
@property(readonly, nonatomic) const char *dataU;
@property(readonly, nonatomic) const char *dataY;
@property(readonly, nonatomic) int chromaHeight;
@property(readonly, nonatomic) int chromaWidth;
@property(readonly, nonatomic) int strideV;
@property(readonly, nonatomic) int strideU;
@property(readonly, nonatomic) int strideY;
@property(readonly, nonatomic) int height;
@property(readonly, nonatomic) int width;
- (id)initWithFrameBuffer:(scoped_refptr_b674d2a6)arg1;
- (id)initWithWidth:(int)arg1 height:(int)arg2 strideY:(int)arg3 strideU:(int)arg4 strideV:(int)arg5;
- (id)initWithWidth:(int)arg1 height:(int)arg2 dataY:(const char *)arg3 dataU:(const char *)arg4 dataV:(const char *)arg5;
- (id)initWithWidth:(int)arg1 height:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

