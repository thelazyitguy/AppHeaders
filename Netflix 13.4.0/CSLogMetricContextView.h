//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, CSLogMetricsObject, UIButton, UILabel, UITextView;
@protocol CSLogMetricViewDelegateProtocol;

@interface CSLogMetricContextView : UIView
{
    CAShapeLayer *dashLayer;
    _Bool _useMetricColor;
    id <CSLogMetricViewDelegateProtocol> _delegate;
    CSLogMetricsObject *_metric;
    UILabel *_metricTitle;
    UITextView *_bodyView;
    UIButton *_exploreButton;
    double _zRotation;
    struct CGPoint _localPosition;
    struct CATransform3D _localIdentityTransform;
}

- (void).cxx_destruct;
@property double zRotation; // @synthesize zRotation=_zRotation;
@property struct CGPoint localPosition; // @synthesize localPosition=_localPosition;
@property struct CATransform3D localIdentityTransform; // @synthesize localIdentityTransform=_localIdentityTransform;
@property(nonatomic) _Bool useMetricColor; // @synthesize useMetricColor=_useMetricColor;
@property(nonatomic) __weak UIButton *exploreButton; // @synthesize exploreButton=_exploreButton;
@property(nonatomic) __weak UITextView *bodyView; // @synthesize bodyView=_bodyView;
@property(nonatomic) __weak UILabel *metricTitle; // @synthesize metricTitle=_metricTitle;
@property(retain, nonatomic) CSLogMetricsObject *metric; // @synthesize metric=_metric;
@property(nonatomic) __weak id <CSLogMetricViewDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void)exploreButtonTapped:(id)arg1;
- (void)animateOut;
- (void)animateIn;
- (id)initWithFrame:(struct CGRect)arg1;

@end
