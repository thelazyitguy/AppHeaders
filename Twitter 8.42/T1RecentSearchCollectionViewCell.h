//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNCollectionViewCell.h>

@class T1AvatarImageView, T1RecentSearchViewModel, TIPImagePipeline, UIImageView, UILabel, UIStackView, UIView;

@interface T1RecentSearchCollectionViewCell : TFNCollectionViewCell
{
    TIPImagePipeline *_imagePipeline;
    T1RecentSearchViewModel *_viewModel;
    UIView *_imageToTextSpacerView;
    T1AvatarImageView *_avatarImageView;
    UILabel *_textLabel;
    UILabel *_subtextLabel;
    UIStackView *_stackView;
    UIImageView *_verifiedBadgeView;
}

+ (struct CGSize)recentSearchCellSize;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *verifiedBadgeView; // @synthesize verifiedBadgeView=_verifiedBadgeView;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UILabel *subtextLabel; // @synthesize subtextLabel=_subtextLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) T1AvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *imageToTextSpacerView; // @synthesize imageToTextSpacerView=_imageToTextSpacerView;
@property(retain, nonatomic) T1RecentSearchViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
- (id)accessibilityLabel;
- (void)cleanup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

