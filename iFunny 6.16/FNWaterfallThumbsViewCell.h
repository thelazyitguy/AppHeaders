//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IFCircularProgressView, NSLayoutConstraint, NSObject, UIImageView, UIView;
@protocol FNWaterfallCollectionModelItem;

@interface FNWaterfallThumbsViewCell : UICollectionViewCell
{
    UIImageView *_imageView;
    NSObject<FNWaterfallCollectionModelItem> *_content;
    UIImageView *_centerImageSubview;
    UIImageView *_leftBottomImageSubview;
    UIImageView *_pinnedImageSubview;
    UIImageView *_bannedImageSubview;
    UIImageView *_scheduledImageSubview;
    NSLayoutConstraint *_leftBottomImageHeight;
    NSLayoutConstraint *_leftBottomImageWidth;
    NSLayoutConstraint *_leftBottomBottomConstraint;
    NSLayoutConstraint *_leadingLeftBottomContraint;
    IFCircularProgressView *_progressBar;
    UIView *_safeModeCoverView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *safeModeCoverView; // @synthesize safeModeCoverView=_safeModeCoverView;
@property(retain, nonatomic) IFCircularProgressView *progressBar; // @synthesize progressBar=_progressBar;
@property(nonatomic) __weak NSLayoutConstraint *leadingLeftBottomContraint; // @synthesize leadingLeftBottomContraint=_leadingLeftBottomContraint;
@property(nonatomic) __weak NSLayoutConstraint *leftBottomBottomConstraint; // @synthesize leftBottomBottomConstraint=_leftBottomBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *leftBottomImageWidth; // @synthesize leftBottomImageWidth=_leftBottomImageWidth;
@property(nonatomic) __weak NSLayoutConstraint *leftBottomImageHeight; // @synthesize leftBottomImageHeight=_leftBottomImageHeight;
@property(nonatomic) __weak UIImageView *scheduledImageSubview; // @synthesize scheduledImageSubview=_scheduledImageSubview;
@property(nonatomic) __weak UIImageView *bannedImageSubview; // @synthesize bannedImageSubview=_bannedImageSubview;
@property(nonatomic) __weak UIImageView *pinnedImageSubview; // @synthesize pinnedImageSubview=_pinnedImageSubview;
@property(nonatomic) __weak UIImageView *leftBottomImageSubview; // @synthesize leftBottomImageSubview=_leftBottomImageSubview;
@property(nonatomic) __weak UIImageView *centerImageSubview; // @synthesize centerImageSubview=_centerImageSubview;
@property(retain, nonatomic) NSObject<FNWaterfallCollectionModelItem> *content; // @synthesize content=_content;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)restoreProgressView;
- (void)addSafeModeCoverIfNeeded:(id)arg1;
- (void)addProgressBar;
- (double)imageAlpha;
- (void)updateLeftBottomImageByModel:(id)arg1;
- (void)updateContentTypeMarkByModel:(id)arg1;
- (void)updateScheduledImageWithItem:(id)arg1;
- (void)updateBannedImageWithItem:(id)arg1;
- (void)updatePinnedImageWithItem:(id)arg1;
- (void)applyFillColor:(id)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)setUpView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;

@end
