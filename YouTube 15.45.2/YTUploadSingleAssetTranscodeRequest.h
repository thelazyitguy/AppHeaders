//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTUploadTranscodeRequest-Protocol.h>

@class NSString, NSURL, YTUploadEditInstructions;

@interface YTUploadSingleAssetTranscodeRequest : NSObject <YTUploadTranscodeRequest>
{
    NSURL *_assetURL;
    YTUploadEditInstructions *_editInstructions;
    long long _uploadQuality;
    long long _bitrateOptimization;
}

- (void).cxx_destruct;
@property(nonatomic) long long bitrateOptimization; // @synthesize bitrateOptimization=_bitrateOptimization;
@property(nonatomic) long long uploadQuality; // @synthesize uploadQuality=_uploadQuality;
- (void)executeWithTranscoder:(id)arg1 config:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithAssetURL:(id)arg1 editInstructions:(id)arg2 uploadQuality:(long long)arg3 bitrateOptimization:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
