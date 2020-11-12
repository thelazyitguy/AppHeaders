//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentView.h"

@class DYNLabel, GSCImageUrlOptions, UIStackView;
@protocol DYNColorSchemeService;

@interface DYNDirectMessageConversationHeaderContentView : GOOBaseContentView
{
    UIStackView *_mainStackView;
    UIStackView *_avatarsStackView;
    DYNLabel *_privateConversationlabel;
    GSCImageUrlOptions *_imageURLOptions;
    id <DYNColorSchemeService> _colorSchemeService;
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
- (void)updateViewWithObject:(id)arg1;
- (id)userPlaceholderForBot:(_Bool)arg1;
- (void)updateAvatarsWithUsers:(id)arg1;
- (void)setUpConstraints;
- (void)setUpSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
