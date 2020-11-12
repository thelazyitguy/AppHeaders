//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ServiceCore/SCSSystemCollectionViewCell.h>

@class SCSPulsingMultiDotView, UIButton, UIColor, UIFont;
@protocol SCSActionableSystemCollectionViewCellDelegate;

@interface SCSActionableSystemCollectionViewCell : SCSSystemCollectionViewCell
{
    id <SCSActionableSystemCollectionViewCellDelegate> _delegate;
    UIButton *_endSessionButton;
    SCSPulsingMultiDotView *_dotAnimationView;
}

+ (double)dotAnimationViewHeight;
@property(nonatomic) __weak SCSPulsingMultiDotView *dotAnimationView; // @synthesize dotAnimationView=_dotAnimationView;
@property(nonatomic) __weak UIButton *endSessionButton; // @synthesize endSessionButton=_endSessionButton;
@property(nonatomic) __weak id <SCSActionableSystemCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *buttonTextColor;
@property(retain, nonatomic) UIFont *buttonFont;
- (void)setCompleted;
- (void)prepareForReuse;
- (void)setupViews;

@end
