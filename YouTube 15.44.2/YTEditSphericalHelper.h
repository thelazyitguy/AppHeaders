//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTEditSphericalHelper : NSObject
{
}

+ (_Bool)isSphericalV2MoovBox:(id)arg1;
+ (_Bool)isSphericalV1MoovBox:(id)arg1;
+ (_Bool)isSphericalWithFileHandle:(id)arg1 moovRange:(struct _NSRange)arg2 fileLength:(unsigned long long)arg3;
+ (struct _NSRange)moovAtomRangeInFileHandle:(id)arg1 fileLength:(unsigned long long)arg2;
+ (_Bool)isSphericalWithFilePath:(id)arg1;
+ (void)searchForSphericalDataWithAssetResource:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)checkSphericalAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)isSphericalWithRepresentation:(id)arg1 moovRange:(struct _NSRange)arg2;
+ (struct _NSRange)moovAtomRangeInRepresentation:(id)arg1;
+ (void)searchForSphericalDataInRepresentation:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)checkSphericalAssetURL:(id)arg1 assetLibrary:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)checkSphericalAssetURL:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

