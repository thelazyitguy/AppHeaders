//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/QTMButton.h>

@class QTMActivityIndicator, YTFormattedStringLabel, YTImageView, YTLabel;

@interface YTAudioTrackCellThumbnailButton : QTMButton
{
    _Bool _loading;
    YTFormattedStringLabel *_genreLabel;
    YTLabel *_durationLabel;
    YTImageView *_playImageView;
    YTImageView *_thumbnailImageView;
    QTMActivityIndicator *_activityIndicator;
    double _offsetY;
}

- (void).cxx_destruct;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) QTMActivityIndicator *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) YTImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) YTImageView *playImageView; // @synthesize playImageView=_playImageView;
@property(retain, nonatomic) YTLabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) YTFormattedStringLabel *genreLabel; // @synthesize genreLabel=_genreLabel;
- (void)layoutSubviews;
- (id)init;

@end

