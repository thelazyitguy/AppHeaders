//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FNFHashFramesBuffer : NSObject
{
    struct FNFFramesFlatMap<FNFFrameBufferDataInternal> _hashBufferDataInternal;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct FNFFrameBufferDataInternal)findNextFrameNearPlaybackTime:(CDStruct_1b6d18a9)arg1 displayBestFrameAvailable:(_Bool)arg2;
- (struct FNFFrameBufferDataInternal)findFirstFrame;
- (int)currentBufferSize;
- (void)clearFrameBufferUntilFrameIndex:(long long)arg1;
- (int)clearFrameBufferUntilAndIncludingTime:(CDStruct_1b6d18a9)arg1;
- (int)clearFrameBuffer;
- (_Bool)appendFrameData:(struct FNFFrameBufferDataInternal)arg1;
- (void)dealloc;

@end

