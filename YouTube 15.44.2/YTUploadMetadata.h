//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTUploadMetadataProtocol-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface YTUploadMetadata : NSObject <YTUploadMetadataProtocol>
{
    NSString *_videoTitle;
    NSString *_videoDescription;
    NSArray *_videoTags;
    NSNumber *_privacy;
    NSString *_placeId;
    NSString *_placeDescription;
}

+ (id)defaultTitle;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *placeDescription; // @synthesize placeDescription=_placeDescription;
@property(readonly, nonatomic) NSString *placeId; // @synthesize placeId=_placeId;
@property(readonly, nonatomic) NSNumber *privacy; // @synthesize privacy=_privacy;
@property(readonly, nonatomic) NSArray *videoTags; // @synthesize videoTags=_videoTags;
@property(readonly, nonatomic) NSString *videoDescription; // @synthesize videoDescription=_videoDescription;
@property(readonly, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTitle:(id)arg1 description:(id)arg2 videoTags:(id)arg3 privacy:(id)arg4 placeId:(id)arg5 placeDescription:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

