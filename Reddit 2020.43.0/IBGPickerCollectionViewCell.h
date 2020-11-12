//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface IBGPickerCollectionViewCell : UICollectionViewCell
{
    UIImage *_thumbnail;
    NSString *_representedAssetIdentifier;
    NSString *_timerValue;
    UIImageView *_imageView;
    UILabel *_timerLabel;
}

@property(retain, nonatomic) UILabel *timerLabel; // @synthesize timerLabel=_timerLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSString *timerValue; // @synthesize timerValue=_timerValue;
@property(retain, nonatomic) NSString *representedAssetIdentifier; // @synthesize representedAssetIdentifier=_representedAssetIdentifier;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
- (void).cxx_destruct;
- (void)setTimerWithDuration:(double)arg1;
- (void)prepareForReuse;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end
