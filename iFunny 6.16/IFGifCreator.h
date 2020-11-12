//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IFGifCreator : NSObject
{
    NSObject<OS_dispatch_queue> *queue;
}

- (void).cxx_destruct;
- (struct GifFileType *)newGifHeaderWithFile:(id)arg1 andSize:(struct CGSize)arg2;
- (void)addNewFrameWithImage:(id)arg1 andDelay:(double)arg2 forGifHandle:(struct GifFileType *)arg3 colorMapSize:(int)arg4;
- (void)createGifCaptionWithData:(id)arg1 params:(id)arg2 gifCaptionImage:(id)arg3 cropRect:(struct CGRect)arg4 speedScale:(float)arg5 withCompletionBlock:(CDUnknownBlockType)arg6;
- (void)asyncCreateGifCaptionWithData:(id)arg1 params:(id)arg2 gifCaptionImage:(id)arg3 cropRect:(struct CGRect)arg4 speedScale:(float)arg5 withCompletionBlock:(CDUnknownBlockType)arg6;
- (void)asyncCreateGifCaptionWithDataWithUpload:(id)arg1 params:(id)arg2 gifCaptionImage:(id)arg3 cropRect:(struct CGRect)arg4 speedScale:(float)arg5 completion:(CDUnknownBlockType)arg6;
- (id)init;

@end
