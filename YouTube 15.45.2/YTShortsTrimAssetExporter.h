//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, NSURL, YTEditAVAssetExporter, YTEditAssetImageGenerator;

@interface YTShortsTrimAssetExporter : NSObject
{
    AVAsset *_asset;
    NSURL *_exportDirectory;
    YTEditAVAssetExporter *_compositionExporter;
    YTEditAssetImageGenerator *_imageGenerator;
}

- (void).cxx_destruct;
- (struct CGAffineTransform)videoTransformForVideoGravity:(id)arg1 outputSize:(struct CGSize)arg2;
- (id)generatePreviewImageAtTime:(CDStruct_1b6d18a9)arg1 videoComposition:(id)arg2;
- (id)exportAssetWithOutputURL:(id)arg1 videoComposition:(id)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (id)exportWithOutputOptions:(id)arg1;
- (id)initWithAsset:(id)arg1 exportDirectory:(id)arg2;
- (id)initWithAsset:(id)arg1;

@end
