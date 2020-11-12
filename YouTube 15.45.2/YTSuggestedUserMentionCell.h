//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import <Module_Framework/YTPageStyling-Protocol.h>
#import <Module_Framework/YTThumbnailMapping-Protocol.h>

@class NSString, YTFormattedStringLabel, YTIUserMentionSuggestionRenderer, YTImageView, YTLabel;

@interface YTSuggestedUserMentionCell : YTCollectionViewCell <YTPageStyling, YTThumbnailMapping>
{
    YTIUserMentionSuggestionRenderer *_suggestionRenderer;
    _Bool _isFirstSuggestion;
    _Bool _isOnlySuggestion;
    unsigned long long _displayStyle;
    YTImageView *_channelAvatar;
    YTLabel *_channelNameLabel;
    YTFormattedStringLabel *_channelDescriptionLabel;
}

+ (struct CGSize)sizeOfCellThatFits:(struct CGSize)arg1 suggestionRenderer:(id)arg2 isFirstSuggestion:(_Bool)arg3 isOnlySuggestion:(_Bool)arg4 displayStyle:(unsigned long long)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) YTFormattedStringLabel *channelDescriptionLabel; // @synthesize channelDescriptionLabel=_channelDescriptionLabel;
@property(retain, nonatomic) YTLabel *channelNameLabel; // @synthesize channelNameLabel=_channelNameLabel;
@property(retain, nonatomic) YTImageView *channelAvatar; // @synthesize channelAvatar=_channelAvatar;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (id)thumbnailMappings;
- (void)setUserMentionSuggestionRenderer:(id)arg1 isFirstSuggestion:(_Bool)arg2 isOnlySuggestion:(_Bool)arg3 displayStyle:(unsigned long long)arg4;
- (struct CGSize)layoutWithSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
