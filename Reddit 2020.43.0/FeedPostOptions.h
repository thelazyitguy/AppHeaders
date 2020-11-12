//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class FeedPostEventBarOptions, FeedPostTextOptions, FeedPostTitleOptions, FeedPostWebLinkOptions, PostDetailOptions, VisibilityOptions, _TtC6Reddit20FeedPostVideoOptions;
@protocol VideoContext;

@interface FeedPostOptions : NSObject <NSCopying>
{
    _Bool _isInModMode;
    _Bool _shouldCropPreview;
    _Bool _shouldShowPreviewImageInsteadVideo;
    _Bool _shouldAlwaysShowNsfwContent;
    _Bool _shouldAlwaysShowSpoilerContent;
    _Bool _shouldAlwaysShowMedia;
    _Bool _shouldShowPostCarousel;
    _Bool _shouldUseSafeBrowsingMode;
    _Bool _hasManuallyUnblurred;
    _Bool _shouldShowCommandBar;
    _Bool _shouldShowSeparator;
    _Bool _shouldApplyStyling;
    _Bool _isFeedSingleSubreddit;
    _Bool _shouldOverrideSubredditThumbnailSetting;
    _Bool _shouldShowVoteAnimation;
    _Bool _mayShowBigSubscribeButton;
    _Bool _shouldShowAwardsPlaque;
    _Bool _shouldShowAwardLeaderboard;
    _Bool _isGroupAwardingEnabled;
    _Bool _shouldShowPredictionsLeaderboardEntry;
    _Bool _shouldShowPredictionsIntroBanner;
    _Bool _shouldShowHighResSelfPostImage;
    _Bool _shouldShowReplyBar;
    _Bool _shouldShowCommentCountInMetadataRow;
    _Bool _shouldSwitchUsernameAndSubreddit;
    FeedPostTitleOptions *_titleOptions;
    FeedPostEventBarOptions *_eventBarOptions;
    FeedPostTextOptions *_textOptions;
    FeedPostWebLinkOptions *_webLinkOptions;
    _TtC6Reddit20FeedPostVideoOptions *_videoOptions;
    PostDetailOptions *_detailOptions;
    VisibilityOptions *_visibilityOptions;
    unsigned long long _feedDisplayMode;
    id <VideoContext> _videoContext;
    struct CGSize _maxMediaSize;
}

+ (id)defaultChatPostOptionsWithViewContext:(id)arg1;
+ (id)defaultFeedPostOptionsWithViewContext:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <VideoContext> videoContext; // @synthesize videoContext=_videoContext;
@property(nonatomic) _Bool shouldSwitchUsernameAndSubreddit; // @synthesize shouldSwitchUsernameAndSubreddit=_shouldSwitchUsernameAndSubreddit;
@property(nonatomic) _Bool shouldShowCommentCountInMetadataRow; // @synthesize shouldShowCommentCountInMetadataRow=_shouldShowCommentCountInMetadataRow;
@property(nonatomic) _Bool shouldShowReplyBar; // @synthesize shouldShowReplyBar=_shouldShowReplyBar;
@property(nonatomic) _Bool shouldShowHighResSelfPostImage; // @synthesize shouldShowHighResSelfPostImage=_shouldShowHighResSelfPostImage;
@property(nonatomic) _Bool shouldShowPredictionsIntroBanner; // @synthesize shouldShowPredictionsIntroBanner=_shouldShowPredictionsIntroBanner;
@property(nonatomic) _Bool shouldShowPredictionsLeaderboardEntry; // @synthesize shouldShowPredictionsLeaderboardEntry=_shouldShowPredictionsLeaderboardEntry;
@property(nonatomic) _Bool isGroupAwardingEnabled; // @synthesize isGroupAwardingEnabled=_isGroupAwardingEnabled;
@property(nonatomic) _Bool shouldShowAwardLeaderboard; // @synthesize shouldShowAwardLeaderboard=_shouldShowAwardLeaderboard;
@property(nonatomic) _Bool shouldShowAwardsPlaque; // @synthesize shouldShowAwardsPlaque=_shouldShowAwardsPlaque;
@property(nonatomic) _Bool mayShowBigSubscribeButton; // @synthesize mayShowBigSubscribeButton=_mayShowBigSubscribeButton;
@property(nonatomic) _Bool shouldShowVoteAnimation; // @synthesize shouldShowVoteAnimation=_shouldShowVoteAnimation;
@property(nonatomic) _Bool shouldOverrideSubredditThumbnailSetting; // @synthesize shouldOverrideSubredditThumbnailSetting=_shouldOverrideSubredditThumbnailSetting;
@property(nonatomic) _Bool isFeedSingleSubreddit; // @synthesize isFeedSingleSubreddit=_isFeedSingleSubreddit;
@property(nonatomic) _Bool shouldApplyStyling; // @synthesize shouldApplyStyling=_shouldApplyStyling;
@property(nonatomic) _Bool shouldShowSeparator; // @synthesize shouldShowSeparator=_shouldShowSeparator;
@property(nonatomic) _Bool shouldShowCommandBar; // @synthesize shouldShowCommandBar=_shouldShowCommandBar;
@property(nonatomic) _Bool hasManuallyUnblurred; // @synthesize hasManuallyUnblurred=_hasManuallyUnblurred;
@property(nonatomic) _Bool shouldUseSafeBrowsingMode; // @synthesize shouldUseSafeBrowsingMode=_shouldUseSafeBrowsingMode;
@property(nonatomic) _Bool shouldShowPostCarousel; // @synthesize shouldShowPostCarousel=_shouldShowPostCarousel;
@property(nonatomic) unsigned long long feedDisplayMode; // @synthesize feedDisplayMode=_feedDisplayMode;
@property(nonatomic) _Bool shouldAlwaysShowMedia; // @synthesize shouldAlwaysShowMedia=_shouldAlwaysShowMedia;
@property(nonatomic) _Bool shouldAlwaysShowSpoilerContent; // @synthesize shouldAlwaysShowSpoilerContent=_shouldAlwaysShowSpoilerContent;
@property(nonatomic) _Bool shouldAlwaysShowNsfwContent; // @synthesize shouldAlwaysShowNsfwContent=_shouldAlwaysShowNsfwContent;
@property(nonatomic) _Bool shouldShowPreviewImageInsteadVideo; // @synthesize shouldShowPreviewImageInsteadVideo=_shouldShowPreviewImageInsteadVideo;
@property(nonatomic) _Bool shouldCropPreview; // @synthesize shouldCropPreview=_shouldCropPreview;
@property(nonatomic) _Bool isInModMode; // @synthesize isInModMode=_isInModMode;
@property(nonatomic) struct CGSize maxMediaSize; // @synthesize maxMediaSize=_maxMediaSize;
@property(retain, nonatomic) VisibilityOptions *visibilityOptions; // @synthesize visibilityOptions=_visibilityOptions;
@property(nonatomic) __weak PostDetailOptions *detailOptions; // @synthesize detailOptions=_detailOptions;
@property(retain, nonatomic) _TtC6Reddit20FeedPostVideoOptions *videoOptions; // @synthesize videoOptions=_videoOptions;
@property(retain, nonatomic) FeedPostWebLinkOptions *webLinkOptions; // @synthesize webLinkOptions=_webLinkOptions;
@property(retain, nonatomic) FeedPostTextOptions *textOptions; // @synthesize textOptions=_textOptions;
@property(retain, nonatomic) FeedPostEventBarOptions *eventBarOptions; // @synthesize eventBarOptions=_eventBarOptions;
@property(retain, nonatomic) FeedPostTitleOptions *titleOptions; // @synthesize titleOptions=_titleOptions;
- (_Bool)shouldShowBigSubscribeButtonForPost:(id)arg1;
@property(readonly, nonatomic) _Bool useCompactMode;
- (id)theatreDetailOptions;
- (id)postDetailFeedPostOptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitleOptions:(id)arg1 eventBarOptions:(id)arg2 textOptions:(id)arg3 videoOptions:(id)arg4 webLinkOptions:(id)arg5;

@end
