//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol GFXEffectInfo, GFXFrameProcessorDelegate;

@protocol GFXFrameProcessor <NSObject>
- (void)clearCache;
- (void)sendResetVideoSignal;
- (void)processVideoFrame:(struct __CVBuffer *)arg1 orientation:(int)arg2 timestamp:(CDStruct_1b6d18a9)arg3;
- (void)removeCurrentEffect:(void (^)(_Bool, NSError *))arg1;
- (void)prepareForEffect:(id <GFXEffectInfo>)arg1 maxFramesInFlight:(unsigned int)arg2 completion:(void (^)(id <GFXEffectInfo>, _Bool, NSError *))arg3;
@property(nonatomic) _Bool correctImageOrientation;
@property(nonatomic) _Bool throttleInput;
@property(nonatomic) __weak id <GFXFrameProcessorDelegate> delegate;
@end
