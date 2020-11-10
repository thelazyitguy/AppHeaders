//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class PTVReplayThumbnail, PTVScrubbingThumbnailView, UILabel, UIView;

@interface PTVBroadcastEditThumbnailCollectionViewCell : UICollectionViewCell
{
    _Bool _isFocusedThumbnail;
    PTVReplayThumbnail *_thumbnail;
    PTVScrubbingThumbnailView *_thumbnailView;
    UIView *_thumbnailMaskView;
    UILabel *_previewTimeLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFocusedThumbnail; // @synthesize isFocusedThumbnail=_isFocusedThumbnail;
@property(readonly, nonatomic) UILabel *previewTimeLabel; // @synthesize previewTimeLabel=_previewTimeLabel;
@property(readonly, nonatomic) UIView *thumbnailMaskView; // @synthesize thumbnailMaskView=_thumbnailMaskView;
@property(readonly, nonatomic) PTVScrubbingThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) PTVReplayThumbnail *thumbnail; // @synthesize thumbnail=_thumbnail;
- (void)executeState;
- (void)setIsFocusedThumbnail:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

