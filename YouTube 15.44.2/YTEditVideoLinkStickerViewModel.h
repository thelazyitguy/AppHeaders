//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTEditStickerViewModel.h>

#import <Module_Framework/NSCoding-Protocol.h>

@class GIMMe, NSString, YTIReelVodLinkRenderer, YTIThumbnailDetails, YTIVideoSelectedAction;

@interface YTEditVideoLinkStickerViewModel : YTEditStickerViewModel <NSCoding>
{
    YTIVideoSelectedAction *_videoSelectedAction;
    YTIReelVodLinkRenderer *_vodLinkRenderer;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, copy, nonatomic) NSString *externalVideoID;
- (long long)stickerType;
@property(readonly, nonatomic) _Bool shouldApplyClientStickerLimits;
@property(readonly, copy, nonatomic) NSString *durationText;
@property(readonly, copy, nonatomic) NSString *channelTitle;
@property(readonly, copy, nonatomic) NSString *videoTitle;
@property(readonly, nonatomic) YTIThumbnailDetails *thumbnailDetails;
- (id)initWithVideoSelectedAction:(id)arg1;

@end

