//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/SMADisplayAdRequest.h>

@class NSString;

@interface SMANativeRequest : SMADisplayAdRequest
{
    _Bool _returnUrlsForImageAssets;
    _Bool _allowMultipleImages;
    NSString *_requiredTitleAsset;
    NSString *_requiredImagesAsset;
    NSString *_requiredDataAsset;
}

@property(retain, nonatomic) NSString *requiredDataAsset; // @synthesize requiredDataAsset=_requiredDataAsset;
@property(retain, nonatomic) NSString *requiredImagesAsset; // @synthesize requiredImagesAsset=_requiredImagesAsset;
@property(retain, nonatomic) NSString *requiredTitleAsset; // @synthesize requiredTitleAsset=_requiredTitleAsset;
@property(nonatomic) _Bool allowMultipleImages; // @synthesize allowMultipleImages=_allowMultipleImages;
@property(nonatomic) _Bool returnUrlsForImageAssets; // @synthesize returnUrlsForImageAssets=_returnUrlsForImageAssets;
- (void).cxx_destruct;
- (id)adRequest;
- (id)initWithPublisherId:(id)arg1 adSpaceId:(id)arg2 fetchResponseWithSessionId:(id)arg3;

@end

