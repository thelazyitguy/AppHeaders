//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>
#import <T1Twitter/NSMutableCopying-Protocol.h>

@class TIPImagePipeline;
@protocol NSCoding><NSCopying;

@interface TFNTwitterMediaAssetRenderingOptions : NSObject <NSCopying, NSMutableCopying>
{
    TIPImagePipeline *_imagePipeline;
    NSObject<NSCoding><NSCopying> *_editParameters;
    long long _maxDimension;
    _Bool _allowsLosslessCompression;
    CDUnknownBlockType _progressHandler;
    long long _bestAllowedAssetExportSessionMode;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(readonly, nonatomic) long long bestAllowedAssetExportSessionMode; // @synthesize bestAllowedAssetExportSessionMode=_bestAllowedAssetExportSessionMode;
@property(readonly, nonatomic) _Bool allowsLosslessCompression; // @synthesize allowsLosslessCompression=_allowsLosslessCompression;
@property(readonly, nonatomic) long long maxDimension; // @synthesize maxDimension=_maxDimension;
@property(readonly, copy, nonatomic) NSObject<NSCoding><NSCopying> *editParameters; // @synthesize editParameters=_editParameters;
@property(readonly, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithOptions:(id)arg1;
- (id)initWithImagePipeline:(id)arg1;
- (id)init;
- (id)initWithImagePipeline:(id)arg1 editParameters:(id)arg2 maxDimension:(long long)arg3 allowsLosslessCompression:(_Bool)arg4 bestAllowedAssetExportSessionMode:(long long)arg5 progressHandler:(CDUnknownBlockType)arg6;
- (id)initWithImagePipeline:(id)arg1 account:(id)arg2;

@end
