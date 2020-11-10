//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class T1CardImageView, T1CardMediaViewModel, T1InlineMediaView, TIPImagePipeline;
@protocol T1AutoplayViewContainer, T1CardMediaViewDataSource, T1CardMediaViewDelegate;

@interface T1CardMediaView : UIView
{
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: $__lazy_storage_$_mediaHighlightView
    // Error parsing type: , name: mediaViewDataSource
    // Error parsing type: , name: mediaViewDelegate
    // Error parsing type: , name: $__lazy_storage_$_storedImageView
    // Error parsing type: , name: $__lazy_storage_$_storedPlayerView
    // Error parsing type: , name: imagePipeline
    // Error parsing type: , name: lastGeneratedPlaceholderImage
}

- (void).cxx_destruct;
- (void)restartAnimationsIfNeeded;
- (void)cleanup;
- (void)layoutSubviews;
- (void)fetchImages;
@property(nonatomic, retain) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, readonly) T1CardImageView *imageView;
@property(nonatomic) __weak id <T1CardMediaViewDelegate> mediaViewDelegate; // @synthesize mediaViewDelegate;
@property(nonatomic) __weak id <T1CardMediaViewDataSource> mediaViewDataSource; // @synthesize mediaViewDataSource;
@property(nonatomic, retain) T1CardMediaViewModel *viewModel; // @synthesize viewModel;
@property(nonatomic, readonly) id <T1AutoplayViewContainer> playerViewContainer;
@property(nonatomic, readonly) T1InlineMediaView *inlineMediaView;

@end

