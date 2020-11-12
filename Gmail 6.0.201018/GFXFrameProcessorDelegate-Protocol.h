//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol GFXFrameProcessor;

@protocol GFXFrameProcessorDelegate <NSObject>
- (void)frameProcessor:(id <GFXFrameProcessor>)arg1 didEncounterError:(NSError *)arg2;
- (void)frameProcessor:(id <GFXFrameProcessor>)arg1 didOutputFrame:(struct __CVBuffer *)arg2 withTimestamp:(CDStruct_1b6d18a9)arg3;

@optional
- (void)frameProcessor:(id <GFXFrameProcessor>)arg1 trackOutputLatency:(double)arg2;
- (void)frameProcessor:(id <GFXFrameProcessor>)arg1 trackFrameInterval:(double)arg2;
@end
